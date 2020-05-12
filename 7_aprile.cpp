//
// Created by Alberto Sinigaglia on 23/04/2020.
//


/*
struct orario {
    int ore, minuti, secondi;

    orario(int a = 0, int b = 0, int c = 0) {
        ore = a;
        minuti = b;
        secondi = c;
    }
};

struct rileva {
    int ril, corr;
    orario time;

    rileva(int a = 0, int b = 0, orario c = orario()) {
        ril = a;
        corr = b;
        time = c;
    }
};

istream &operator>>(istream &input, orario &x) {
    input >> x.ore;
    input >> x.minuti;
    input >> x.secondi;
    return input;
}

// input rilevazione
istream &operator>>(istream &input, rileva &x) {
    input >> x.ril;
    input >> x.corr;
    input >> x.time;
    return input;
}

// output orario
ostream &operator<<(ostream &output, orario &x) {
    output << x.ore << " ";
    output << x.minuti << " ";
    output << x.secondi;
    return output;
}

// output rilevazione
ostream &operator<<(ostream &output, rileva &x) {
    output << x.ril << " ";
    output << x.corr << " ";
    output << x.time;
    return output;
}




// PRE : prende in input due rilevamenti ben formati
int differenzaInSecondi(rileva f, rileva s) {
    return
            (s.time.ore * 60 * 60 + s.time.minuti * 60 + s.time.secondi)
            -
            (f.time.ore * 60 * 60 + f.time.minuti * 60 + f.time.secondi);
}
// POST: ritorna la differenza di essi in secondi

// PRE: dati è un una matrice Nx3 con rilevamenti ben formati, passato è una matrice Nx3 ben formata e i€[0,N)
bool tempoSospetto(rileva dati[][3], bool passato[][3], int i) {
    bool sent = false;
    // controllo se "ha fatto" la prima metà della maratona
    if (passato[i][0] && passato[i][1] && 165 > (differenzaInSecondi(dati[i][0], dati[i][1])) / 11)
        sent = true;

    // controllo se "ha fatto" la seconda metà della maratona
    if (passato[i][1] && passato[i][2] && 165 > (differenzaInSecondi(dati[i][1], dati[i][2])) / 10.975)
        sent = true;

    return sent;
}
//POST =    true sse corridore i non ha fatto alcun tempo sospetto (nelle due metà)
//          false altrimenti

int main() {
    int numero_corridori;
    cin >> numero_corridori;

    orario z;
    cin >> z; // inutile


    rileva dati_rilevamenti[numero_corridori][3];
    bool passato[numero_corridori][3];

    // parto con l'ipotesi che tutti non son passati per nessun sensore
    for (int j = 0; j < numero_corridori; j++)
        for (int i = 0; i < 3; i++)
            passato[j][i] = false;

    rileva rilevamento;
    cin >> rilevamento; //primo rilevamento
    while (rilevamento.ril != -1) {
        // il rilevamento del corridore corr e numero ril = rilevamento ricevuto in input
        dati_rilevamenti[rilevamento.corr][rilevamento.ril] = rilevamento;
        // mi sengo che il corridore corr è passato per il sensore n° ril
        passato[rilevamento.corr][rilevamento.ril] = true;
        // input del rilevamento successivo
        cin >> rilevamento;
    }
    for(int i = 0; i< numero_corridori;i++){
        for(int j = 0; j < 3; ++j)
            cout<<passato[i][j]<<" , ";
        cout<<"\n";
    }
    // dati_rilevamento contiene i rilevamenti
    // passato contiene true sse il corridore corr è passato per il rilevamento ril

    bool errore_salto_sensore = false;
    bool errore_tempo_sospetto = false;

    for (int i = 0; i < numero_corridori; i++) {
        // se il tempo è sospetto
        if ( tempoSospetto(dati_rilevamenti, passato, i)) {
            // segnalo il tempo sospetto
            cout << i << ": tempo sospetto" << endl;
            // mi segno che c'è stato almeno un tempo sospetto
            errore_tempo_sospetto = true;
        }

        // controllo che il corridore i sia passato per ogni sensore
        for (int j = 0; j < 3; j++) {  // R = j € [0,3] && controllati tutti i sensori del corridore i da 0 fino a j
            if ( !passato[i][j] ) {
                // segnalo che il corridore i ha saltato un sensore
                cout << i << ": salto sensore" << endl;
                // mi segno che c'è stato almeno un sensore saltato
                errore_salto_sensore = true;
            }
        }
    }
    // se non ci son stati tempi sospetti e nessuno ha saltato sensori, allora segnalo che la gara è regolare


    // if( errore_tempo_sospetto == false && errore_salto_sensore==false )
    if (!errore_tempo_sospetto && !errore_salto_sensore)
        cout << "gara regolare";

}
*/