#include <unistd.h>

void ft_putchar(char c)
{
        write(1, &c, 1);//creation de la fonction write pour afficher les elements
}

void ft_is_negative(int n)
{

        if (n < 0)
        {
            ft_putchar('N');
        }
        else if (n > 0)
        {
            ft_putchar('P');
        }
        else
        {
            ft_putchar('p');
        }
	write(1, "\n", 1);
}

int main(void)
{
        int nb = 757775 ;
        ft_is_negative(nb);

        return 0;
}

