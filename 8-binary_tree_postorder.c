#include "binary_trees.h"

/**
 * binary_tree_postorder -a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Return : NULL -1	
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && fun)
	{
		binary_tree_postorder(tree->left, fun);
		binary_tree_postorder(tree->right, fun);
		fun(tree->n);
	}
}
