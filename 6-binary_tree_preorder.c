#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree in the mode: Pre-Order.
 * @tree: Pointer to root of the tree to be traversed.
 * @func: Function to execute at each node.
 * Return: Void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
