//
// Created by Alberto Sinigaglia on 09/05/2020.
//

#include <iostream>

using namespace std;

//Si consideri il seguente frammento di programma:
void f() {
    int A[100], i, j, k; // si assume che A contenga valori sensati e con oA si indica l'array originale
    cin >> i >> j; // si assume che i valori letti siano >0 e tali che i+j <100
    for (k = i; k <= i + j; k++) //R1
        for (int z = k; z < i + j; z++) //R2
            A[k] = A[k] + A[z];
}
//Si deve scegliere quali risposte sono corrette per il programma. Ci può essere più di 1 risposta corretta.
// Con somma(oA[a..b]) si indica la somma degli elementi di oA dalla posizione a alla b.
/**
 * Alla fine del calcolo A[i+j]=oA[i+j]
 * R2=(k<=z<=i+j) &&( A[k]=oA[k]+somma(oA[k..z-1]))
 * R1=(i<=k<=i+j+1) && (per ogni s in [i..k-1], A[s]=oA[s]+somma(oA[s..i+j-1]))
 * Alla fine del calcolo A[i+j+1..99]=oA[i+j+1..99]
 */










//Supponete di avere 6 bit a disposizione per rappresentare gli interi
// in complemento a 2. Quale seguenza di bit rappresenta il valore -31?
/**
 * 1 0 0 0 0 1       prendiamo +31 = 1111, lo invertiamo 0000, e ci sommiamo 1 0001
 */











//Si consideri la seguente funzione:
int *f(int *&x) {
    return x;
}
//scegliere l'affermazione più appropriata per questa funzione.
/**
 * La funzione è corretta e non ritorna dangling reference
 */















//Data la dichiarazione double Y [2][3][4][5] quale delle seguenti espressioni
// ha come valore l'indirizzo del secondo elemento della terza riga
// del primo strato della seconda torta.
/**
 *   *(*(Y[1])+2)+1
 */













//Si consideri la seguente funzione:
int *f(int **a) {
    int b = 10, *p = &b;
    **a = *p;
    return *a;
}
//scegliere l'affermazione più appropriata per questa funzione.
/**
 * La funzione è corretta e non ritorna dangling pointer
 */









// Assumete di avere 8 bit a disposizione per una rappresentazione di reali floating point.
// Gli 8 bit sono usati nel modo seguente: 1 per il segno, 4 per la mantissa e 3 per l'esponente.
// Che valore in base 10 rapprenta il seguente valore binario 0 1 1 0 1 0 1 1?
/**
 * -14.5
 *      segno 0 -> -
 *      esponente 011 -> 3
 *      mantissa 1101
 *      numero = - (1.1101 * 2^3)
 *               - (1110.1)
 *               - [2+4+8].[2^-1]
 *               - 14 . 5
 *
 */







//Si consideri la seguente funzione:
int *f1(int **a) {
    int b = 10, *p = &b;
    *a = p;
    return *a;
}
//scegliere l'affermazione più appropriata per questa funzione.
/**
 * La funzione ritorna un dangling pointer
 *      *a é l'indirizzo di p che è una variabile locale
 */












//Si consideri la seguente funzione:
int *f3(int *x) {
    return x;
}
//scegliere l'affermazione più appropriata per questa funzione.
/**
 * La funzione è corretta e non ritorna dangling reference
 */











// Data la dichiarazione float X[2][3][4][5] che valore e che tipo ha l'espressione (X-4)[4] ?
/**
 * tipo float (*) [4][5] e valore X
 *      (X-4)[4] == *(X-4+4) == *X == X[0]
 */























































































































