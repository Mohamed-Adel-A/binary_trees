#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root node of the tree to measure the height.
 *
 * Return: the height of a binary tree,
 *         If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *current = tree;
	size_t max, now;

	if (tree == NULL)
		return (0);

	if (current->left != NULL)
	{
		binary_tree_height(current->left);
	}
	if (current->right != NULL)
	{
		binary_tree_height(current->right);
	}
}
