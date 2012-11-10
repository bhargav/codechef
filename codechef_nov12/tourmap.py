import sys

input = sys.stdin
t = int(file.readline())

for _ in range(t):
	n = int(file.readline())
	count = 0
	CostMap = {}
	NextMap = {}
	CountMap = {}
	for _ in range(n-1):
		start, end, cost = file.readline().split()
		CostMap[start] = cost
		NextMap[start] = end
		if start in CountMap:
			del CountMap[start]
		else:
			CountMap[start] = True
		if end in CountMap:
			del CountMap[end]
		else:
			CountMap[end] = True	
		count += int(cost[:-1])
	for place in CountMap:
		if place in NextMap:
			break
	while place in NextMap:
		print "{0} {1} {2}".format(place, NextMap[place], CostMap[place])
		place = NextMap[place]
	print "{0}$".format(count)