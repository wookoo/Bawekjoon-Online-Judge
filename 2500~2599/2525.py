h,m = map(int,input().split())
mins = int(input())
h = int((mins+m)/60) + h
m = mins + m
if m >= 60:
    m -= 60*int(m/60)
print(h%24,m)
