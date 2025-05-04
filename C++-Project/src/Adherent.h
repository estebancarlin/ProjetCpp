/*
 * Adherent.h
 *
 *  Created on: 20 janv. 2024
 *      Author: AFEK
 */

#ifndef ADHERENT_H_
#define ADHERENT_H_
#include <iostream>
using namespace std;
#include "Livre.h"
#include "Bibliotheque.h"

class Adherent {
private:
    string nom;
    string prenom;
    string adresse;
    int age;
    int numeroAdherent;
    Bibliotheque bibliothequeInscrite;
    Livre **livresEmpruntes;   // Tableau de pointeurs de Livre
    int nombreLivresEmpruntes; // Nombre de livres empruntés
    int capaciteMaxLivresEmpruntes;

public:

    Adherent();
    Adherent(string,string,string, int);
    ~Adherent();

    //getters && setters
    string getNom();
    void setNom(string);
    void setAge(int);
    int getAge();
    string getPrenom();
    void setPrenom(string );
    string getAdresse();
    void setAdresse(string );
    int getNumeroAdherent();
    void setNumeroAdherent(int);
    Bibliotheque getBibliothequeInscrite();
    void setBibliothequeInscrite(Bibliotheque bibliothequeInscrite);
    int getCapaciteMaxLivresEmpruntes();
    void setCapaciteMaxLivresEmpruntes(int capaciteMaxLivresEmpruntes);

    //Methodes
    void emprunterLivre(Livre*);
    void rendreLivre(string);

    //Fct amie
    friend void afficherInfosAdherent(const Adherent& adherent);

    //Operateur
    bool operator%(string);


};





#endif /* ADHERENT_H_ */
