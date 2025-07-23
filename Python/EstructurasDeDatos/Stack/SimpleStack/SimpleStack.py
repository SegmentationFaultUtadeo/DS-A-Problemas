class Node:
    def __init__(self, val):
        self.data = val
        self.next = None

class SimpleStack:
    def __init__(self):
        self.top = None
        self.size = 0

    def is_empty(self):
        if (self.top == None):
            return True
        return False

    def push(self, val):
        newNode = Node(val)
        if (self.top == None):
            self.top = newNode
            self.size+=1
            return
        else:
            newNode.next = self.top
            self.top = newNode
            self.size += 1
            return

    def pop(self):
        if (self.top == None):
            print("Nada por eliminar")
            return None
        temp = self.top
        self.top = self.top.next
        self.size -=1
        return temp

    def peek(self):
        if (self.is_empty()):
            print("Empty")
            return None
        return self.top

    def get_size(self): return self.size

    def display(self):
        iter = self.top
        while (iter != None):
            print(iter.data, sep=" ")
            iter = iter.next
        return


print("Inicializar la pila")
pila = SimpleStack()
print("Size de la pila", pila.get_size())
print("Insertar elementos 1, 2 y 3")
for i in range(1, 4):
    pila.push(i)
print("Imprimir pila")
pila.display()
print("Size de la pila", pila.get_size())
print("Eliminar elemento top", pila.pop().data)
print("Imprimir pila")
pila.display()
print("Elemento al tope de la pila", pila.peek().data)
print("Pila empty?", pila.is_empty())
print("Eliminar los elementos restantes")
pila.pop()
pila.pop()
print("Imprimir pila")
pila.display()
print("Pila empty?", pila.is_empty())
