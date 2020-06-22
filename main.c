#include <stdio.h>
#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_number(int number)
{
	int num;

	num = number;
	if (num >= 0 && num <= 9)
		put_char(num + '0');
	else
	{
		put_number(num / 10);
		put_number(num % 10);
	}
}

void	print_to_100(void)
{
	int number;
	size_t index;

	number = 0;
	while(number <= 100)
	{	
		index = 0;
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "IceCream\n", 9);
		else if (number % 3 == 0)
			write(1, "Ice\n", 4);
		else if (number % 5 == 0)
			write(1, "Cream\n", 6);
		else
		{
			put_number(number);
			put_char('\n');
		}

		number++;
	}
	write(1, "\n", 1);
}

int main(void)
{
	print_to_100();
	return (0);
}
