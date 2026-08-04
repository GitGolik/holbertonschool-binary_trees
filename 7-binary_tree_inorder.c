#include "binary_trees.h"

/**
 * binary_tree_inorder - script to go trought a tree in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to the functions call of each node
 * Return: no return
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
	{
		return;
	}

	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
