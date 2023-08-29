#include "sort.h"

/**
 * swipe_elements - swipe two elements
 * @a: The first variable
 * @b: The second variable
 * Return: void
 */
void swipe_elements(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - sorting an array following the algorith buble sort
 * @array: The array to sort
 * @size: The size of the array
 * Returns: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t index, tmp, l = size;
	bool counter;

	if (array == NULL || size < 2)
	{
		return;
	}
	while (counter == false)
	{
		counter = true;
		for (index = 0; index < l - 1; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
				tmp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = tmp;
				print_array(array, size);
				counter = false;
			}
		}
		l--;
	}
}
