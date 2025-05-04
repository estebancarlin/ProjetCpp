/*
 * Roman.h
 *
 *  Created on: 20 janv. 2024
 *      Author: AFEK
 */

#ifndef ROMAN_H_
#define ROMAN_H_
#include <iostream>
using namespace std;
#include "Livre.h"

class Roman : public Livre {
    private:
        string genre;

    public:
        Roman(string,string,string,string);
        Roman(Livre*,string); // Constrcteur de recopie

        //getter

        string getGenre();

        //setter

        void setGenre(string);


};




#endif /* ROMAN_H_ */
