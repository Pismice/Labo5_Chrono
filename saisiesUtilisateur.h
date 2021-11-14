/*
-----------------------------------------------------------------------------------
Nom du fichier  : saisieUtilisateur.h
Auteur(s)       : Jérémie Santoro, Didier Lokokpe
Date creation   : 10.11.2021

Description     : Définition permettant de simplifier les saisies utilisateur et met
                  également à disposition des fonctions spécifiques qui peuvent être
                  utilisés dans de nombreux projets

Modification(s) : -

Remarque(s)     : -

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO5_CHORNO_SAISIEUTILISATEUR_H
#define LABO5_CHORNO_SAISIEUTILISATEUR_H

// Nom         : saisieDansIntervalle
// But         : Permet d'effectuer et contrôler une saisie sur un entier dans une
//               intervalle donnée
// Param1      : b_inf     = Entier qui définit la borne inférieure
// Param2      : b_sup     = Entier qui définit la borne supérieure
// Param3      : valeur    = Description de la valeur désirée
// Return      : Retourne le int choisi par l'utilisateur
// Exception   : n/a
int saisieDansIntervalle(const int& b_inf, const int& b_sup, const char* valeur);

// Nom         : saisieOuiOuNon
// But         : Cette fonction précise est utilisé pour savoir si l'utilisateur
//               veut répondre oui ou non à un
// Param1      : question     = Chaine de charactères de la question qui
//                              posée à l'utilisateur
// Return      : Retourne 'o' ou 'n' si la réponse est respectivement positive ou négative
// Exception   : n/a
char saisieOuiOuNon(const char* question);

// Nom         : saisieIdentiqueA
// But         : Cette fonction vérifie et contrôle si la saisie utilisateur correspond
//               au charactère passé en paramètre
// Param1      : reponse      = Charactère qui sera comparé pour le retour de la fonction
// Return      : Retourne true si "reponse" correspond à la saisie utilisateur, sinon false
// Exception   : n/a
bool saisieIdentiqueA(const char& reponse);

#endif //LABO5_CHORNO_SAISIEUTILISATEUR_H
