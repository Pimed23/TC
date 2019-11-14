#ifndef AUTOMATA_H
#define AUTOMATA_H

#include <vector>
#include <QString>

using namespace std;

class Automata {
    public:
        Automata();
        Automata( vector<QString> S, vector<QString> A, vector<QString> fS, QString iS );
        ~Automata();

        void createAutomata( vector<QString> S, vector<QString> A, vector<QString> fS, QString iS );
        vector<QString> getState();
        vector<QString> getAlphabet();

    private:
        vector<QString> S; // States
        vector<QString> A; // Alphabet
        vector<QString> fS; // Final State
        QString iS; // Initial State
        vector<vector<QString>> T; // Transitions
};

#endif // AUTOMATA_H
