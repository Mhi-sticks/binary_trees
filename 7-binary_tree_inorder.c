#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree in the mode: In-Order.
 * @tree: Pointer to root of the tree to be traversed.
 * @func: Function to execute at each node.
 * Return: Void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
