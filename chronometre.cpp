/*
-----------------------------------------------------------------------------------
Nom du fichier  : chronometre.cpp
Auteur(s)       : Jérémie Santoro, Didier Lokokpe
Date creation   : 10.11.2021

Description     : Définitions de plusieurs fonctions permettant de simuler
                  l'utilisation d'un chronomètre

Modification(s) : -

Remarque(s)     : - Ces fonctions ne marchent pas à proprment parlé comme un chronomètre
                    elles vont tout simplement comparer différents instants t dans le
                    temps et les manipuler pour obtenir les résultats voulus

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <ctime>
#include "chronometre.h"

static clock_t debutChrono;
static bool chronoInitialise = false;

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
