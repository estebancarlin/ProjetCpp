/*
 * Recueil_Poesie.h
 *
 *  Created on: 26 janv. 2024
 *      Author: AFEK
 */

#ifndef RECUEIL_POESIE_H_
#define RECUEIL_POESIE_H_

#include <iostream>
using namespace std;
#include "Livre.h"

class Recueil_Poesie : public Livre {
    private:
        string indicateurVersProse;

    public:

        Recueil_Poesie(string,string,string,string);
        Recueil_Poesie(Livre*,string); // Constrcteur de recopie

        //getter

        string getIndicateurVersProse();

        //setter

        void setIndicateurVersProse(string);

};






#endif /* RECUEIL_POESIE_H_ */
