#include "binary_trees.h"

/**
 * binary_tree_height - mesure the height of the tree
 * @tree: pointer to the tree we check
 * Return: height or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree-> left)
	{
		left = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right = 1 + binary_tree_height(tree->right);
	}

	return (left > right ? left : right);
}
