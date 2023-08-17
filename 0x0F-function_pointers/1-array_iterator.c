#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - on a newl prints each array elem
 * @array: array
 * @size: how many elem to be printed
 * @action: pointer to be printed in regular or hex
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
