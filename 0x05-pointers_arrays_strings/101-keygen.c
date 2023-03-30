#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-Generate random passwords
 *
 * Return 0;
 */

int main (void)
{
	char password[84];
	int index =0, sum =0,diff_half1, diff_half2;
	srand(time(0));
	while (sum < 2772)
	{
		password[index] = 33 + rand() %94;
		sum += password[index++];
	}
	password[index] = '\0';
	return password;
}
	/**if (sum != 2772)
	{
		diff_half1 = (sum - 2772) /2;
		diff_half2 = (sum - 2772) /2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;

