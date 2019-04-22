count = int(input())

for i in range(count):
    Line = list(input().split())
    loop = int(Line[0])
    needChange = Line[1]
    for k in needChange:
        for i in range(loop):
            print(k,end="")
    print()
