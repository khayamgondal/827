x = 10
def k():
  print x
  if x < 1:
    return
  x = x-1
  k()


k()

