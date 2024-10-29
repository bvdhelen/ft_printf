 #include "ft_printf.h"
 
 int main()
{
	int a = 13456;
	int i = ft_printf("%p", &a);
	int j = printf("%p", &a);
	if (i == j)
	{
		printf("Correcto.");
	}
}
