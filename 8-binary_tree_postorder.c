#include "binary_trees.h"

/**
 * binary_tree_postorder - go trought a tree in post-order traversal
 * @tree: pointer to the tree we traverse
 * @func: pointer to the function to call for each nodes
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
