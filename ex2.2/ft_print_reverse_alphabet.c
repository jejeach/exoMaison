#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);//affichage a l'ecran 
}

void ft_print_reverse_alphabet(void)
{
	char alphabeRevers;
	alphabeRevers = 'z';

	while (alphabeRevers >= 'a')
	{
		ft_putchar(alphabeRevers);
		ft_putchar(' ');//insertion d'espace entre les caractere
		alphabeRevers--;//decrementation du plus grand au plus petit
	}
	write (1, "\n", 1);//ajout de saut a la ligne
}

int main (void)
{
	ft_print_reverse_alphabet();//test de la fonction

	return 0;
}
