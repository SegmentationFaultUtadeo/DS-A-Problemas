class Node:
    def __init__(self, val):
        self.data = val
        self.next = None


class Queue:
    def __init__(self):
        self.back = None
        self.head = None

    def enqueue(self, val):
        newNode = Node(val)
        if (self.head == None):
            self.head = newNode
            self.back = newNode
        else:
            self.back.next = newNode
            self.back = newNode


    def dequeue(self):
        if (self.head == None):
            return None
        else:
            temp = self.head
            self.head = self.head.next
            return temp

    def is_empty(self):
        if (self.head == None):
            return True
        return False

    def front(self):
        return self.head

    def rear(self):
        return self.back

    def display(self):
        iter = self.head
        while (iter != None):
            print(iter.data, end=" ")
            iter = iter.next
        print()

    def get_size():
        iter = self.head
        size = 0
        while (iter != None):
            size += 1
            iter = iter.next

        return size
        

q =  Queue()
arr = [x for x in range(1, 8)]
for i in arr:
    q.enqueue(i)

q.display()    
