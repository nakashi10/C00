#include <unistd.h>

void ftprint_reverse_alphabet(void)
{
	char c;

	c = 'z';
	
	while (c >= 'a')
	{
		write(1,&c,1);
		c--;
	}
}
