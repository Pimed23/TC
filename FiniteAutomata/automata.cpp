#include "automata.h"

Automata *automata;

Automata::Automata() {
}

Automata::Automata(vector<QString> S, vector<QString> A, vector<QString> fS, QString iS) {
    createAutomata( S, A, fS, iS );
}

void Automata::createAutomata(vector<QString> S, vector<QString> A, vector<QString> fS, QString iS ) {
    this -> S = S;
    this -> A = A;
    this -> fS = fS;
    this -> iS = iS;
}

vector<QString> Automata::getState() {
    return S;
}

vector<QString> Automata::getAlphabet() {
    return A;
}


