#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the root node of the tree to measure the height.
 *
 * Return: the balance factor of a binary tree
 *         If tree is NULL, your function must return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
  int balance_factor;

	if (tree == NULL)
		return (0);

  balance_factor = binary_tree_height(tree->left)
	             - binary_tree_height(tree->right);

	return (balance_factor);
}
