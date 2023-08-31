#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count.
 *
 * Return: the function must root failure.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t mode = 0;

	if (tree)
	{
		mode += (tree->left || tree->right) ? 1 : 0;
		mode += binary_tree_nodes(tree->left);
		mode += binary_tree_nodes(tree->right);
	}
	return (mode);
}
