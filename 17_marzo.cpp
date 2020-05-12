//
// Created by Alberto Sinigaglia on 24/03/2020.
//




/*
int *f(int *x) {
    *x = 5;
    return x;
}

int main() {
    int y = 1;
    *(f(&y)) = 25;
    cout << y << endl;
}

*/



















/*
int &f(int &x) {
    x = 5;
    return x;
}

int main() {
    int y = 1;
    *(f(y)) = 25;
    cout << y << endl;
}

*/







/*
int *f(int x) { // x=1
    x = 5; // x = 5
    return &x;
}

int main() {
    int y = 1;
    *(f(y)) = 7 * y;
    cout << y << endl;
}
*/




/*
int *f(int &x) { // x -> y main |||| &x == &y main == true
    x = 5; // (x == y main) = 5
    return &x;
}

int main() {
    int y = 1;
    *f(y) = 25;
    cout << y << endl;
}

*/








/*
int *f(int *p) { // p == b+2 main
    int *x;
    x = p + 2; // x = p + 2 -> x = b + 2 + 2 => x -> 5
    // p = p + 1; // p -> 4
    return x - 3; // x -3 ---> b + 1
}

int main() {
    int
        b[] = {1, 2, 3, 4, 5}, // *b == b[0]
        *q = b + 2; // q = b+2 == 3

    *(f(q)) = *q; // b[1] = 3
    cout << b[0] << b[1] << b[2] << b[3] << b[4];
}
*/







/*
int *&    f(int *p) { // p = b + 2
    int *x;
    x = p + 2; // x = b + 4
    p = p + 1; // p = b + 3
    return p;
}

int main() {
    int
        b[] = {1, 2, 3, 4, 5},
        *q = b + 2;
    *f(q) = *q;
    cout << b[0] << b[1] << b[2] << b[3] << b[4];
}
*/









/*
int *&f(int *p) { // p = b + 2
    int *x;
    x = p + 2; // x = b + 4
    p = p + 1; // p = b + 3
    p = p-2;
    return p - 2; // p - 2  == b + 1
}

int main() {
    int
        b[] = {1, 2, 3, 4, 5},
        *q = b + 2;
    *f(q) = *q;
    cout << b[0] << b[1] << b[2] << b[3] << b[4];
}
*/








/*
char f(char x) {
    return x * 2;
}

int main() {
    int x = 1024;
    cout << f(x) << endl;
}
*/









/*
char f(char *x) { return x[2]; }

int main() {
    int x[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << f(x) << endl;
}

*/









/*
int *f(int *p) { // p = b + 3
    int *x;
    x = p + 3; // x = b + 3 + 3
    return x - 2; // x = b + 3 + 3 - 2 == b + 4
}

int main() {
    int
            b[] = {1, 2, 3, 4, 5},
            *q = b + 2;
    *f(q + 1) = *q; // b[4] = 3;
    cout << b[0] << b[1] << b[2] << b[3] << b[4]; // 12343

}
 */