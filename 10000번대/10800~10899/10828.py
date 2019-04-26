class Stack():
    array = [None]*100000
    tops = -1
    def push(self,n):
        self.tops = self.tops +1
        self.array[self.tops] = n


    def top(self):
        return self.array[self.tops]

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
