//
// Created by Alberto Sinigaglia on 23/04/2020.
//

#include<iostream>
using namespace std;
struct nodo{
    int info = 0;
    nodo* next = nullptr;
};
void push_back(nodo*& list, int n);
void print(nodo* list);


/**
 * @brief elimina da list tutti i nodi con info>limit, e ritorna una lista con i nodi rimossi
 * @param list : lista dei valori
 * @param limit : limite degli elementi da mantenere
 * @return lista elementi eliminati
 */
nodo* deleteGreater(nodo*& list, int limit);
/**
 * POST :
 *      list contiene tutti nodi con info <= limit,
 *      la lista ritornata contiene i nodi di list con info>limit
 *      rList U list = lista originale
 */

int main(){
    int length, limit;
    cin >> length;
    nodo* list = nullptr;
    for( int i = 0 ; i < length ; ++i ) {
        int n;
        cin >> n;
        push_back(list, n);
    }
    cin >> limit;
    cout<<"lista: "<<endl;
    print(list);
    cout<<endl<<endl;
    nodo* deleted = deleteGreater(list, limit);
    cout<<"eliminati: "<<endl;
    print(deleted);
    cout<<endl<<"lista: "<<endl;
    print(list);

}

nodo* deleteGreater(nodo*& list, int limit){
    if(!list) return nullptr;
    if(list->info > limit){
        nodo* tmp = list;
        list = list->next;
        tmp->next = deleteGreater(list, limit);
        return tmp;
    }
    else
        return deleteGreater(list->next, limit);
}

void print(nodo* list){
    if(list){
        cout<< list->info;
        if(list->next) {
            cout<<", ";
            print(list->next);
        }
    }
}

void push_back(nodo*& list, int n){
    if(!list)
        list = new nodo{n};
    else
        push_back(list->next, n);
}