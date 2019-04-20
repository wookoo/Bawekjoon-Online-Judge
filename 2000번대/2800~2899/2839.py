input = int(input())
three = 0
while (1):
    if (input % 5 == 0):
        print("%d" %(input / 5 + three))
        break
    elif (input <= 0):
        print("-1")
        break
    else:
        input -= 3
        three+=1
