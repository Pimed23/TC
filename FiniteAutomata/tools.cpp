#include "tools.h"

std::vector<QString> convertVector( QString W ) {
    std::vector<QString> V;
    QString S;
    for( int i = 0; i < W.size(); ++i ) {
        if( W[ i ] == ' ' ) {
            V.push_back( S );
            S.clear();
        } else
            S.push_back( W[ i ]);
    }
    V.push_back( S );
    return V;
}
