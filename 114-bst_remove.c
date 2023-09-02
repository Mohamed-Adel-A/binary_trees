#include "binary_trees.h"

/**
 * bst_remove - removes a node from a Binary Search Tree
 * @tree: is a pointer to the root node of the tree where you will remove a node
 * @value: is the value to remove in the tree
 *
 * Return: a pointer to the new root node of the tree after removing the desired value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *node;

	if (root == NULL)
		return (NULL);

	node = root;
	while (node != NULL)
	{
		if (value == node->n)
		{
			if (node->left != NULL)
			{
				
			}
			if (node->right != NULL)
			{
				
			}
		}
		else if (value < node->n)
		{
			node = node->left;
		}
		else if (value > node->n)
		{
			node = node->right;
		}
	}
	
}
