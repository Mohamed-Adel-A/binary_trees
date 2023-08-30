#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the root node of the tree to measure the height.
 *
 * Return: the height of a binary tree,
 *         If tree is NULL, your function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	binary_tree_t *current;
	size_t left_ret = 0, right_ret = 0;

	if (tree == NULL)
		return (0);

	current = (binary_tree_t *) tree;
	if (current->left != NULL)
	{
		left_ret = binary_tree_size(current->left);
		left_ret += 1;
	}

	if (current->right != NULL)
	{
		right_ret = binary_tree_size(current->right);
		right_ret += 1;
	}

		return (left_ret + right_ret);
}
