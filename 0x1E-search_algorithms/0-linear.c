#include "search_algos.h"

/** linear_sreach - searches for a value in an array
* of integers using the Linear search algorithm
*
* @array: array to be searched
* @size: size of the array
* @value: value to search for
*
* Return: the first index where value is located,
*   otherwise, -1
*/
int linear_search(int *array, size_t size, int value)
{
  size_t i = 0;

  if (array == NULL)
    return (-1);

  while (i < size)
  {
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    if (array[i] == value)
      return (i);
    i++;
  }
  return (-1);
}
