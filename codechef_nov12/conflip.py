import sys

rl = sys.stdin.readline
t = int(rl())

for _ in range(t):
	g = int(rl())
	for _ in range(g):
		start, N, count = map(int, sys.stdin.readline().split())
		if N % 2 == 0:
			print N/2
		else:
			if start == count:
				print N/2
			else:
				print N/2 + 1
