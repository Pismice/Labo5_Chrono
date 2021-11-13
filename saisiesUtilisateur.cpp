//
// Created by admin on 12.11.2021.
//
#include <iostream>
#include <limits>

// Boucle de saisie, pour obtenir une saisie utilisateur correcte
int saisieDansIntervalle(const int& B_inf, const int& B_sup, const char *valeur){
   int valeurSaisieIntervalle;
   bool erreurSaisieIntervalle;

   do
   {
      erreurSaisieIntervalle = false;

      std::cout << "Combien de " << valeur << "[" << B_inf << " - " << B_sup << "] :";
      std::cin >> valeurSaisieIntervalle;

      if(!std::cin.good() || valeurSaisieIntervalle < B_inf || valeurSaisieIntervalle > B_sup)
      {
         erreurSaisieIntervalle = true;
         std::cin.clear();
      }

      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   }while (erreurSaisieIntervalle);

   return valeurSaisieIntervalle;
}

// Boucle de saisie utilisateur, pour savoir si il veut recommencer ou pas
char saisieCharactereDecisionRecommencer(){
   char valeurSaisie;
   bool erreurSaisieCharactere;

   do{

      erreurSaisieCharactere = false;

      std::cout << "Voulez-vous recommencer ? [o/n] :";
      std::cin >> valeurSaisie;

      if(!std::cin.good() || (valeurSaisie != 'o' && valeurSaisie != 'O' && valeurSaisie != 'n'))
      {
         erreurSaisieCharactere = true;
         std::cin.clear();
      }

      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   }while(erreurSaisieCharactere);

   return valeurSaisie;
}

bool saisieIdentiqueA(const char& reponse)
{
   char userCharacter;

   std::cout << reponse << " :";

   std::cin >> userCharacter;

   return (reponse==userCharacter);
}