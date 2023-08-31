#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 *         If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *first_current, *second_current;

	if (first == NULL || second == NULL)
		return (NULL);

	first_current = (binary_tree_t *) first;
	while (first_current != NULL)
	{
		second_current = (binary_tree_t *) second;
		while (second_current != NULL)
		{
			if (first_current == second_current)
				return (first_current);
			second_current = second_current->parent;
		}

		first_current = first_current->parent;
	}

	return (NULL);
}
