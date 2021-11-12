//
// Created by pismice on 12.11.2021.
//

#include <ctime>
#include "chronometre.h"

clock_t debutChrono;
bool chronoInitialise = false;

void demarrerChronometre()
{
   debutChrono = clock();
   chronoInitialise = true;
}

double tempsApresDebutChronometre()
{
   if(chronoInitialise)
   {
      // Retourne la différence entre l'heure du début du chrono et l'heure actuelle
      return (difftime(clock(), debutChrono))/CLOCKS_PER_SEC;
   }
   else
   {
      // Car le chronomètre n'a pas encore été démarré
      return 0.;
   }

}
