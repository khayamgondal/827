%{
// Flex handles ambiguity by matching longest string;
// in case of tie, it matches the first one.

#include <iostream>
#include <stack>

std::stack<std::string> st; // A LIFO imlementation from STD

void push(const std::string&);
void popnprint();

%}

blank       [ ]


%%

{blank}      { push(" ");            }
a            { push("\u0250");       }
b            { push("\u0071");       }
c            { push("\u0254");       }
d            { push("\u0070");       }
e            { push("\u01DD");       }
f            { push("\u025F");       }
g            { push("\u0253");       }
h            { push("\u0265");       }
i            { push("\u0131");       }
j            { push("\u027E");       }
k            { push("\u029E");       }
l            { push("\u006C");       }
m            { push("\u026F");       }
n            { push("\u0075");       }
o            { push("\u006F");       }
p            { push("\u0064");       }
q            { push("\u0062");       }
r            { push("\u0279");       }
s            { push("\u0073");       }
t            { push("\u0287");       }
u            { push("\u006E");       }
v            { push("\u028C");       }
w            { push("\u028D");       }
x            { push("\u0078");       }
y            { push("\u028E");       }
z            { push("\u007A");       }

A            { push("\u2200");       }
B            { push("\u0412");       }
C            { push("\u0186");       }
D            { push("\u15E1");       }
E            { push("\u018E");       }
F            { push("\u2132");       }
G            { push("\u2141");       }
H            { push("\u0048");       }
I            { push("\u0049");       }
J            { push("\u017F");       }
K            { push("\u22CA");       }
L            { push("\u2142");       }
M            { push("\u0057");       }
N            { push("\u004E");       }
O            { push("\u004F");       }
P            { push("\u0500");       }
Q            { push("\u038C");       }
R            { push("\u1D1A");       }
S            { push("\u0053");       }
T            { push("\u22A5");       }
U            { push("\u2229");       }
V            { push("\u039B");       }
W            { push("\u004D");       }
X            { push("\u0058");       }
Y            { push("\u2144");       }
Z            { push("\u005A");       }

1            { push("\21C2");        }
2            { push("\218A");        }
3            { push("\u218B");       }
4            { push("\u07C8");       }
5            { push("\u03DA");       }
6            { push("\u0039");       }
7            { push("\u3125");       }
8            { push("\u0038");       }
9            { push("\u0036");       }
0            { push("\u0030");       }

;            { push("\u061B");       }
,            { push("\u0027");       }
`            { push("\u02D9");       }
'            { push("\u002C");       }
["]          { push("\u201E");       }
!            { push("\u00A1");       }
[?]          { push("\u00BF");       }
_            { push("\u203E");       }
&            { push("\u214B");       }

\n	     { popnprint();}
.            { }
%%
int yywrap() {
	yylex_destroy();
	return 1; 
}

void push(const std::string& ch) {
	st.push(ch);

}
void popnprint() {
	while(!st.empty()) {
		std::cout<<st.top();
		st.pop();
	}
}

