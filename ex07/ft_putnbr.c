#include <unistd.h>
int g_1=0;
void ft_putnbr(int nb)
{
	while (nb > 0)
	{
		nb = nb / 10;
		g_1++;
	}
}
int main(void)
{
	ft_putnbr(53454235);
	return 0;
}

