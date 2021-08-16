#include <unistd.h>
void	put_char(int g_n);
int		put_n(int g_n);
int		ft_pow(int g_dn);
void	cal_num(int nb);
int		g_nb = 0;
int		g_n = 0;
int		g_dn = 0;
int		g_dtotal = 0;
int		g_ex = 0;

void	ft_putnbr(int nb)
{
	g_nb = 0;
	g_n = 0;
	g_dn = 0;
	g_dtotal = 0;
	g_ex = 0;
	if (nb > 2147483647 || nb < -2147483648)
		return ;
	if (nb == 0)
		put_char(0);
	if (nb < 0)
		nb = put_n(nb);
	cal_num(nb);
}

void	cal_num(int nb)
{
	g_nb = nb;
	while (nb > 0)
	{
		nb = nb / 10;
		g_dn++;
	}
	g_dtotal = ft_pow(g_dn);
	while (g_dn > 0)
	{
		g_n = g_nb / g_dtotal;
		put_char(g_n);
		g_nb = g_nb % g_dtotal;
		g_dtotal = g_dtotal / 10;
		g_dn--;
	}
}

void	put_char(int g_n)
{
	char	c;

	c = 48 + g_n;
	write(1, &c, 1);
}

int	ft_pow(int g_dn)
{
	int	pow;

	pow = 1;
	while (g_dn > 1)
	{
		pow = 10 * pow;
		g_dn--;
	}
	return (pow);
}

int	put_n(int g_n)
{
	g_n = g_n * -1;
	write(1, "-", 1);
	return (g_n);
}
