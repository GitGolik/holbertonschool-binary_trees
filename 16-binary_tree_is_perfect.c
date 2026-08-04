#include "binary_trees.h"

/**
 * tree_height - Measures the number of levels in a binary tree
 * @tree: Pointer to the root node
 * Return: Number of levels in the tree
 */
static size_t tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}
/**
 * perfect_check - Checks if a tree is perfect
 * @tree: Pointer to the current node
 * @level: Current level of the node
 * @height: Number of levels in the tree
 * Return: 1 if the tree is perfect, otherwise 0
 */
static int perfect_check(const binary_tree_t *tree, size_t level,
	 size_t height)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (level == height - 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (perfect_check(tree->left, level + 1, height)
		&& perfect_check(tree->right, level + 1, height));
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = tree_height(tree);

	return (perfect_check(tree, 0, height));
}
