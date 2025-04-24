# Estructuras-De-Datos
Repositorio que almacena las estructuras de datos en diferentes lenguajes de programación del Semillero de Programación Competitiva de la Universidad Jorge Tadeo Lozano.


# Cómo organizar el repositorio 

El repositorio tiene los siguientes lenguajes


``` text
├── C#
├── C++
├── Java
├── JavaScript
└── Ruby
```


Para organizar cada estructura y sus ejercicios se debe realizar de la siguiente manera:

``` text
├── Lenguaje
│   ├── LinkedList
│   │   ├── Ejercicios
│   │       └── LC1TwoSum
│   │           └── TwoSum.ext_lenguaje
│   │           └── README.md
│   │   └── Implementaciones
│   │       └── SimpleLinkedList.ext_lenguaje
│   │       └── README.md
│   └── README.md
```


Esto significa que por cada lenguaje debe haber un directorio por estructura y un `README.md`. Este último archivo debe contener qué versión del lenguaje se está manejando y (si el lenguaje es compilado) cómo se compila, además de información adicional que utilicen para trabajar. Por ejemplo, para C++ el archivo `README.md` deberá ser algo así:

--- 

Códigos compilados desde un sistema operativo GNU/Linux Arch con procesador de arquitectura x86, versión de g++ (GCC) 14.2.1 20250207. Utilizando las siguientes instrucciones:

``` sh
g++ file.cpp -g -o binary
```

Se utiliza la bandera `-g` para poder debuggear si es necesario utilizando el programa `gdb` utilizando:

``` sh
gdb binary
```

--- 


Por otra parte, dentro de cada directorio de cada estructura se debe colocar otros dos directorios `Implementaciones` y `Ejercicios`. Dentro de implementaciones deben estar las diferentes estructuras con sus métodos y un `README.md` explicando la estructura y los métodos en forma de documentación. Por otra parte, dentro del directorio `Ejercicios` deben haber otros subdirectorios cuyos nombres se deben componer por lo siguiente: `Abreviación fuente del ejercicio + Número o identificador del ejercicio + Nombre del ejercicio`. Por ejemplo, para el ejercicio [https://leetcode.com/problems/two-sum/description/](Two Sum) de LeetCode, el directorio debe llamarse `LC1TwoSum`, evitar el uso de carácteres especiales y sin espacios. Dentro de los directorios de cada ejercicio debe estar la solución en el lenguaje del directorio principal y un `README.md` con el link del ejercicio, el enunciado y la solución del código explicada en lenguaje natural.


Por último, recordar crear cada uno su rama y después de trabajar hacer el respectivo merge a main.

