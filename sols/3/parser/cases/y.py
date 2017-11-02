
def f():
  for x in range(3):
    if x < 3:
      print x
      try:
          f = open('myfile.txt')
          s = f.readline()
          i = int(s.strip())
      except OSError as err:
          print("OS error: {0}".format(err))
      except ValueError:
          print("Could not convert data to an integer.")
      except:
          print("Unexpected error:", sys.exc_info()[0])
          raise
      finally:
          print('Goodbye, world!')
    else:
      print x+1

def g(n):
    try:
        f = open('myfile.txt')
        s = f.readline()
        i = int(s.strip())
    except OSError as err:
        print("OS error: {0}".format(err))
    except ValueError:
        print("Could not convert data to an integer.")
    except:
        print("Unexpected error:", sys.exc_info()[0])
        raise

def h():
  sum = 0
  for w in range(3):
      for x in range(3):
          for y in range(4):
              for z in range(5):
                  sum += z
  return sum

f()
g(3)
h()
