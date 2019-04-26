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

    def clear(self):
        self.tops = -1

a = Stack()

times = int(input())
for i in range(times):
    a.clear()
    data = input("")
    isTrue = True
    for x in data:
        if(a.empty() and x==')'):
            isTrue = False
            break
        if(x == ')'):
            a.pop()
        else:
            a.push(x)


    if(a.empty()==0):
        isTrue = False


    if(isTrue):
        print("YES")
    else:
        print("NO")
