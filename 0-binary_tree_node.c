#include "binary_trees.h"

/**
 * binary_tree_node - function that creates tree node.
 * @parent: is a pointer to the parent node of the node.
 * @value: is the value to put  new node.
 * Return:Your function must return a pointer to the NULL .
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *mode = malloc(sizeof(binary_tree_t));

	if (mode == NULL)
		return (NULL);
	mode->n = value;
	mode->parent = parent;
	mode->left = NULL;
	mode->right = NULL;
	return (mode);
}
