#include "sort.h"
/**
* swap - swaps two integers in an array
* @a: first number
* @b: second number
*/
void swap(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
/**
* shell_sort - an implementation of the shell sort with the
* knuth sequence
* @array: the array to be sorted
* @size: the size of the array
*/
void shell_sort(int *array, size_t size)
{
int gc = 0, k, z;
size_t gap = 1;
size_t i, j;
/*find the maximum amount of divider*/
while (gap < size / 2)
gc += 1, gap = gc * 3 + 1;/*knuth sequence*/
gc--;
while (gc >= 0)
{
gap = gc * 3 + 1;/*knuth sequence*/
/*find and sort all the elments with the @gap intevral*/
j = 0;
while (j < gap)
{
i = j;
while (i < size)
{
k = i - gap, z = i;
/*
* take the current element and put it in its right place in
* the subgroup
*/
while (k >= 0)
{
if array[z] > array[k])
break;
swap(array + z, array + k);
z = k;
k -= gap;
}
i += gap;
}
j++;
}
print_array(array, size);
gc--;
}
}
