def f(x):
  if x < 1:
    return
  else:
    x = x - 1
    print x
    f(x)

f(9)

