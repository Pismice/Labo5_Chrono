/*
-----------------------------------------------------------------------------------
Nom du fichier  : genererAleatoirement.h
Auteur(s)       : Jérémie Santoro, Didier Lokokpe
Date creation   : 10.11.2021

Description     : Cette interface permet de générer des valeurs alétoires

Modification(s) : -

Remarque(s)     : - Pour le moment il n'est possible de générer que un char entre
                    2 bornes
                  - La fonction rand n'est pas la plus optmisée possible, il faudrait
                    idéalement utiliser la manière ammenée avec C++11

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO5_CHRONO_GENERERALEATOIREMENT_H
#define LABO5_CHRONO_GENERERALEATOIREMENT_H

// Nom         : genererCharactereAleatoireEntre
// But         : Permet de générer un char aléatoire entre 2 bornes
// Param1      : begin     = Charactère qui sera la première borne incluse "["
// Param2      : end       = Charactère qui sera la deuxième borne incluse "]"
// Return      : Retourne le charactère généré aléatoirement entre les 2 bornes
//               précédemment définies
// Exception   : n/a
char genererCharactereAleatoireEntre(const unsigned char& begin,const unsigned char& end);

#endif //LABO5_CHRONO_GENERERALEATOIREMENT_H
