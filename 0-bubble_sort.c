#include "sort.h"
/**
* bubble_sort - implementation of bubble sort
* @array: array to be sorted
* @size: size of the array
*
*/
void bubble_sort(int *array, size_t size)
{
unsigned int i = 0, j = 0;
int tmp;
unsigned int swapped = 0;
if (!array || size < 2)
return;
while (j < size)
{
i = 0;
while (i < size)
{
if (array[i] > array[i + 1])
{
tmp = array[i];
array[i] = array[i + 1];
array[i + 1] = tmp;
swapped = 1;
print_array(array, size);
}
i++;
}
/*if it was already sorted*/
if (!swapped)
return
j++;
}
}
