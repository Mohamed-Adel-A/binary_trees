#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the parent node
 * @value: is the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure, or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);

	left_node = parent->left;

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (left_node != NULL)
	{
		left_node->parent = new_node;
		new_node->left = left_node;
	}

	parent->left = new_node;

	return (new_node);
}
