#include "binary_trees.h"

/**
 * binary_tree_depth - look at the depth of the tree
 * @tree: pointer to the tree we look at
 * Return: the depth or NULL if 0
 */
size_t binary_tree_depth(binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent == NULL)
	{
		return (depth);
	}
	else
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}
}
