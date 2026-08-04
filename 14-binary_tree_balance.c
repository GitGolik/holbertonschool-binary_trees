#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of the tree
 * @tree: pointer to the root node of the tree measured
 * Return: balance factore or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		left = 1 + binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		right = 1 + binary_tree_height(tree->right);
	}

	return ((int)left - (int)right);
}
