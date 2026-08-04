#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the current node we are in is the root
 * @node: pointer of the node to check
 * Return: 1 if root or 0 if not or NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
