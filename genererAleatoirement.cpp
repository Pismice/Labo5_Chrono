//
// TODO : ENTETE ?
//
#include <ctime>
#include <random>          // Librairie qui permet la génération de valeurs aléatoires

static bool premiereEntree = true;

// Comme rand retourne toujours un int, ces 2 variables seronts communes à toutes
// les éventuelles nouvelles fonctions
static int borneInferieure;
static int borneSuperieure;

char genererCharactereAleatoireEntre(const unsigned char& begin, const unsigned char& end){
   // Si c'est la première fois il faut générer un nouveau seed
   if(premiereEntree)
   {
      srand((unsigned int)time(nullptr));
      premiereEntree = false;
   }

   borneInferieure = int(begin);
   borneSuperieure = int(end);

   int difference = borneSuperieure - borneInferieure;

   int valeurAleatoire = rand() % difference + 1;

   return char(borneInferieure + valeurAleatoire);
}

