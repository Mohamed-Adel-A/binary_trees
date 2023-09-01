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
	bst_t *root, *new_node;

	if (tree == NULL)
		return (NULL);

	root = *tree;
	if (root == NULL)
	{
		new_node = (bst_t *) binary_tree_node(NULL, value);
		if (new_node == NULL)
		{
			return (NULL);
		}
		*tree = new_node;
		return (new_node);
	}
}
