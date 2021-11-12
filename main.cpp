/*
-----------------------------------------------------------------------------------
Nom du fichier  : main.cpp
Auteur(s)       : Jérémie Santoro, Didier Lokokpe
Date creation   : 10.11.2021

Description     : Ce programme permet de tester la dexterité et la rapidité au
                  clavier de l'utilisteur. En fonction du nombre de test désirés
                  par l'utilisateur [1,10] teste l'utilisateur avec différents
                  charactères générés aléatoirement, l'utilisateur doit donc
                  reproduire au clavier le charactère généré pour obtenir
                  une réponse correcte. Le tout est chronométré ce qui permet
                  de retourner à la fin du programme en plus du nombre de
                  réponses correctes: le temps écoulé, ainsi que le temps
                  moyen passé par lettre.
                  L'utilisateur est ensuite invité à recommencer le programme.

Remarque(s)     : - Les saisies utilisteur sont contrôlées

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/
#include "saisieIdentiqueA.h"
#include "saisiesUtilisateur.h"              // Librairie qui permet de gérer plus facilement
                                             // des saisies utilisateurs
#include "generationCharactereAleatoire.h"   // Librairie qui permet de générer des char aléatoires
#include "chronometre.h"                     // Librairie qui permet de manipuler un chronomètre
#include <cstdlib>         // Librairie qui permet d'utiliser EXIT_SUCCESS
#include <iostream>        // Librairie qui permet d'utiliser les cin et cout
#include <random>          // Librairie qui permet la génération de valeurs aléatoires

using namespace std;

int main() {
   // Choix des intervalles pour le nombre de lancées
   const int B_INF =  1,
             B_SUP = 10;

   // Explication du programme à l'utilisateur
   cout << "Bonjour ce programme permet de tester "
           "votre habilté au clavier :" << endl;

   do {
      // Boucle du programme, quand elle recommence, leu jeu recommence
      int nbreLancees = nombreLancee(B_INF, B_SUP);

      int nbreReponsesCorrectes = 0;   // Score de l'utilisateur

      // Variables nécessaires pour la boucle
      unsigned char BEGIN = 'a';
      unsigned char END = 'z';

      demarrerChronometre();

      // Boucle le nombre de fois désirés par l'utilisateur
      for (int i = 0; i < nbreLancees; ++i) {
         nbreReponsesCorrectes += saisieIdentiqueA(genererCharactereAleatoire(BEGIN,END));
      }

      double tempsTotal = tempsApresDebutChronometre();

      // Affichage du score de l'utilisateur
      cout << endl;
      cout << "Nombre de reponse correcte :" << nbreReponsesCorrectes << endl;

      // Affichage du temps qui s'est écoulé et le temps moyen mis
      // par l'utilisateur entre chaque lettre
      cout << "Temps ecoule : " << tempsTotal << " secondes" << endl;
      cout << "==> " << tempsTotal / (double) nbreLancees << " seconde par lettre."
      << endl << endl;
   }while(continuer() == 'o');

   return EXIT_SUCCESS;
}