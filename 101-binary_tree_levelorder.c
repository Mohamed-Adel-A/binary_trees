#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal
 * @tree: the root node of the trثث
 * @func: is a pointer to a function to call for each node. 
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
{
	binary_tree_t *current_left, *current_right;

	if (tree == NULL || func == NULL)
		return;

	func(tree);
	binary_tree_levelorder(tree->left);
	binary_tree_levelorder(tree->right);
	
	while (current_left != NULL || current_right != NULL)
	{
		if (current_left != NULL)
			func(current_left);
		if (current_right != NULL)
			func(current_right);
	}
}
