/*----------------------------------
Nom du projet 		: DEMO
Nom du fichier 		: MAIN
Date de création 	: 29.09.2025
Date de modification : 29.09.2025
Nom : Samuel villard 
Classe : SLO1
Version : 1.0
Description : demo pour SLO1 25-26
Remarque : 
-----------------------------------*/

//nom de la fonction : 
//paramètre entrée : 
//paramètre sortie : 
//paramètre In-OUT : 
//description : 

//***Librairie_standard***//
#include <stdio.h>
#include <stdbool.h>

//***Librairie_perso***//
#include "Conversion.h"

//#include""

//***définition***/
#define FOIX_2 2 //n'occupe pas d'espace mémoire 

//***Constante_golabale***//

void main()
{
//*****Déclaration_des_variables*****//

//***Constante***//
	//A EVITE mettre en define
	const float PI = 3.141592653589793; //valeur du nombre PI

//***Variable***//
	float rayon_m = 4; //-> m pour mètre
					   //cast implicite -> entier ->reel 
	float perimetre = 0;

//--type enumération locale--//
	enum e_machineEtat {ETAT1, ETAT2 = 20, ETAT3};//ETAT1 = 0, ETAT2 = 20, ETAT3 = 21
	enum e_machineEtat system = ETAT2;

//*****Début du code*****//
	//une instruction est composé d'opérandes (variable) et d'opérateur (signe)
	//cast-> (type)variable
	perimetre = (float)FOIX_2 * (float)PI * rayon_m; 
	printf("Valeur du perimetre %f \n Magieeeeee \n ", perimetre);
	printf("Taille d'un bouléen %d [o]", sizeof(bool));//renvoie la taille du type en octet 
}