#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Right-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *mode, *nude;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	mode = tree->left;
	nude = mode->right;
	mode->right = tree;
	tree->left = nude;
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
