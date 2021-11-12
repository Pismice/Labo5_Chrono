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
#include "affichage.h"
#include "saisieIdentiqueA.h"                // Librairie qui permet de vérifier si la saisie
#include "saisiesUtilisateur.h"              // Librairie qui permet de gérer plus facilement
                                             // des saisies utilisateurs
#include "generationCharactereAleatoire.h"   // Librairie qui permet de générer des char aléatoires
#include "chronometre.h"                     // Librairie qui permet de manipuler un chronomètre
#include <cstdlib>                           // Librairie qui permet d'utiliser EXIT_SUCCESS
#include <iostream>                          // Librairie qui permet d'utiliser les cin et cout
#include <random>                            // Librairie qui permet la génération de valeurs aléatoires

using namespace std;

int main() {
   // Choix des intervalles pour le nombre de lancées
   const int B_INF =  1,
             B_SUP = 10;

   // Explication du programme à l'utilisateur
   cout << "Bonjour ce programme permet de tester votre habilté au clavier :" << endl;

   // Boucle qui s'execute tant que l'utilisateur veut jouer
   do {
      int nbreLancees = saisieDansIntervalle(B_INF, B_SUP);

      // Score de l'utilisateur
      int nbreReponsesCorrectes = 0;

      // Intervalles dans lesquelles les charactères seront tirés
      unsigned char BEGIN = 'a';
      unsigned char END = 'z';

      // Lancement du chronomètre
      demarrerChronometre();

      // Boucle le nombre de fois désirés par l'utilisateur
      for (int i = 0; i < nbreLancees; ++i) {
         // Si l'entrée fournie par l'utilisateur correspond au charactère
         // alétoire, alors incrémente le nombre de réponses correctes
         nbreReponsesCorrectes += saisieIdentiqueA(
            genererCharactereAleatoireEntre(BEGIN, END));
      }

      double tempsTotal = tempsApresDebutChronometre();
      double tempsMoyen = tempsTotal / (double) nbreLancees;

      // TODO :REGARDER DANS LE .H CAR 2 VERSIONS DIFFERENTES
      affichageDuResultat("Nombre de réponses correctes", nbreReponsesCorrectes);
      affichageDuResultat("Temps écoulé", tempsTotal, 2);
      affichageDuResultat("Temps moyen par lettre",tempsMoyen, 2);


   }while(saisieCharactere() == 'o');

   return EXIT_SUCCESS;
}