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

Modification(s) : -

Remarque(s)     : - Les saisies utilisteur sont contrôlées
                  - L'affichage se fait légèrement différement à celui proposé, car
                    après validation par l'assistant Gabriel Roch, jugé plus propre
                    par Jérémie Santoro et Didier Lokokpe
                  - Il est possible via une constante de changer le nombre de chiffres
                    après la virgule à afficher
                  - Il est possible via des constantes de changer les bornes pour le
                    nombres de lancées MAX et MIN voulus par l'utilisateur

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/
#include "affichage.h"            // Permet de simplifier l'affichage
#include "saisie.h"              // Permet de gérer les saisies utilisateurs (avec controle)
#include "aleatoire.h"           // Permet de générer des valeurs aléatoires
#include "chronometre.h"          // Permet de manipuler un chronomètre

#include <cstdlib>                // Librairie qui permet d'utiliser EXIT_SUCCESS
#include <iostream>               // Librairie qui permet d'utiliser les cin et cout

using namespace std;

int main() {
   // Choix des intervalles pour le nombre de lancées
   const unsigned int B_INF =  1,
                      B_SUP = 10;

   const unsigned int CHIFFRES_APRES_VIRGULE = 2;

   // Explication du programme à l'utilisateur
   cout << "Bonjour ce programme permet de tester votre habilté au clavier :" << endl;

   // Nombres de réponses correctes
   int scoreUtilisateur;

   // Boucle qui s'execute tant que l'utilisateur veut jouer
   do {
      unsigned int nbreLancees = saisieDansIntervalle(B_INF, B_SUP, "lancees");

      scoreUtilisateur = 0;

      // Intervalles dans lesquelles les charactères seront tirés
      unsigned char BEGIN = 'a';
      unsigned char END   = 'z';

      // Lancement du chronomètre
      demarrerChronometre();

      // Boucle le nombre de fois désirés par l'utilisateur
      for (unsigned int i = 0; i < nbreLancees; ++i) {
         // Si l'entrée fournie par l'utilisateur correspond au charactère
         // alétoire, alors incrémente le nombre de réponses correctes
         scoreUtilisateur += saisieIdentiqueA(genererCharactereAleatoireEntre(BEGIN, END));
      }

      double tempsTotal = tempsApresDebutChronometre();
      double tempsMoyen = tempsTotal / (double) nbreLancees;


      affichageDuResultat("Nombre de reponses correctes", scoreUtilisateur);
      affichageDuResultat("Temps ecoule", tempsTotal, CHIFFRES_APRES_VIRGULE);
      affichageDuResultat("Temps moyen par lettre",tempsMoyen, CHIFFRES_APRES_VIRGULE);

      cout << endl;

      // Si l'utilisateur répond oui, on recommence
   }while(saisieOuiOuNon("Voulez-vous recommencer ?") == 'o');

   return EXIT_SUCCESS;
}