#include <unistd.h>
void put_char1(int g_1);
void put_char3(int g_3);
void put_char(int n);
int n = 0;
int g_4 = 0;
int g_3 = 0;
int g_2 = 0;
int g_1 = 1;
void ft_print_comb2()
{
	while(g_4<10)
	{
		while (g_3<10)
		{
			while (g_2<10)
			{
				while (g_1<10)
				{
					put_char(g_4);
					put_char3(g_3);
					put_char(g_2);
					put_char1(g_1);
					g_1++;
				}
				g_1=0;
				g_2++;
			}
			g_2=g_4;
			g_3++;
			g_1=g_3+1;
		}
		g_4++;
		g_3 = 0;
		g_2=g_4;
		g_1=1;
	}
}
void put_char(int n)
{
	char c = '0' + n;
	write(1, &c, 1);
}
void put_char3(int g_3)
{
	char c = '0' + g_3;
	write(1, &c, 1);
	write(1, " ", 1);
}
void put_char1(int g_1)
{
	char c = '0' + g_1;
	write(1, &c, 1);
	if(!(g_4==9&&g_3==8))
		write(1, ", ", 2);
}
