# Minimum Stack

## Modificación de la pila

Básicamente se busca modificar la estructura para que buscar el elemento más chico se pueda hacer en $O(1)$, mientras se mantiene el mismo comportamiento asintótico para agregar y quitar elementos. 

Para hacer esto, los elementos almacenados en el stack van a ser por pares (`pair` en C++): el elemento en sí mismo y el mínimo del stack.

``` c++
stack<pair<int, int>> st;
```

Para obtener el elemento más chico de la pila se realiza únicamente `stack.top().second`. Agregar y eliminar se sigue haciendo en tiempo constante.

### Implementación

- Agregar un elemento:

``` c++
int new_min = st.empty() ? new_elem : min(new_elem, st.top().second) ;
st.push({new_elem, new_min});
```

Esto hace:

1. Se tiene que tener una variable `new_elem` que contenga un valor, ya sea input o definido.
2. Después se crea la variable `new_min`.
3. Si la pila está vacía entonces que `new_min` sea `new_elem`.
4. Si no, encuentre el mínimo entre `new_elem` y `stack.top().second` y la salida la asigna a `new_min`.
5. Se hace push al stack una tupla donde el primer elemento sea `new_eleme` y el segundo `new_min`. 



