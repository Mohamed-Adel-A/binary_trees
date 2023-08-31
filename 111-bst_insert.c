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
	bst_t *root;

	if (tree == NULL)
		return (NULL);
	tree = *tree;

	if (value <
}
