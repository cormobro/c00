#include <unistd.h>

void	ft_display(int a, int b, int c, int d)
{
	char chara;
	char charb;
	char charc;
	char chard;

	chara = a + '0';
	charb = b + '0';
	charc = c + '0';
	chard = d + '0';
	write(1, &chara, 1);
	write(1, &charb, 1);
	write(1, " ", 1);
	write(1, &charc, 1);
	write(1, &chard, 1);
	if (a == 9 && b == 8 && c == 9 && d == 9)
		write(1, "\n", 1);
	else
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;

	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					ft_display(a, b, c, d);
					d++;
				}
				d = 0;
				c++;
			}
			if (b == 9)
			{
				d = 0;
				c = a + 1;
			}
			else
			{
				c = a;
				d = b + 2;
			}
			b++;
		}
		b = 0;
		a++;
	}
}

int	main()
{
	ft_print_comb2();
	return (0);
}
