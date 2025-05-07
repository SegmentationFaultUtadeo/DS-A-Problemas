class Pila {
    constructor() {
      this.items = [];
    }
  
    // Agrega un elemento al tope de la pila
    push(element) {
      this.items.push(element);
    }
  
    // Elimina y retorna el elemento en el tope
    pop() {
      if (this.is_empty()) {
        throw new Error("La pila está vacía");
      }
      return this.items.pop();
    }
  
    // Devuelve el elemento del tope sin eliminarlo
    peek() {
      if (this.is_empty()) {
        throw new Error("La pila está vacía");
      }
      return this.items[this.items.length - 1];
    }
  
    // Verifica si está vacía
    is_empty() {
      return this.items.length === 0;
    }
  
    // Devuelve el tamaño actual
    size() {
      return this.items.length;
    }
  }


  const miPila = new Pila();

console.log("¿Está vacía?", miPila.is_empty()); // true

miPila.push("A");
miPila.push("B");
miPila.push("C");

console.log("Tamaño actual:", miPila.size()); // 3
console.log("Elemento en el tope:", miPila.peek()); // "C"

console.log("Eliminando:", miPila.pop()); // "C"
console.log("Nuevo tope:", miPila.peek()); // "B"
console.log("Tamaño actual:", miPila.size()); // 2

console.log("¿Está vacía?", miPila.is_empty()); // false

// Vaciar la pila
miPila.pop();
miPila.pop();
console.log("¿Está vacía después de eliminar todo?", miPila.is_empty()); // true
