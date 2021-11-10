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
#include <cstdlib>         // Librairie qui permet d'utiliser EXIT_SUCCESS
#include <ctime>           // Librairie qui permet l'utilisation d'un timer
#include <iostream>        // Librairie qui permet d'utiliser les cin et cout
#include "GenererChar.h"   // Librairie qui permet de générer des char aléatoires
#include <limits>          // Librairie qui permet d'utiliser numeric_limits pour
                           // vider le buffer

using namespace std;

/// Updated upstream
int main() {
   // Choix des intervalles pour le nombre de lancées
   const int B_INF =  1,
             B_SUP = 10;

   char continuer;

   // Génération du seed random
   srand((unsigned int)time(nullptr));

   // Explication du programme à l'utilisateur
   cout << "Bonjour ce programme permet de tester "
           "votre habilté au clavier :" << endl;

   // Saisie du nombre lancées
   int nbreLancees;
   bool erreurEntreeLancees = false;

   do
   {

      do
      {
         cout << "Combien de lancees [" << B_INF << " - " << B_SUP << "] :";
         cin >> nbreLancees;

         if(!cin.good() || nbreLancees < B_INF || nbreLancees > B_SUP)
         {
            erreurEntreeLancees = true;
            cin.clear();
         }

         cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }while (erreurEntreeLancees);

      int nbreReponsesCorrectes = 0;   // Score de l'utilisateur
      char userCharacter;              // Caractère rentré par l'utilisateur

      // TODO: DIDIER ?
      clock_t temps;
      temps = clock();

      // Variables nécessaires pour la boucle
      char randomCharacter;
      char BEGIN  = 'a';
      char END    = 'z';

      // Boucle le nombre de fois désirés par l'utilisateur
      for(int i = 0; i < nbreLancees; ++i){
         randomCharacter = genererCharactereAleatoire(BEGIN,END);

         cout << randomCharacter << " :";

         cin >> userCharacter;

         if(userCharacter == randomCharacter){
            ++nbreReponsesCorrectes;
         }
      }

      temps = clock() - temps;

      // Affichage du score de l'utilisateur
      cout << endl;
      cout << "Nombre de reponse correcte :" << nbreReponsesCorrectes << endl;
      int tempMis = (temps / CLOCKS_PER_SEC);

      // Affichage du temps qui s'est écoulé et le temps moyen mis
      // par l'utilisateur entre chaque lettre
      cout << "Temps ecoule : " << tempMis << " seconde" << endl;
      cout << "==> " << (int)tempMis / nbreLancees << " seconde par lettre." << endl;

      cout << endl;

      cout << "Voulez-vous recommencer ? [o/n] :";
      cin >> continuer;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

   }while(continuer == 'o' or continuer == 'O');

   return EXIT_SUCCESS;
}