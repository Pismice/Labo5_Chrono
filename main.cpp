/*
-----------------------------------------------------------------------------------
Nom du fichier  : main.cpp (xxx = h ou cpp)
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

#include <cstdlib>
#include <random>
#include <ctime>
#include <iostream>

using namespace std;


char monChar(){

   int premierLettre = int('a');



   int aleatoir = rand() % 26;

   return char(premierLettre + aleatoir);
}
int main() {

   srand(time(NULL));

   const int B_INF =  1,
      B_SUP = 10;

   int compteur = 0;

   cout << "Bonjour ce programme permet de tester votre habillete :" << endl;
   cout << "Combien de lancee [" << B_INF << " - " << B_SUP << "] :";
   int entree;
   cin >> entree;

   char saisie;
   clock_t temps;
   temps = clock();

   for(int i = 0; i < entree; ++i){


      char c = monChar();

      cout << c << " :";

      cin >> saisie;

      if(saisie == c){
         ++compteur;
      }
   }

   temps = clock() - temps;
   cout << endl;
   cout << "Nombre de reponse correcte :" << compteur << endl;
   double tempMis = round(temps / CLOCKS_PER_SEC);

   cout << tempMis << endl;
   cout << "Temps ecoule : " << round(temps / CLOCKS_PER_SEC) << " seconde" << endl;
   cout << "==> " << (int)tempMis / entree << " seconde par lettre."
        << endl;


   return EXIT_SUCCESS;
}