#include "binary_trees.h"

/**
 * bst_insert - a value in a Binary Search Tree.
 *
 * @tree: A double pointer of the BST to insert the value.
 * @value: The value to store to be inserted.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *hall, *old;

	if (tree != NULL)
	{
		hall = *tree;

		if (hall == NULL)
		{
			old = binary_tree_node(hall, value);
			if (old == NULL)
				return (NULL);
			return (*tree = old);
		}

		if (value < hall->n) 
			/* insert in left subtree */
		{
			if (hall->left != NULL)
				return (bst_insert(&hall->left, value));

			old = binary_tree_node(hall, value);
			if (old == NULL)
				return (NULL);
			return (hall->left = old);
		}
		if (value > hall->n)
		       	/* insert in right subtree */
		{
			if (hall->right != NULL)
				return (bst_insert(&hall->right, value));

			old = binary_tree_node(hall, value);
			if (old == NULL)
				return (NULL);
			return (hall->right = old);
		}
	}
	return (NULL);
}
