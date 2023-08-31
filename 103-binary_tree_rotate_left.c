#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Left-rotates a binary tree.
 * @tree: A pointer to the root  the tree to rotate.
 *
 * Return: A pointer to the new node after rotation.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
      binary_tree_t *mode, *nude;
	if (tree == NULL || tree->right == NULL)
		return (NULL);

	mode = tree->right;
	nude = mode->left;
	mode->left = tree;
	tree->right = nude;
	if (nude != NULL)
		nude->parent = tree;
	nude = tree->parent;
	tree->parent = mode;
	mode->parent = nude;
	if (nude != NULL)
	{
		if (nude->left == tree)
			nude->left = mode;
		else
			nude->right = mode;
	}

	return (mode);
}
