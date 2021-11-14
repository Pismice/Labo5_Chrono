/*
-----------------------------------------------------------------------------------
Nom du fichier  : affichage.h
Auteur(s)       : Jérémie Santoro, Didier Lokokpe
Date creation   : 10.11.2021

Description     : Cette interface permet une simplification de l'affichage de valeurs
                  avec un message passé en paramètre ainsi que la valeur désirée.

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

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO5_CHRONO_AFFICHAGE_H
#define LABO5_CHRONO_AFFICHAGE_H

// Nom         : affichageDuResultat
// But         : Permet d'affiche un résultat avec un message de manière simple
//               et lisible
// Param1      : message   = Message qui sera affiché à l'utilisateur pour
// Param2      : resultat  = Double de la valeur à afficher
// Param3      : precision = Nombre de chiffres après la virgule désirés
// Return      : n/a
// Exception   : n/a
void affichageDuResultat(const char* message, const double& resultat, const unsigned int& precision = 2);

// Nom         : affichageDuResultat
// But         : Permet d'affiche un résultat avec un message de manière simple
//               et lisible
// Param1      : message   = Chaîne de caractères qui décrit la valeur passée en paramètre
// Param2      : resultat  = Entier de la valeur à afficher
// Return      : n/a
// Exception   : n/a
void affichageDuResultat(const char* message, const int& resultat);

#endif //LABO5_CHRONO_AFFICHAGE_H