#include "binary_trees.h"

/**
 * binary_tree_is_bst -  checks if a binary tree is a valid Binary Search Tree
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: return 1 if tree is a valid BST, and 0 otherwise
 *         If tree is NULL, return 0
 *
*/

int binary_tree_is_bst(const binary_tree_t *tree)
{
    int left_ret = 1, right_ret = 1;

    if (tree == NULL)
        return (0);

    if (tree->left != NULL)
    {
        if (tree->left < tree)
        {
            left_ret = binary_tree_is_bst(tree->left);
        }
        left_ret = 0;
    }

    if (tree->right != NULL)
    {
        if (tree->right > tree)
        {
            right_ret = binary_tree_is_bst(tree->right);
        }
        right_ret = 0;
    }

    return (left_ret * right_ret);
}
