/*
-----------------------------------------------------------------------------------
Nom du fichier  : aleatoires.cpp
Auteur(s)       : Jérémie Santoro, Didier Lokokpe
Date creation   : 10.11.2021

Description     : Définitions de (plusieurs) fonction(s) permettant de générer des
                  valeurs alétoires

Modification(s) : -

Remarque(s)     : - Pour le moment il n'est possible de générer que un char entre
                    2 bornes
                  - La fonction rand n'est pas la plus optmisée possible, il faudrait
                    idéalement utiliser la manière ammenée avec C++11

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <ctime>
#include <random>          // Librairie qui permet la génération de valeurs aléatoires

static bool premiereEntree = true;

char genererCharactereAleatoireEntre(const unsigned char& begin, const unsigned char& end){
   // Si c'est la première fois il faut générer un nouveau seed
   if(premiereEntree)
   {
      srand((unsigned int)time(nullptr));
      premiereEntree = false;
   }

   int borneSuperieure;
   int borneInferieure;

   borneInferieure = int(begin);
   borneSuperieure = int(end);

   int difference = borneSuperieure - borneInferieure;

   int valeurAleatoire = rand() % difference + 1;

   return char(borneInferieure + valeurAleatoire);
}

