a = input()
a = int(a)
for i in range(a,0,-1):
	print(str(" "*(i-1))+str("*"*(a-i+1)))
