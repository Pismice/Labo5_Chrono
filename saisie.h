/*
-----------------------------------------------------------------------------------
Nom du fichier  : saisie.h
Auteur(s)       : Jérémie Santoro, Didier Lokokpe
Date creation   : 10.11.2021

Description     : Interface qui permet de simplifier les saisies utilisateur et met
                  également à disposition des fonctions spécifiques qui peuvent être
                  utilisés dans de nombreux projets

Modification(s) : -

Remarque(s)     : -

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef SAISIE_H
#define SAISIE_H

// Nom         : saisieDansIntervalle
// But         : Permet d'effectuer et contrôler une saisie sur un entier dans une
//               intervalle donnée
// Param1      : b_inf     = Entier qui définit la borne inférieure
// Param2      : b_sup     = Entier qui définit la borne supérieure
// Param3      : valeur    = Description de la valeur désirée
// Return      : Retourne le int choisi par l'utilisateur
// Exception   : n/a
unsigned int saisieDansIntervalle(const unsigned int& b_inf, const unsigned int& b_sup, const std::string& valeur);

// Nom         : saisieOuiOuNon
// But         : Cette fonction précise est utilisé pour savoir si l'utilisateur
//               veut répondre oui ou non à un
// Param1      : question     = Chaine de charactères de la question qui
//                              posée à l'utilisateur
// Return      : Retourne 'o' ou 'n' si la réponse est respectivement positive ou négative
// Exception   : n/a
char saisieOuiOuNon(const std::string& question);

// Nom         : saisieIdentiqueA
// But         : Cette fonction vérifie et contrôle si la saisie utilisateur correspond
//               au charactère passé en paramètre
// Param1      : reponse      = Charactère qui sera comparé pour le retour de la fonction
// Return      : Retourne true si "reponse" correspond à la saisie utilisateur, sinon false
// Exception   : n/a
// Remarques   : Seul le premier charactère de la saisie est pris en compte
bool saisieIdentiqueA(const char& reponse);

#endif //SAISIE_H
