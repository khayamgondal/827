z=1
def f(x):
  if x == 1:
    print z
    return
  else:
    y = x
    x = x -1
    z = z * y 
    f(x)

f(5)
z = 1
f(6)
