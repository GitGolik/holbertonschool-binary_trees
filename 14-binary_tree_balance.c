#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree (helper function)
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + height(tree->left);

	if (tree->right)
		right = 1 + height(tree->right);

	return (left > right ? left : right);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + height(tree->left);

	if (tree->right)
		right = 1 + height(tree->right);

	return ((int)left - (int)right);
}
