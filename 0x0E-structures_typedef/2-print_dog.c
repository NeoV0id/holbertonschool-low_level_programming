#include "dog.h"

/**
 * print_dog - prints infos of dog from struct
 * @d: dog to print
 *
 * Return: absolutely nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\0");
	}

	else
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", name);

		if (d->age == NULL)
			printf("Age: (nil)\n");
		else
			printf("Age: %.1f\n", age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", owner);
}
