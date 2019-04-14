a = int(input())
c = []
for i in range(a):
	c.append(int(input()))
c.sort() # 버블정렬을 구현해도 된다.
for i in range(a):
    print(c[i])
