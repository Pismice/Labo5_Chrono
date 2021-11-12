//
// Created by admin on 12.11.2021.
//
#include <iostream>
#include <limits>






// Boucle de saisie, pour obtenir une saisie utilisateur correcte
int nombreLancee(int B_inf, int B_sup){
   bool erreurEntreeLancees;
   // nombre lancées a saisir
   int lancees;

   do
   {


      erreurEntreeLancees = false;

      std::cout << "Combien de lancees [" << B_inf << " - " << B_sup << "] :";
      std::cin >> lancees;

      if(!std::cin.good() || lancees < B_inf || lancees > B_sup)
      {
         erreurEntreeLancees = true;
         std::cin.clear();
      }

      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   }while (erreurEntreeLancees);

   return lancees;
}

// Boucle de saisie utilisateur, pour savoir si il veut recommencer ou pas
char continuer(){
   // Charactère rentré par l'utilisateur qui va définir si le programme
// recommence ou pas
   char continuee;
   bool erreurCharRecommencer;
   do{

      erreurCharRecommencer = false;

      std::cout << "Voulez-vous recommencer ? [o/n] :";
      std::cin >> continuee;

      if(!std::cin.good() || (continuee != 'o' && continuee != 'O' && continuee !=
                                                                      'n'))
      {
         erreurCharRecommencer = true;
         std::cin.clear();
      }

      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   }while(erreurCharRecommencer);

   return continuee;
}