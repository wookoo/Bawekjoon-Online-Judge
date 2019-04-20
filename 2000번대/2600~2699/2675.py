size = int(input())

k = []
for i in range(size):
    c = []
    a = list(map(str,input().split()))
    pars = a[1]
    for i in range(len(pars)):
        c.append((pars[i])*int(a[0]))
    par = ""
    for i in c:
        for j in i:
            par += j
    k.append(par)
for i in k:
    print(i)
