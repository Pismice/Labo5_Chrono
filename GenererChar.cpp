//
// TODO : ENTETE ?
//
#include "GenererChar.h"
#include <random>          // Librairie qui permet la génération de valeurs aléatoires

char genererCharactereAleatoire(char begin, char end){
   int premierCharactere = int(begin);
   int dernierCharactere = int(end);

   int difference = dernierCharactere - premierCharactere;

   int valeurAleatoire = rand() % difference + 1;

   return char(premierCharactere + valeurAleatoire);
}

