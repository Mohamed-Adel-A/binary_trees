#include "binary_trees.h"

void delete_node(binary_tree_t *node)
{
	if (node == NULL)
		return;

	free(node);
	node = NULL;
}

void delete_tree(binary_tree_t *root)
{
	binary_tree_t *current = root;

	if (current->left != NULL)
	{
		delete_tree(current->left);
	}

	if (current->right != NULL)
	{
		delete_tree(current->right);
	}

	delete_node(current);
}

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 *
 * Return: nothing (void)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *root;
	binary_tree_t *current;

	if (tree == NULL)
		return;

	while (current != NULL)
	{
		current = current->left;
		
	}
}
