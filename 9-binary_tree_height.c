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
	size_t max, ret = 0;

	if (tree == NULL)
		return (0);

	if (current->left != NULL)
	{
		ret = binary_tree_heightinary_tree_height(current->left);
		ret += 1;
	}
	if (current->right != NULL)
	{
		ret = binary_tree_height(current->right);
		ret += 1;
	}
	return (ret);
}
