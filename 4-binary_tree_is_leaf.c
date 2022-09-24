#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Node to be checked.
 * Return: 1 if true else 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left)
		return (0);
	if (node->right)
		return(0);
	return (1);
}
