#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the root node of the tree to measure the height.
 *
 * Return: counts the leaves in a binary tree
 *         If tree is NULL, your function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	binary_tree_t *current;
	size_t left_ret = 0, right_ret = 0;

	if (tree == NULL)
		return (0);

	current = (binary_tree_t *) tree;
	if (current->left != NULL)
	{
		left_ret = binary_tree_size(current->left);
	}

	if (current->right != NULL)
	{
		right_ret = binary_tree_size(current->right);
	}

	if (right_ret == 0 && left_ret == 0)
		return (1);
	
	return (left_ret + right_ret);
}
