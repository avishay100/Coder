class MovingAvg():
	def __init__(self):
		self.avg = 0
		self.n = 1

	def calcAvg(self,newNum):
		self.avg = self.avg + (newNum - self.avg)/self.n
		self.n += 1
		return self.avg


x = [1,2,5,9,7,13,6,8]
ma = MovingAvg()

for num in x:
	print(str(ma.calcAvg(num)))