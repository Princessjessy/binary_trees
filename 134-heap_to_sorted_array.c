#include "binary_trees.h"
#include<stdlib.h>

/**
 * heap_to_sorted_array - converts a Binary Max Heap 
 *
 * @heap: pointer of the heap to convert
 * @size: address to store the size of the array
 * Return: sorted array of integers
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int *cole;
	int extract, i = 0;
	size_t heap_size;

	if (!heap)
		return (NULL);
	heap_size = binary_tree_size(heap);
	*size = heap_size;
	cole = malloc(heap_size * sizeof(int));
	if (!cole)
		return (NULL);
	while (heap)
	{
		extract = heap_extract(&heap);
		cole[i] = extract;
		i++;
	}
	return (cole);
}
