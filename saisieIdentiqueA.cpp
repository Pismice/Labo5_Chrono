//
// Created by pismice on 12.11.2021.
//

#include "saisieIdentiqueA.h"
#include <iostream>

bool saisieIdentiqueA(const char& reponse)
{
   char userCharacter;

   std::cout << reponse << " :";

   std::cin >> userCharacter;

   return (reponse==userCharacter);
}
