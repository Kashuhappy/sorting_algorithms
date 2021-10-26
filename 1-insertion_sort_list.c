#include "sort.h"
/**
* insertion_sort_list - implemetnation of insertion sort in
* a doubly linked list
* @list: pointer to the head of the list to be sorted
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current = *list, *prev_tmp = NULL, *prev = NULL;
while (current)
{
prev = current->prev;
/*move current element steps back until in position*/
while (1)
{
if (!prev)
break;
if (current->prev->n)
break;
/*if the two nodes are out of order, swap them*/
if (current->next)
current->next->prev = prev;
prev->next = current->next;
current->next = prev;
prev_tmp = prev->prev;
prev->prev = current;
current->prev = prev_tmp;
if (prev_tmp)
prev_tmp->next = current;
else
*list = current;
/*swap the names when the swap is done*/
prev_tmp = prev;
prev = current;
current = prev_tmp;
print_list(*list);
/*
* go back one step so that the newly swaped(went to left) value
* is the current and make sure it isn't smaller than
* the value in its left
*/
prev = prev->prev;
current = current->prev;
}
current = current->next;
}
}
