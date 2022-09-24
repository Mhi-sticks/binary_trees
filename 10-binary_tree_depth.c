#include "binary_trees.h"

/**
 * binary_tree_depth - Find depth.
 * @tree: Pointer to node.
 * Return: void.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	binary_tree_t *current;

	if (tree == NULL)
		return (0);
	depth = 0;
	current = tree->parent;
	while (current)
	{
		depth++;
		current = current->parent;
	}
	return (depth);
}
