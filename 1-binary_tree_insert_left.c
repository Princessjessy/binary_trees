#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts as the left-child
 * @parent: a pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 * Return: pointer to created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *mode = NULL;

	if (parent == NULL)
		return (NULL);
	mode = malloc(sizeof(binary_tree_t));
	if (mode == NULL)
		return (NULL);
	mode->n = value;
	mode->parent = parent;
	mode->left = NULL;
	mode->right = NULL;
	if (parent->left == NULL)
		parent->left = mode;
	else
	{
		mode->left = parent->left;
		parent->left = mode;
		mode->left->parent = mode;
	}
	return (mode);
}
