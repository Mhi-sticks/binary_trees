#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a new binary tree node
 * and inserts in left of parent.
 * @parent: Pointer to the parent node.
 * @value: Data value of the new node.
 * Return: Pointer to the new node or NULL if unsuccessful
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *current_left = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (parent->left)
	{
		current_left = parent->left;
		current_left->parent = new;
	}
	parent->left = new;
	new->left = current_left;
	return (new);
}
