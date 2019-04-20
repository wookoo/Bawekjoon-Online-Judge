a = list(map(int,input().split()))
b = a[:]
b.sort()
if a == b:
    print("ascending")
else:
    b.reverse()
    if a==b:
        print("descending")
    else:
        print("mixed")
