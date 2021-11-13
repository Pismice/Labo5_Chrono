//
// TODO : ENTETE ?
//
#include <ctime>
#include <random>          // Librairie qui permet la génération de valeurs aléatoires

static bool premiereEntree = true;

char genererCharactereAleatoireEntre(const unsigned char& begin,
                                       const unsigned char& end){
   // Si c'est la première fois il faut générer un nouveau seed
   if(premiereEntree)
   {
      srand((unsigned int)time(nullptr));
      premiereEntree = false;
   }

   int premierCharactere = int(begin);
   int dernierCharactere = int(end);

   int difference = dernierCharactere - premierCharactere;

   int valeurAleatoire = rand() % difference + 1;

   return char(premierCharactere + valeurAleatoire);
}

