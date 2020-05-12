//
// Created by Alberto Sinigaglia on 31/03/2020.
//

#include <iostream>

using namespace std;
/*
int *F(int *x) { // x == A + 1
    int **p = &x;
    (*p) = (*p) - 1; // x = x - 1; -> x = A + 0
    **p = 4;
    return *p;
}

int main() {
    int A[] = {0, 1, 2, 3, 4},
        *y = A + 1, // *y = 1
        *q = F(y) + 2; // A+0 + 2 -> q = A + 2
    cout << *q << ' ' << *y << endl; // 2 1
}
*/

/*
int *&F(int *x) { // x == A+2
    int **p = &x; //  *p = A + 2;
    (*p) = (*p) - 1; // x == A + 1;
    return x;
}

int main() {
    int A[] = {0, 1, 2, 3, 4},
        *y = A + 2, // *y == 2
        *&q = F(y);
    cout << *q << ' ' << *y << endl;
}
*/

/*
int *&F(int *&x) {
    int **p = &x;
    (*p) = (*p) - 1;
    return *p;
}

int main() {
    int A[] = {0, 1, 2, 3, 4},
        *y = A + 2,
        *&q = F(y);
    cout << *q << ' ' << *y << endl;
}
*/

/*
int *f(int *x) { // x = A + 2;
    int *&a = x;
    x++; // x = x + 1; -> (x == a) = A + 3
    return a;
}

int main() {
    int A[] = {0, 1, 2, 3, 4},
        *q = A + 1,
        *p = f(q + 1); // A + 3;
    cout << *p << *q << endl;
}
*/

/*
int *f(int *x) { // x = A + 2;
    int *&a = x;
    x++; // ( x == a ) = x + 1; -> x = A + 3
    return a + 2; // A + 3 + 2 = A + 5;
}

int main() {
    int A[] = {0, 1, 2, 3, 4},
        *q = A + 1,
        *p = f(q + 1); // p = A + 5;
    cout << *p << " "<<  *q << endl;
}
*/

/*
int *&f(int *&x) { // &x == main(&q) -> A + 1
    int *&a = x;
    x++; // x = A + 2;
    return a;
}

int main() {
    int A[] = {0, 1, 2, 3, 4},
        *q = A + 1,
        *p = f(q);
    cout << *p << *q << endl;
}
*/

/*
int *f(int *&x) { // x == main(A + 2) == main(q)
    int *a = x; // a = A + 2;
    a++; // a = A + 3; ----> x = A + 2;
    return a;
}

int main() {
    int A[] = {0, 1, 2, 3, 4},
        *q = A + 2,
        *p = f(q) + 1; // A + 4

    cout << *p << *q << endl;
}
 */
/*
int main() {
    int X[3][4][5][6][7];
    (*(*X)[2]) -3;



     X[0][2][0]-3;
     X[0][2][0][-3][0];
     X+ 2 * (5*6*7*4)  -3 * (7*4)




     X[0][1][5]-3;
     X[0][1][4]+6-3;
     X[0][1][4]+3;
     X[0][1][4][3][0];
     X + 1 * (5*6*7*4) + 4 * (6*7*4) + 3* (7*4)




}
*/



