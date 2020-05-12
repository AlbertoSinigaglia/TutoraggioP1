//
// Created by Alberto Sinigaglia on 07/05/2020.
//
/*
#include <iostream>
using namespace std;


bool palindroma(char *S, int n);

int main()
{
    int lung;
    char S[100];
    cin.getline(S, 100);        // legge una riga di caratteri da cin
    lung = cin.gcount() - 1;    // gcount ritorna il numero di caratteri letti(compreso il terminatore '\n')

    if (!palindroma(S, lung))
        cout << "la stringa non e' palindroma" << endl;

    else
        cout << "la stringa e' palindroma" << endl;
}


// PRE = S e' una stringa di lunghezza n >= 0
bool palindroma(char *S, int n){
    if (n <= 1) return true;                    // (1)
    if(S[0] != S[n - 1]) return false;          // (2)
    return palindroma(S + 1, n - 2);      // (3)
}
// POST = ritorna true se e solo se S e' palindroma

/**
 * Correttezza:
 *  casi base:
 *      (1) : n <= 1
 *              stringa vuota o di un carattere -> return true in quanto è palindroma
 *      (2) : S[0] != S[n - 1]
 *              primo carattere != ultimo carattere -> return false in quanto la parola non può essere palindroma
 *  caso RIC:
 *          PRE_RIC:
 *              n >= 0 :
 *                  dimostro che n - 2 è >= 0:
 *                      n - 2 > 0 in quanto per caso base (1) abbiamo n > 1, quindi
 *                              (n - 2) > (1)
 *                              [(n > 1) - 2] >= 0
 *                              [n > -1] == n >= 0
 *
 *              S stringa con length(S) == n
 *                  dimostro che S ha almeno n caratteri:
 *                      length(S + 1) >= n in quanto per PRE abbiamo length(S) == n, n_ric = n - 2, quindi
 *                      facendo avanzare S di 1, e togliendo 2 alla capacità massima, stiamo avanzando di un carattere
 *                      e togliendone due alla dimensione totale
 *   caso induttivo:
 *      return palindroma(S + 1, n - 2) :
 *          Avendo dimostrato di aver rispettato la PRE_RIC, possiamo assumere per corretta la POST_RIC, e che quindi
 *          palindroma(S + 1, n - 2) ritorna true sse [S ... S+n] è palindroma, e per (2) se i caratteri correnti fossero
 *          stati diversi, avremmo già terminato, e quindi ritorniamo true sse i caratteri correnti (primo e ultimo)
 *          sono uguali && la sottostringa [S+1 ... S+(n-2)] è palindroma
 *
 *          -> POST
 */
