/*
 * Piece_Theatre.h
 *
 *  Created on: 26 janv. 2024
 *      Author: AFEK
 */

#ifndef PIECE_THEATRE_H_
#define PIECE_THEATRE_H_

#include <iostream>
using namespace std;
#include "Livre.h"

class Piece_Theatre : public Livre {
    private:
        string siecle;

    public:
        Piece_Theatre(string,string,string,string);
        Piece_Theatre(Livre*,string); // Constrcteur de recopie

        //getter

        string getSiecle();

        //setter

        void setSiecle(string);


};




#endif /* PIECE_THEATRE_H_ */
