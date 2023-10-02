#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar(45);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		nbr = (nbr % 10 + '\0');
	}
	if (nbr <= 9)
	{
		ft_putchar(nbr + 48);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
