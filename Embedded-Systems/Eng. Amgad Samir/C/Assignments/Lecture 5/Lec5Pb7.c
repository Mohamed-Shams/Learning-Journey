#include <stdio.h>
/* Lec5Pb7.c */ 

int max_zero(int n);
int convertToBinary(int num);

int main()
{
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);

	printf("max number of zeros between two ones in[%d]: %d",convertToBinary(num),max_zero(num));
	return (0);
}

int max_zero(int n)
{
	int max = 0;
	int flag = 1;
	int current_bit = 0;
	int previous_bit = 0;
	int count = 0;

	while (n > 0)
	{
		current_bit = n & 1;
		if (current_bit == 1)
		{
			if (max < count)
				max = count;

			flag = 1;
			count = 0;
		}
		if (current_bit == 0 && previous_bit == 1)
			flag = 0;
		if (flag == 0)
			count++;

		n >>= 1;

		previous_bit = current_bit;
	}

	return (max);
}

int convertToBinary(int num) {
    int binary = 0, remainder, base = 1;
    while (num) {
        remainder = num % 2;
        binary += remainder * base;
        num /= 2;
        base *= 10;
    }
    return binary;
}