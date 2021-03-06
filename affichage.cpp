/*
-----------------------------------------------------------------------------------
Nom du fichier  : affichage.cpp
Auteur(s)       : Jérémie Santoro, Didier Lokokpe
Date creation   : 10.11.2021

Description     : Définitions de plusieurs fonctions permettant une simplification
                  de l'affichage de valeurs avec un message passé en paramètre ainsi
                  que la valeur désirée.

Modification(s) : -

Remarque(s)     : - Pour les chiffres à virgule (uniquement double pour le moment, car
                    le premier projet qui a utilisé ce header avait besoin de double
                    pour éventuellement avoir une plus grande précision, car il s'agit
                    d'un jeu compétitif), il est possible de préciser le nombre
                    qu l'on désire avec un paramètre. Sinon le setprecision par
                    defaut est utilisé
                  - Le passage par référence n'est pas de vigeur pour le paramètre
                    "message", car il est préférable pour des raisons de lisiblité
                    de l'utiliser ainsi.
                  - https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice/1452738
                  Si comme demandé, le code des librairies doit être le plus réutilisable
                  et modulable que possible il est recommandé de ne pas utiliser using
                  namespace std, pour les raisons citées dans le lien ci-dessus

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include "affichage.h"
#include <iostream>
#include <iomanip>

void affichageDuResultat(const std::string& message, const double& resultat, const int& precision)
{
   std::cout << std::left << std::setw(30) << message << " : "
   << std::fixed << std::setprecision(precision)
   << resultat << std::endl;
}

void affichageDuResultat(const std::string& message, const int& resultat)
{
   std::cout << std::left << std::setw(30) << message << " : "
   << resultat << std::endl;
}