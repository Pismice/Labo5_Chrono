/*
-----------------------------------------------------------------------------------
Nom du fichier  : chronometre.h
Auteur(s)       : Jérémie Santoro, Didier Lokokpe
Date creation   : 10.11.2021

Description     : Cette interface permet de simuler l'utilisation d'un chronomètre

Modification(s) : -

Remarque(s)     : - Ces fonctions ne marchent pas à proprment parlé comme un chronomètre
                    elles vont tout simplement comparer différents instants t dans le
                    temps et les manipuler pour obtenir les résultats voulus

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/
#ifndef CHRONOMETRE_H
#define CHRONOMETRE_H

// Nom         : demarrerChronometre
// But         : Récupère l'instant t auquel la fonction est appelée et la stock dans
//               une variable static global.
// Return      : n/a
// Exception   : n/a
void   demarrerChronometre();

// Nom         : tempsApresDebutChronometre
// But         : Récupère l'instant t1 auquel la fonction est appelée et effectuée
//               puis retourne la différence t1 et t
// Return      : Retourne en double le nombre de secondes de différence entre le
//               moment ou le chronomètre a été démarré et celui de l'instant t
// Exception   : Si le chronomètre n'a pas été démarré retourne logiquement 0.0
double tempsApresDebutChronometre();

#endif //CHRONOMETRE_H
