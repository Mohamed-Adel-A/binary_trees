#include "binary_trees.h"

int is_bst_left(const binary_tree_t *tree, int key)
{
    int left_ret = 1, right_ret = 1;

    if (tree->left != NULL)
    {
        if (tree->left->n < tree->n && tree->left->n < key)
        {
            left_ret = is_bst(tree->left, key);
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
            right_ret = is_bst(tree->right, key);
        }
        else
        {
            right_ret = 0;
        }
    }

	printf("tree: %d\n", tree->n);
	if (tree->left != NULL)
		printf("left: %d\n", tree->left->n);
	if (tree->right != NULL)
		printf("right: %d\n", tree->right->n);
	printf("left_ret: %d\n", left_ret);
	printf("right_ret: %d\n", right_ret);
	return (left_ret * right_ret);
}


int is_bst_right(const binary_tree_t *tree, int key)
{
    int left_ret = 1, right_ret = 1;

    if (tree->left != NULL)
    {
        if (tree->left->n < tree->n && tree->left->n > key)
        {
            left_ret = is_bst(tree->left, key);
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
            right_ret = is_bst(tree->right, key);
        }
        else
        {
            right_ret = 0;
        }
    }

	printf("tree: %d\n", tree->n);
	if (tree->left != NULL)
		printf("left: %d\n", tree->left->n);
	if (tree->right != NULL)
		printf("right: %d\n", tree->right->n);
	printf("left_ret: %d\n", left_ret);
	printf("right_ret: %d\n", right_ret);
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
    if (tree == NULL)
        return (0);

    return (is_bst_left(tree->left, tree->n) * is_bst_right(tree->right, tree->n));
}
