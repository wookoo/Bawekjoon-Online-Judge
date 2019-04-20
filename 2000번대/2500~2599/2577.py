a = int(input())
b = int(input())
c = int(input())
d = str(a*b*c)
f = [0,0,0,0,0,0,0,0,0,0]
for i in d:
	for k in range(10):
		if str(k) in i:
			f[k] += 1
for i in f:
    print(i)
