# Algoritmos, Estructuras de Datos y Problemas

Repositorio que almacena el trabajo del Semillero de Programación Competitiva, Segmentation Fault. Contienen problemas de diferentes portales web resueltos, estructuras de datos y algoritmos. Esto con el fin de ser material de estudio y práctica para los miembros. 


# Cómo organizar el repositorio 

El repositorio tiene los siguientes lenguajes


``` text
├── C#
├── C++
├── Java
├── JavaScript
├── Python
└── Ruby
```

Para organizar cada ejercicio se sugiere utilizar el siguiente orden (este ejemplo es con C++, cambiar las extensiones de los archivos y el nombre del directorio por el lenguaje correspondiente):

```text
├── C++
│   ├── Algoritmos
│   │   ├── BinaryExponentiation
│   │	│   ├── BinaryExponentiation.cpp
│   │  	│   ├── ...
│   │ 	│   └── README.md
│   │  	├── ...
│   │ 	└── MasAlgoritmos
│   ├── EstructurasDeDatos
│   │   ├── LinkedList
│   │	│   ├── SimpleLinkedList.cpp
│   │  	│   ├── ...
│   │ 	│   └── README.md
│   │   ├── ...
│   │   └── MasEstructuras
│   └── Problemas
│       ├── CodeForces
│   	│   ├── KevinAndCombinationLock
│       │   │   ├── KevinAndCombinationLock.cpp
│       │   │	├── ...
│       │   │   └── README.md
│       │   ├── ...
│ 	│   └── MasProblemas
│       ├── ...
│       └── MasPortalesDeProblemas
```

A continuación, se van a explicar qué colocar en cada directorio

## Lenguaje

Dentro del directorio del nombre del lenguaje de programación (para el caso del ejemplo C++) deben ir 3 directorios

- `Algoritmos`
- `EstructurasDeDatos`
- `Problemas`

Notar la **notación UpperCamelCase**, se debe seguir esta nomenclatura para todo lo que tiene que ver con nombres de archivos y de directorios. Tomar esto muy en cuenta para todo el repositorio.


### Algoritmos


Dentro de este directorio deben ir los directorios con los nombres de todos los algoritmos que se deseen investigar, para el caso del ejemplo, se tiene el algoritmo de Exponenciación Binaria (BinaryExponentiation, preferible **utilizar inglés** debido a que se encuentra más contenido en este idioma y ayuda a la investigación por fuera de lo que se muestra en el repositorio), dentro del directorio del nombre del algoritmo debe haber uno o varios archivos con la implementación del algoritmo. También, dentro del mismo directorio debe haber un README explicando el algoritmo (preferiblemente primero empiece explicando la teoría en el README y después pase a codificar, incluso, a partir de la teoría puede deducir el algoritmo!). 


### EsctructurasDeDatos


Dentro de este directorio deben ir las estructuras de datos a estudiar. Cada estructura debe tener su propio directorio, en el caso del ejemplo es una lista enlazada con directorio de nombre `LinkedList` y dentro del directorio de la estructura deben ir todas las posibles implementaciones de esta estructura en código y también en el README deben estar explicadas cada una de las implementaciones, tanto la teoría como el código.


### Problemas

Dentro del directorio de `Problemas` debe tener otros directorios con el nombre de los portales/entidades/empresas/organizaciones de donde se solucionó el problema. Se da el ejemplo de un directorio con el nombre de `CodeForces`, dentro de este directorio van los nombres de los problemas de dicha plataforma. Pueden haber más portales, por ejemplo, para problemas de sitios web, se puede crear los directorios de; `LeetCode`, `Kattis`, `UVaOnlineJudge`, etc. Para problemas que se sacaron de eventos, se puede colocar el nombre de los eventos, por ejemplo; `ICPC`, `IOI`, `MaratonUtadeo`, etc. 

#### Directorio Portal de Problemas

Dentro de estos directorios deben haber un directorio por cada problema, en el ejemplo de arriba se da el problema de CodeForces `KevinAndCombinationLock`. Dentro del directorio de cada ejercicio deben estar las posibles soluciones en código y un README con el título del ejercicio, enlace, enunciado, input/output, InputSample/OutputSample, explicación de la solución. Esta sería una plantilla en Markdown para eso:

```
# Nombre Del Problema 

www.enlacedelproblema.com

Enunciado del problema... Blablabla

## Input

Enunciado de la sección de input del problema... Blablabla

## Output

Enunciado de la sección de output del problema... Blablabla

### Input Sample

Aquí van los tests iniciales del problema. Recordar ponerlos en un fragmento de código con text

### Output Sample

Aquí va la salida esperada de esos tests iniciales. Recordar ponerlos en un fragmento de código con text

#### Note (opcional)

Posibles notas del ejercicio.

# Soluciones

## Nombre primera posible solución

### Conceptualmente

Explicar conceptualmente la solución sin necesidad de nada de código. Utilizar matemáticas, dibujos hechos en texto plano, etc.

#### Código

Explicar cada línea/fragmento de código de la solución. Utilizar fragmentos de código en Markdown.

#### Análisis de Complejidad

##### Temporal

Hacer el análisis temporal de todo el código en total. Y si es posible, colocar las complejidades de cada operación o fragmento que se considere necesario.

##### Espacial

Hacer el análisis espacial de todo el código en total. Y si es posible, colocar las complejidades de cada operación o fragmento que se considere necesario.

## Nombre segunda posible solución

Mismas secciones que para la primera solución.

```


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

