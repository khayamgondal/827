def k():
  print x
  if x < 1:
    return
  x = x-1
  k()

x = 10
k()

