class queue():
    last = 0
    array = [None]*10000
    index = -1

    def push(self,n):
        self.array[self.last] = n
        self.last += 1

    def getSize(self):
        return (self.last - (self.index+1) )

    def empty(self):
        if(self.last == self.index+1):
            return 1
        return 0

    def pop(self):
        if(self.empty()):
            return -1
        self.index +=1
        return self.array[self.index]

    def front(self):
        if(self.empty()):
            return -1
        return self.array[self.index+1]

    def back(self):
        if(self.empty()):
            return -1
        return self.array[self.last-1]


a = queue()
times = int(input())
for i in range(times):
    inputs = input().split()
    command = inputs[0]
    if command == "push":
        a.push(inputs[1])
    elif command == "pop":
        print(a.pop())
    elif command == 'front':
        print(a.front())
    elif command == 'size':
        print(a.getSize())
    elif command =='empty':
        print(a.empty())
    else:
        print(a.back())
