/*
 * Album.h
 *
 *  Created on: 20 janv. 2024
 *      Author: AFEK
 */

#ifndef ALBUM_H_
#define ALBUM_H_

#include <iostream>
using namespace std;
#include "Livre.h"

class Album : public Livre {
    private:
        string illustration ;
    public:
        Album(string,string,string,string);
        Album(Livre*,string);

        string getIllustration(); //getter
        void setIllustration(string); //setter
};




#endif /* ALBUM_H_ */
