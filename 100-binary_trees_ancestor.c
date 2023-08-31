#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mode, *nude;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mode = first->parent, nude = second->parent;
	if (first == nude || !mode || (!mode->parent && nude))
		return (binary_trees_ancestor(first, nude));
	else if (mode == second || !nude || (!nude->parent && mode))
		return (binary_trees_ancestor(mode, second));
	return (binary_trees_ancestor(mode, nude));
}
