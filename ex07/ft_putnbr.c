#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	long long a;
	int i;
	int sign;
	
	i = 0;
	if (nb < 0)
	{
		sign = -1;
		nb = -nb;
		i++;
	}
	a = nb;
	while (nb / 10)
	{
		i++;
		nb = nb / 10;
	}
	i = i + 2;
	char tab [i];
}

int	main()
{
	int i;
	i = 42;
	printf("&d", i % 10);
	//ft_putnbr(34567);
	return (0);
}
