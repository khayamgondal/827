x = 9

def f():
  if x == 1:
    return 
  else:
    x = x - 1
    print x
    f()

f()

