#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of the tree
 * @tree: pojnter to the root node of the tree
 * Return: Size of the tree, of 0 if NULL
 */
size_t binary_tree_size(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
