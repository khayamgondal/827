
def f():
  for x in range(3):
    if x < 3:
      print x
    else:
      print x+1

def g(n):
  x = 0
  while x < n:
    if x < 3:
      print x
    elif x == 2:
        print x
    elif x == 5:
        print x
    else:
      print x+1
    x += 1

def h():
  sum = 0
  for w in range(3):
      if w < 3:
          for x in range(3):
              for y in range(4):
                  for z in range(5):
                      if z < 3:
                          sum += z
  return sum

f()
g(3)
h()
