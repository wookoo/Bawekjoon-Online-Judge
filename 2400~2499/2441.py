a = input()
a = int(a)
for i in range(a,0,-1):
	print(str(" "*(a-i))+str("*"*i))
