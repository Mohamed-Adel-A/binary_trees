#include "binary_trees"

/**
 *
 *
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
