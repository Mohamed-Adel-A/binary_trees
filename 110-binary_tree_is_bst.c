#include "binary_trees.h"

/**
 * is_bst_left -  checks if a binary tree is a valid Binary Search Tree
 * @tree: is a pointer to the root node of the tree to check
 * @key: key value to be checked
 *
 * Return: return 1 if tree is a valid BST, and 0 otherwise
 *         If tree is NULL, return 0
*/
int is_bst_left(const binary_tree_t *tree, int key)
{
	int left_ret = 1, right_ret = 1;

	if (tree->left != NULL)
	{
		if (tree->left->n < tree->n && tree->left->n < key)
		{
			left_ret = is_bst_left(tree->left, key);
		}
		else
		{
			left_ret = 0;
		}
	}

	if (tree->right != NULL)
	{
		if (tree->right->n > tree->n && tree->right->n < key)
		{
			right_ret = is_bst_left(tree->right, key);
		}
		else
		{
			right_ret = 0;
		}
	}

	return (left_ret * right_ret);
}

/**
 * is_bst_right -  checks if a binary tree is a valid Binary Search Tree
 * @tree: is a pointer to the root node of the tree to check
 * @key: key value to be checked
 *
 * Return: return 1 if tree is a valid BST, and 0 otherwise
 *         If tree is NULL, return 0
*/
int is_bst_right(const binary_tree_t *tree, int key)
{
	int left_ret = 1, right_ret = 1;

	if (tree->left != NULL)
	{
		if (tree->left->n < tree->n && tree->left->n > key)
		{
			left_ret = is_bst_right(tree->left, key);
		}
		else
		{
			left_ret = 0;
		}
	}

	if (tree->right != NULL)
	{
		if (tree->right->n > tree->n && tree->right->n > key)
		{
			right_ret = is_bst_right(tree->right, key);
		}
		else
		{
			right_ret = 0;
		}
	}

	return (left_ret * right_ret);
}


/**
 * binary_tree_is_bst -  checks if a binary tree is a valid Binary Search Tree
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: return 1 if tree is a valid BST, and 0 otherwise
 *         If tree is NULL, return 0
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int left_ret = 1, right_ret = 1;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left_ret = is_bst_left(tree->left, tree->n);
	}

	if (tree->right != NULL)
	{
		right_ret = is_bst_right(tree->right, tree->n);
	}

	return (left_ret * right_ret);
}
