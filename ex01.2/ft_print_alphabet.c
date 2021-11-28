#include <unistd.h>

/*Ici nous avons creer la fonction ft_putchar qui contient la foction
 * write ce qui va nous permetre d'afficher un caractere a
 * l'ecran */

void ft_putchar (char c)
{
        write (1, &c, 1);//La fonction 'write'ne peut afficher qu'un seul caractere a la fois

}

/*I ci on a creer une deuxieme fonction'ft_print_alphabet' qui ne renvoi aucune valeur au proramme il va juste nous permettre d'afficher les nombre de l'alphabet tenps que la condition n'est pas respecter  */

void ft_print_alphabet (void)
{
        char alphabet;

        alphabet = 'a';

        while (alphabet <= 'z')
        {
                ft_putchar (alphabet);

                alphabet++;//a chaque fois que la condition n'est pas respecter en ajoute un pus un.
        
	}
	write (1, "\n", 1);//cette ligne nous permetra de faire un saut a la ligne

}

int main (void)/*Et pour excuter notre fonction on la juste appeller dans
la fonction 'main'*/
{
        ft_print_alphabet();

        return 0;
}

