a,b = map(str,input().split())
a = int(a[2] + a[1] + a[0])
b = int(b[2] + b[1] + b[0])
print( a if a>b else b)
