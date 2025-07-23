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

1. Se tiene que tener una variable `new_elem` que contenga 


