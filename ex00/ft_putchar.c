#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c,1);

	write(1,"\n",1);


	//fonction(affichage,valeur a afficher , taille ou nombre de caractere

}

int main(void)
{
	ft_putchar ('A');
}
