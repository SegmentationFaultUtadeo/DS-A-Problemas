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

    S = 42;
    cout << "S = " << S << " (base 10) = " << bitset<6>(S) << " (base 2)" << endl;
    j = 2;
    cout << "j = " << j << ", 1 << j    = " << bitset<6>(1<<j) << " <- bit '1' es movido a la izquierda dos veces"  << endl;
    T = S & ( 1 << j );
    cout << "                  -------  AND" << endl;
    cout << "T = " << T << " (base 10)  = " << bitset<6>(T) << " (base 2) ->  cero, el segundo item está apagado\n" << endl << endl;
    cout << "Limpiar/apagar el j-th item del set," << endl;
    cout << "usar la operación bitwise AND S&= ~(1<<j)" << endl;

    S = 42;
    cout << "S = " << S << " (base 10)  = " << bitset<6>(S) << " (base 2)" << endl;
    j = 1;
    cout << "j = 1" << j << ", ~(1 << j) = " << bitset<6>(~(1<<j)) << " <- '~' es la operación NOT en bitwisee " << endl;
    cout << "                    -------  AND" << endl;
    S &= ~(1<<j);
    cout << "S = " << S << " (base 10)  = " << bitset<6>(S) << " actualizar S a su nuevo valor" << endl;


    cout << endl << endl << endl;

    cout << "Para flipear el estado del j-th item del set," << endl;
    cout << "usar la operación XOR S^= (i<<j)" << endl;
    S = 40;
    cout << "S = " << S << " (base 10)   = " << bitset<6>(S) << " (base 2)" << endl;
    j = 2;
    cout << "j = " << j << ", (1 << j)    = " << bitset<6>(1<<j) << " <- bit '1' es movido a la izquierda dos veces" << endl;
    cout << "                     -------  XOR <- verdadero si ambos bits son diferentes" << endl;
    S ^= ( 1 << j );
    cout << "S = " << S << " (base 10)   = " << bitset<6>(S) << " (base 2) Actualiza S a su nuevo valor" << endl << endl;

    S = 40;
    cout << "S = " << S << " (base 10)   = " << bitset<6>(S) << " (base 2)" << endl;
    j = 3;
    cout << "j = " << j << ", ( 1 << j)   = " << bitset<6>(1 << j) << " <- bit '1' es movido a la izquierda 3 veces" << endl;
    cout << "                     -------  XOR <- verdadero si ambos bits son diferentes" << endl;
    S^= ( 1 << j );
    cout << "S = " << S << " (base 10)   = " << bitset<6>(S) << " (base 2) Actualiaz S a su nuevo valor" << endl;

    cout << endl << endl << endl;

    cout << "Para obtener el valor del digito menos significativo de S que está prendido (primero de la derecha)," << endl;
    cout << "Usar T = ((S) & -(S)). Esta operación se abrevia como LSOne(S)" << endl;
    cout << endl;
    S = 40;
    cout << "S  = " << S << "  (base 10)  =  " << bitset<10>(S) << " (32 bits, base 2)" << endl;
    cout << "-S = " << -S << " (base 10)  =  " << bitset<10>(-S) << "  coger el complemento" << endl;
    cout << "                  -----------------  AND" << endl;
    T = ((S) & -(S));
    cout << "T = " << T << " (base 10)     =  " << bitset<10>(T) << " (3rd bit de la derecha está prendido)" << endl;

    cout << endl << "T es una potencia de 2, i.e, 2^j" << endl;
    cout << "para obtener el indice j (de la derecha), se puede usar __builtin_ctz(T)" << endl;

    cout << "Ennumerar todos los subconjuntos de una bitmask:" << endl << endl;
    int mask = 18;
    for (int subset = mask; subset; subset = (mask & (subset -1)))
        cout << subset << endl;

    cout << "Contar cuántos bits hay en S que estén en 1 cuántos están en 0" << endl;
    cout << "__builtin_popcount(32) " << bitset<6>(32) << " (base 2), número de bits en 1: " << __builtin_popcount(32) << endl;
    cout << "__builtin_popcount(30) " << bitset<5>(30) << " (base 2), número de bits en 1: " << __builtin_popcount(30) << endl;
    cout << "__builtin_popcountl((1l<<62)-1l) 2^62-1, número de bits en 1: " << __builtin_popcountl((1l << 62) - 1l  ) << endl;
    cout << "__builtin_ctz(32) " << bitset<6>(32) << " (base 2), número de bits en 0: " << __builtin_ctz(32) << endl;
    cout << "__builtin_ctz(30) " << bitset<5>(30) << " (base 2), número de bits en 0: " << __builtin_ctz(30) << endl;
    cout << "__builtin_ctzl(1l<<62) 2^62, número de bits en 0: " << __builtin_ctzl((1l << 62)) << endl;


    cout << bitset<6>(55) << endl;
    cout << (55 | (1 << 5)) << endl;

    cout << endl;
    cout << "14: " << bitset<4>(14) << endl;
    cout << "LSOne(14): " <<  __builtin_ctz((14) & -(14)) << endl;

    cout << "58: " << bitset<6>(58) << " bits that are 1: ";
    cout << __builtin_popcount(58) << endl;

    cout << "49: " << bitset<6>(49) << endl;
    cout << "49 | 1 << 0 = " << (49 | 1 << 0 ) << endl;

    cout << "46: " << bitset<6>(46) << endl;
    cout << "(46) & -(46) = " << (46 & -46) << endl;
    cout << "__builtin_ctz((46) & -(46)) = " << __builtin_ctz((46) & -(46)) << endl;
    cout << "111011 (base 2)" << endl;
    cout << bitset<6>("111011").to_ulong() << " (base 10)" << endl;
    cout << "59: " << bitset<6>(59) << endl;


    return 0;
}
