a = int(input())
result =[]
for i in range(a):
    sums =  0
    c = input()
    score = 0
    for j in range(len(c)):
        if j != 0 and c[j-1] == "O" and c[j] =="O":
            score += 1
            sums += score


        elif c[j] == "O":
            score = 1

            sums += score

        else:
            score = 0
    result.append(sums)
for i in result:
    print(i)
