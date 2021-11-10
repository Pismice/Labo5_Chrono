//
// TODO : ENTETE ?
//
#include <random>          // Librairie qui permet la génération de valeurs aléatoires

char genererCharactereAleatoire(char begin, char end){
   int premierCharactere = int(begin);
   int dernierCharactere = int(end);

   int difference = dernierCharactere - premierCharactere;

   int valeurAleatoire = rand() % difference;

   return char(premierCharactere + valeurAleatoire);
}

