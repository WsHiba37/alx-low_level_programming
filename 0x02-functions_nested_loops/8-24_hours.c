#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * jack_bauer - print 24 hours
 *
 *
 */
void jack_bauer(void)
{
	int hrs = 0;
	int min = 0;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (min = 0; min < 60; min++)
		{
			printf("%02d:%02d\n", hrs, min);
		}
	}
}
