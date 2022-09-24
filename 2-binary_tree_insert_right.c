#include "binary_trees.h"

/**
 * binary_tree_insert_right - Creates a new binary tree node
 * and inserts in right of parent.
 * @parent: Pointer to the parent node.
 * @value: Data value of the new node.
 * Return: Pointer to the new node or NULL if unsuccessful
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *current_right = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (parent->right)
	{
		current_right = parent->right;
		current_right->parent = new;
	}
	parent->right = new;
	new->right = current_right;
	return (new);
}
