//
// Created by pismice on 12.11.2021.
//

#include "affichage.h"
#include <iostream>
#include <iomanip>

void affichageDuResultat(const char *message, const double& resultat, const int& precision)
{
   std::cout << std::left << std::setw(30) << message << " : "
   << std::fixed << std::setprecision(precision)
   << resultat << std::endl;
}

void affichageDuResultat(const char *message, const int& resultat)
{
   std::cout << std::left << std::setw(30) << message << " : "
   << resultat << std::endl;
}