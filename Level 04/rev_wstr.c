#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0; // Initialisation de l'indice i
	int start; // Indice de début du mot
	int end;   // Indice de fin du mot

	if (argc == 2) // Vérifier qu'il y a un seul argument
	{
		while (argv[1][i] != '\0') // Trouver la fin de la chaîne
			i++;
		while (i >= 0) // Parcours de la chaîne de la fin vers le début
		{
			while (argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t') // Ignorer les espaces et tabulations
				i--;
			end = i; // Marquer la fin du mot
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t') // Trouver le début du mot
				i--;
			start = i + 1; // Marquer le début du mot
			while (start <= end) // Afficher le mot
			{
				write(1, &argv[1][start], 1); // Afficher chaque caractère du mot
				start++; // Passer au caractère suivant
			}
			if (i >= 0) // Ajouter un espace entre les mots
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1); // Ajouter un saut de ligne à la fin
	return (0); // Terminer le programme
}
