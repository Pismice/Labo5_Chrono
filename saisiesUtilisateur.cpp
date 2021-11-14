/*
-----------------------------------------------------------------------------------
Nom du fichier  : saisieUtilisateur.h
Auteur(s)       : Jérémie Santoro, Didier Lokokpe
Date creation   : 10.11.2021

Description     : Cette interface permet de simplifier les saisies utilisateur et met
                  également à disposition des fonctions spécifiques qui peuvent être
                  utilisés dans de nombreux projets

Modification(s) : -

Remarque(s)     : -

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/
#include <iostream>
#include <limits>

// Boucle de saisie, pour obtenir une saisie utilisateur correcte
int saisieDansIntervalle(const int& b_inf, const int& b_sup, const char* valeur){
   int valeurSaisieIntervalle;
   bool erreurSaisieIntervalle;

   do
   {
      erreurSaisieIntervalle = false;

      std::cout << "Combien de " << valeur << "[" << b_inf << " - " << b_sup << "] :";
      std::cin >> valeurSaisieIntervalle;

      if(!std::cin.good() || valeurSaisieIntervalle < b_inf || valeurSaisieIntervalle > b_sup)
      {
         erreurSaisieIntervalle = true;
         std::cin.clear();
      }

      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   }while (erreurSaisieIntervalle);

   return valeurSaisieIntervalle;
}

// Boucle de saisie utilisateur, pour savoir si il veut recommencer ou pas
char saisieOuiOuNon(const char* question){
   char valeurSaisie;
   bool erreurSaisieCharactere;

   do{

      erreurSaisieCharactere = false;

      std::cout << question << " [o/n] :";
      std::cin >> valeurSaisie;

      if(!std::cin.good() || (valeurSaisie != 'o' && valeurSaisie != 'n'))
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