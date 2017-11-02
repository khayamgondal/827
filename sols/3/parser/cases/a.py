
def f():
	try:
		f = open('myfile.txt')
	except OSError:
		print("OS error: {0}".format(err))
	except ValueError:
		print("Could not convert data to an integer.")
	except:
		print("Unexpected error:", sys.exc_info()[0])
		raise
	finally:
		print('Goodbye, world!')


