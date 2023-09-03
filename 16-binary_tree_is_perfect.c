#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);



/**
 * binary_tree_is_full - measures the height of a binary tree
 * @tree: the root node of the tree to measure the height.
 *
 * Return: the height of a binary tree,
 *         If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *current;
	size_t left_ret = 0, right_ret = 0;

	if (tree == NULL)
		return (0);

	current = (binary_tree_t *) tree;
	if (current->left != NULL)
	{
		left_ret = binary_tree_is_full(current->left) * binary_tree_balance(current->left);
		left_ret *= 1;
	}

	if (current->right != NULL)
	{
		right_ret = binary_tree_is_full(current->right) * binary_tree_balance(current->right);
		right_ret *= 1;
	}

	if (left_ret == 0 && right_ret == 0)
		return (1);

	return (left_ret * right_ret);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root node of the tree to measure the height.
 *
 * Return: the height of a binary tree,
 *         If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *current;
	size_t left_ret = 0, right_ret = 0;

	if (tree == NULL)
		return (0);

	current = (binary_tree_t *) tree;
	if (current->left != NULL)
	{
		left_ret = binary_tree_height(current->left);
		left_ret += 1;
	}

	if (current->right != NULL)
	{
		right_ret = binary_tree_height(current->right);
		right_ret += 1;
	}

	if (left_ret >= right_ret)
		return (left_ret);
	else
		return (right_ret);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the root node of the tree to measure the height.
 *
 * Return: the balance factor of a binary tree
 *         If tree is NULL, your function must return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor, left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = (int) binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right = (int) binary_tree_height(tree->right) + 1;

	balance_factor = left - right;

	return (balance_factor);
}


/**
 * binary_tree_is_perfect -  checks if a binary tree is full
 * @tree: the root node of the tree to measure the height.
 *
 * Return:  1 if a binary tree is full, 0 otherwise
 *         If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balanced, full;

	if (tree == NULL)
		return (0);
	/* if balance retrun 0 */
	balanced = binary_tree_balance(tree);

	/* changed balanced from number to 0 not balanced , 1 balanced */
	if (balanced == 0)
		balanced = 1;
	else
		balanced = 0;

	/* if full return 1 */
	full = binary_tree_is_full(tree);

	return (balanced * full);
}
