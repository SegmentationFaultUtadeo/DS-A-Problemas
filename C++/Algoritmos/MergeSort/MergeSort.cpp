#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


void merge(vector<int>& arr, int left, int mid, int right){
    /*
    ** arr es el vector a modificar/ordenar
    ** left es el índice en donde empieza la parte de la izquierda del vector
    ** mid es el índice final del array de la izquierda
    ** right es el índice final del array de la derecha
     */


    int n1 = mid - left + 1; // Tamaño del array de la izquierda
    int n2 = right - mid; // Tamaño del array de la derecha

    vector<int> L(n1), R(n2); // Declaración de tamaños para arrays dinámicas, visite https://github.com/stevenhalim/cpbook-code/blob/master/ch2/lineards/resizeable_array.cpp para más info

    // Copiar datos del vector original a los otros vectores de la izquierda y la derecha. Note bien cómo se definen los rangos de los índices.
    for (int i = 0; i < n1; ++i) L[i] = arr[left + i];
    for (int j = 0; j < n2; ++j) R[j] = arr[mid+1 + j];

    // Índices para el array de izquierda a derecha
    int i = 0, j = 0, k = left;


    // Doble puntero e ir comparando si los elementos de la array de la izquierda son menores o iguales que los del array de la derecha. Si sí, entonces inserte en arr[k]
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            ++i;
        } else {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }

    // Después del while de arriba van a quedar algunos
    // elementos sin poder procesar por parte de los arrays
    // ya que, recuerde que se utiliza una condición &&
    // En el momento en el que i sea igual a n1 el ciclo
    // va a parar, por lo tanto, los elementos del array
    // derecho van a quedar sin procesar (algunos).

    // Si los elementos de la izquierda quedaron faltantes:
    while (i < n1){
        arr[k] = L[i];
        ++i; ++k;
    }

    // Si los elementos de la derecha quedaron faltantes;
    while (j < n2){
        arr[k] = R[j];
        ++j; ++k;
    }


}

void mergeSort(vector<int>& arr, int left, int right){
    if (left >= right) return;

    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid +1, right);
    merge(arr, left, mid, right);
}


int main(){

    vector<int> arr = {4, 2, 7, 1};
    mergeSort(arr, 0, (int)arr.size()-1);
    for (auto i : arr) cout << i << " " ;


return 0;
}
