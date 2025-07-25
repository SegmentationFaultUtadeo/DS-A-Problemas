#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef string str;


int something(){
    return 1;
}

int somethingelse(){
    return 2;
}
int main(){

    // Do you know how to store a string in your favourite programming language?
    str string1 = "Síp, se cómo almacenar una cadena en mi lenguaje de programación favorito!";

    // How to read a given text input line by line?
    str string2;
    while (getline(cin, string2)) cout << "Línea actual: " << string2 << endl;

    // How to concatenate (combine) two strings into a large one?

    // La clasica utilizando operador +
    str string3 = "Hola";
    str string4 = " Mundo del CP";
    cout << "string1: " << string3 << endl;
    cout << "string2: " << string4 << endl;
    cout << "Concatenar las dos: " << endl << string3 + string4 << endl;


    // Agregar una cadena a otra sin tener que crear otro objeto
    cout << "Concatenar en una cadena la otra" << endl;
    str string5 = "Holi";
    str string6 = " Mundito";
    cout << "string1: " << string5 << endl;
    cout << "string2: " << string6 << endl;
    cout << "Concatenar string1 con string2: " << endl;
    string5.append(string6);
    cout << "string1: " << string5 << endl;
    cout << "string2: " << string6 << endl;

    // Para concatenacion de multiples data types
    ostringstream oss;
    oss << "Valor: " << 42 << ", Nombre: " << "Ludwig";
    str result = oss.str();
    cout << result << endl;

    // Usando copy, move con back_inserter
    cout << "Usando copy, move con back_inserter" << endl;
    str string7 = "Holaaaa";
    str string8 = " Mundoooo";
    str string9;
    cout << "string7: " << string7 << endl;
    cout << "string8: "<< string8 << endl;
    copy(string7.begin(), string7.end(), back_inserter(string9));
    copy(string8.begin(), string8.end(), back_inserter(string9));
    cout << "string9: " << string9 << endl;

    // Usando accumulate para combinar una lista de cadenas.
    cout << "Usando accumulate para combinar una lista de cadenas." << endl;
    vector<str> vec_string = {"Competitive", " Progamming", " is ", "epic"};
    str str_result = accumulate(vec_string.begin(), vec_string.end(), str{});
    cout << str_result << endl;


}
