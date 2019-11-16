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

void Automata::generateTransition( vector<QString> Tr ) {
    size_t k = 0;
    for( size_t i = 0; i < S.size(); ++i ) {
        vector<QString> temp;
        for( size_t j = 0; j < A.size(); ++j ) {
            temp.push_back( Tr[ k ]);
            ++k;
        }
        T.push_back( temp );
    }
}

void Automata::printAutomata() {
    qDebug() << T;
}

vector<QString> Automata::getState() {
    return S;
}

vector<QString> Automata::getAlphabet() {
    return A;
}

int Automata::getNumberStates() {
    int count = S.size() & INT_MAX;
    return count;
}

int Automata::getNumberAlphabet() {
    int count = A.size() & INT_MAX;
    return count;
}


