#include "binary_trees.h"

/**
 * bst_insert -  inserts a value in a Binary Search Tree
 * @tree: is a double pointer to the root node of the BST to insert the value
 * @value: is the value to store in the node to be inserted
 *
 * Return: a pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *root, *new_node, *current;

	if (tree == NULL)
		return (NULL);
	root = *tree;
	if (root == NULL)
	{
		new_node = (bst_t *) binary_tree_node(NULL, value);
		*tree = new_node;
		return (new_node);
	}
	current = root;
	while (current != NULL)
	{
		if (value < current->n)
		{
			if (current->left != NULL)
				current = current->left;
			else
			{
				new_node = (bst_t *) binary_tree_node(current, value);
				current->left = new_node;
				return (new_node);
			}
		}
		else if (value > current->n)
		{
			if (current->right != NULL)
				current = current->right;
			else
			{
				new_node = (bst_t *) binary_tree_node(current, value);
				current->right = new_node;
				return (new_node);
			}
		}
		else
			break;
	}
	return (NULL);
}
