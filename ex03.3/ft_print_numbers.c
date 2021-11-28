#include <unistd.h>

void ft_putchar(char c)
{
        write(1, &c, 1);
}

void ft_print_numbers(void)
{
        char nomberCroi ;
        nomberCroi = '0';

        while (nomberCroi <= '9')
        {
                ft_putchar(nomberCroi);
                ft_putchar(' ');
                nomberCroi++;
        }
        write(1, "\n", 1);
}

int main(void)
{
        ft_print_numbers();

	return 0;
}
