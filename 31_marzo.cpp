//
// Created by Alberto Sinigaglia on 01/04/2020.
//

#include <iostream>

using namespace std;
/*
//   px                          y
 // [ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 ]
int F(int& x, int& y) {
    int tot = 0;
    int* px = &x;
    while(px <= &y) {
        tot += *px;
        ++px;
    }
    return tot;
}

int main() {
    int v[10];
    for (int i = 0; i < 10; i++)
        cin >> v[i];
    cout << F(v[0], v[9]) << endl; //vorremmo che stampasse la somma dei valori in v[0..9]
}
*/

/*
int main(){
    // X[0] -> *[4][5]
    float X[2][3][4][5]; // 4 byte
    // tipo di (X-2)[2] == *(X-2+2) == *(X+0) == X[0] == X
}
*/

/*
int main(){
    double Y[2][3][4][5]; // 4 byte
    // l'indirizzo del quinto elemento della seconda riga del terzo strato della prima torta
    //                  5                       2               3                   1
    //                 [4]                     [1]             [2]                  [0]
    //      == Y[0][2][1][4]
    //          *((**Y)+9) +4
    //          Y[0][2][1][4]
}
*/


/*
void F(int *y) {
    for (int i = 0; i < 10; i++)
        (*(y + i))++;
}

int main() {
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    F(A);
    cout << A[0] << ' ' << A[1] << ' ' << A[9] << endl;
}
*/

/*
void F(int *y) {
    for (int i = 0; i < 10; i++)
        (y + i)++;
}
/*
int main() {
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    F(A);
    cout << A[0] << ' ' << A[1] << ' ' << A[2] << ' ' << A[9] << endl;
}
*/



/*
int F(int B[][8], int d) {
    int x = 0;
    for (int i = 0; i < d; i++)
        for (int j = 0; j < 8; j++)
            x = x + B[i][j];
    return x;
}

int main() {
    int A[10][7][8]; //immaginate che A contenga valori definiti
    cout << F(A[2], 7) << endl;
}
*/


/*
void F(int *a, int &b) {
    b = *(a + 1);
    // X[0] = X[1+2];
}

int main() {
    int X[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    F(X + 2, X[0]);
    cout << X[0] << X[1] << X[2] << X[3] << X[4] << endl;
}
*/

/*
int main() {
    double B[5][6][10];
    // l'L-valore del secondo elemento della terza riga del secondo strato
    //                  [1]                     [2]           [1]
    B[1][2][1];
    (**B+ 1*(6 * 10) + 2*(10) +1);
    (*(B[1]+2)+1);
    (*(*(B+1)+2)+1); -> B[1][2][1];
    (*B+1)[2][1];
    *(*B+1 +2)
    *(*B+3)
    *B[3]
    B[0][3][1]

}
*/



