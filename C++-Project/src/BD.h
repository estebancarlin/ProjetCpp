/*
 * BD.h
 *
 *  Created on: 21 janv. 2024
 *      Author: AFEK
 */

#ifndef BD_H_
#define BD_H_
#include <iostream>
using namespace std;
#include "Livre.h"

class BD:
		public Livre {
    private:
        string dessinateur ;
    public:
        BD(string,string,string,string);
        BD(Livre*,string); //Recopie

        string getDessinateur(); //getter
        void setDessinateur(string); //setter
};

#endif /* BD_H_ */
