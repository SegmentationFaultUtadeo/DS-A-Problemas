#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int main(){

    int S = 34;
    cout << "S: " << S  << " (base 10)" << endl;
    cout << "S: " << (bitset<6>(S)) << " (base 2)" << endl;

    cout << "--------------------Múltiplicar/dividir por 2--------------------" << endl;
    cout << "S << 1 = S * 2: " << (S << 1) << " (base 10) " << (bitset<7>(S<<1)) << " (base 2) "<< endl;
    S <<= 1;
    cout << "S >> 2 = S/4: " << (S >> 2) << " " << bitset<6>(S>>2) <<  " (base 2)" << endl;
    S >>= 2;
    cout << "S>>1 = S/2: " << (S >> 1) << " (base 10) " << bitset<6>(S>>1) << " (base 2)" << endl;

    cout << "--------------------Set/turn el j-th item--------------------" << endl;
    S = 34;
    cout << "S: " << S << " (base 10) = " << bitset<6>(S) << " (base 2)" << endl;
    int j = 3;
    cout << "j = " << j << " 1 << j = " << bitset<6>(1<<j) << " <- bit '1' es movido a la izquierda 3 veces" << endl;
    cout << "S |= (1 << j) : " << endl;
    cout << "S = " << S << " = " << bitset<6>(S) << endl;
    cout << "(1 <<j): " << bitset<6>(1 << j) << endl;
    cout << "        -------- OR (verdadero si alguno de los bits es verdadero)" << endl;
    S |= ( 1 << j );
    cout << "S  = " << S << "  " << bitset<6>(S) << " (base 2)" << endl;

    cout << "Mirar si el j-th item está prendido" << endl;
    cout << "Se usa la operación AND T = S & (1<<j)" << endl;
    cout << "Si T = 0, entonces el j-th elemento está apagado" << endl;
    cout << "Si T != 0, entonces el j-th elemento está prendido" << endl << endl;
    S = 42;
    cout << "S = " << S << " (base 10) = " << bitset<6>(S) << " (base 2)" << endl;
    j = 3;
    cout << "j = " << j << ",  1 << j  =  " << bitset<6>(1<<j) << " <- bit '1' es movido a la izquierda 3 veces" << endl;
    cout << "                  -------  AND" << endl;
    int T = 0;
    T =  S & ( 1 << j );
    cout << "T = " << T << " (base 10)  = " << bitset<6>(T) << " (base 2)" << endl;


    return 0;
}
