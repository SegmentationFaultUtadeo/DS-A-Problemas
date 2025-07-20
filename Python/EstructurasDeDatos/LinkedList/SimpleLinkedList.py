class Node:
    def __init__(self, val):
        self.data = val
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def get_head(self):
        return self.head

    def is_empty(self):
        return self.head == None

    def insert_at_head(self, val):
        newNode = Node(val)
        newNode.next = self.head
        self.head = newNode

    def delete_at_head(self):
        if (is_empty()):
            return
        toDelete = self.head
        self.head = self.head.next
        del(toDelete)

    def search(self, val):
        temp = self.head
        while (temp != None):
            if (temp.data == val):
                return True
            temp = temp.next
        return False

    def insert(self, val):
        newNode = Node(val)
        if (self.head == None):
            self.head = newNode
        else:
            temp = self.head
            while (temp.next != None):
                temp = temp.next
            temp.next = newNode

    def display(self):
        temp = self.head
        while (temp != None):
            print(temp.data, "-> ", end='')
            temp = temp.next
        print("NULL")

    def delete_element(self, val):
        if (self.head == None):
            print("Lista empty")

        if (self.head.data == val):
            toDelete = self.head
            self.head = self.head.next
            del(toDelete)
            return
        else:
            i = self.head
            while (i.next != None and i.next.data != val):
                i = i.next
            if (i.next == None):
                print("No encontrado")
                return
            else:
                toDelete = i.next
                i.next = i.next.next
                del(toDelete)


listaEnlazada = LinkedList()      
# listaEnlazada.insert_at_head(1)       #
# listaEnlazada.insert_at_head(2)       #
# listaEnlazada.insert_at_head(3)       #
# listaEnlazada.insert_at_head(4)       #
# listaEnlazada.insert_at_head(5)       #
# listaEnlazada.display()               #
# print("Eliminar elemento 1")          #
# listaEnlazada.delete_element(1)       #
# listaEnlazada.display()               #
# print("Insertar al final elemento 1") #
# listaEnlazada.insert(1)               #
# listaEnlazada.display()               #

listaEnlazada.insert_at_head(2.2)
arr = [x+0.1 for x in range(1, 6)]
for i in arr:
    listaEnlazada.insert(i)
listaEnlazada.display()


