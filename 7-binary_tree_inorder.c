#include "binary_trees.h"

/**
 * binary_tree_inorder - a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Return : if 0 failure otherwise 1
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && fun)
	{
		binary_tree_inorder(tree->left, fun);
		fun(tree->n);
		binary_tree_inorder(tree->right, fun);
	}
}
