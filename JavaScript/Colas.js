// Definición de la clase Cola
class Cola {
    constructor() {
      this.items = [];
    }
  
    enqueue(element) {
      this.items.push(element);
    }
  
    dequeue() {
      if (this.is_empty()) {
        throw new Error("La cola está vacía");
      }
      return this.items.shift();
    }
  
    is_empty() {
      return this.items.length === 0;
    }
  
    front() {
      if (this.is_empty()) {
        throw new Error("La cola está vacía");
      }
      return this.items[0];
    }
  
    rear() {
      if (this.is_empty()) {
        throw new Error("La cola está vacía");
      }
      return this.items[this.items.length - 1];
    }
  }
  
  // Script para probar la clase Cola
  const miCola = new Cola();
  
  console.log("¿Está vacía?", miCola.is_empty()); // true
  
  miCola.enqueue("X");
  miCola.enqueue("Y");
  miCola.enqueue("Z");
  
  console.log("Elemento al frente:", miCola.front()); // "X"
  console.log("Elemento al final:", miCola.rear());   // "Z"
  
  console.log("Eliminando:", miCola.dequeue()); // "X"
  console.log("Nuevo frente:", miCola.front()); // "Y"
  console.log("Nuevo final:", miCola.rear());   // "Z"
  
  console.log("¿Está vacía?", miCola.is_empty()); // false
  
  // Vaciar la cola
  miCola.dequeue();
  miCola.dequeue();
  console.log("¿Está vacía después de eliminar todo?", miCola.is_empty()); // true
  
