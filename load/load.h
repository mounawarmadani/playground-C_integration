#include <stdio.h>
#include <stdlib.h>

struct complex
{
	float real;
	float img;
};
int load(char * nom,struct complex ** p)
{
	//Ecrire le code permettant de charger les enregistrements  d'un fichier. 
	// nom : nom du fichier
	// p   : l'adresse de l'adresse à partie de laquelle les enregistrements (dont le nombre n'est pas connu à l'avance) seront chargés en mémoire
	// L'adresse fournie par la fonction vaut NULL si pas d'enregistrements obtenus
	// La valeur renvoyée est le nombre d'enregistrements chargés 	
}