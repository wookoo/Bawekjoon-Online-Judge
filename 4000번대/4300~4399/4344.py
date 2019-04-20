import sys
c = int(sys.stdin.readline())
array = []
for i in range(c):
    sum = 0
    people = 0
    b = list(map(int,(sys.stdin.readline()).split()))
    b = b[1:]
    for d in b:
        sum += d
    avr = sum/len(b)
    for d in b:
        if d > avr:
            people += 1
    array.append(people/len(b)*100)
    
            
for i in array:
    print("%.3f%%"%(i))
