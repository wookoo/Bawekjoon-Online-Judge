hash = {0:"D",1:"C",2:"B",3:"A",4:"E"}
for i in range(3):
    inputs = map(int,input().split())
    calSum = sum(inputs)
    print(hash[calSum])
