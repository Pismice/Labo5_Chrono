//
// TODO : ENTETE ?
//
#include <random>          // Librairie qui permet la génération de valeurs aléatoires

char genererCharactereAleatoireEntre(const unsigned char& begin, const unsigned char& end){
   int premierCharactere = int(begin);
   int dernierCharactere = int(end);

   int difference = dernierCharactere - premierCharactere;

   int valeurAleatoire = rand() % difference + 1;

   return char(premierCharactere + valeurAleatoire);
}

