#include <unistd.h>
void	put_char1(int g_1, int g_3);
void	put_char(int n);
int		n =0;
int		g_3 =0;
int		g_2 =1;
int		g_1 =2;

void	ft_print_comb(void)
{
	while (g_3 <= 7)
	{
		g_2 = g_3 + 1;
		while (g_2 <= 8)
		{
			g_1 = g_2 + 1;
			while (g_1 <= 9)
			{
				put_char(g_3);
				put_char(g_2);
				put_char1(g_1, g_3);
				g_1++;
			}
			g_2++;
		}
		g_3++;
	}
}

void	put_char(int n)
{
	char	c;

	c = '0' + n;
	write(1, &c, 1);
}

void	put_char1(int g_1, int g_3)
{
	char	c;

	c = '0' + g_1;
	write(1, &c, 1);
	if (g_3 < 7)
		write(1, ", ", 2);
}
