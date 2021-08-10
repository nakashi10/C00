#include <unistd.h>
void	put_char(int g_4, int g_3, int g_2, int g_1);
int		g_n = 0;
int		g_4 = 0;
int		g_3 = 0;
int		g_2 = 0;
int		g_1 = 1;

void	ft_print_comb2(void)
{
	while (g_4 < 10)
	{
		while (g_3 < 10)
		{
			while (g_2 < 10)
			{
				while (g_1 < 10)
				{
					put_char(g_4, g_3, g_2, g_1);
					g_1++;
				}
				g_1 = 0;
				g_2++;
			}
			g_2 = g_4;
			g_3++;
			g_1 = g_3 + 1;
		}
		g_4++;
		g_3 = 0;
		g_2 = g_4;
		g_1 = 1;
	}
}

void	put_char(int g_4, int g_3, int g_2, int g_1)
{
	char	c4;
	char	c3;
	char	c2;
	char	c1;

	c4 = '0' + g_4;
	c3 = '0' + g_3;
	c2 = '0' + g_2;
	c1 = '0' + g_1;
	write(1, &c4, 1);
	write(1, &c3, 1);
	write(1, " ", 1);
	write(1, &c2, 1);
	write(1, &c1, 1);
	if (!(g_4 == 9 && g_3 == 8))
		write(1, ", ", 2);
}

int main()
{
	ft_print_comb2();
	return 0;
}