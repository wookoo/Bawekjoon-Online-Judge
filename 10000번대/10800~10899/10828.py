class Stack():
    array = [None]*100000
    tops = -1
    def push(self,n):
        self.tops = self.tops +1
        self.array[self.tops] = n
        return None


    def top(self):
        if self.array[self.tops] == None:
            return -1
        return  self.array[self.tops]

    def size(self):
        return self.tops + 1

    def empty(self):
        if self.tops == -1:
            return 1
        return 0;
    def pop(self):
        if self.empty():
            return -1
        temp = self.array[self.tops]
        self.tops -=1
        return temp

a = Stack()

times = int(input())
for i in range(times):
    temp = list(input().split())
    if (temp[0] == "pop"):
        print(a.pop())
    elif(temp[0] == "push"):
        a.push(int(temp[1]))
    elif(temp[0] == "size"):
        print(a.size())
    elif(temp[0] ==  "empty"):
        print(a.empty())
    elif(temp[0] == "top"):
        print(a.top())
