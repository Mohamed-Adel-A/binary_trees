#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: the depth of a node
 *         If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *current = tree;

	if (tree == NULL)
		return (0);

	depth = 0;
	while (current->parent != NULL)
	{
		current = current->parent;
		depth += 1;
	}

	return (depth);
}
