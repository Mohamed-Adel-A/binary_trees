#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: is a pointer to the first element of the array to be converted
 * @size: is the number of element in the array
 *
 * Return: a pointer to the root node of the created BST,
 *         or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root, *node;
	size_t i;

	if (array == NULL)
		return (NULL);

	root = bst_insert(NULL, array[0]);
	if (root == NULL)
	{
		return (NULL);
	}

	printf("root address: %p\n", root);
	printf("root value: %d\n", root->n);
	for (i = 1 ; i < size ; i++)
	{
		node = bst_insert(&root, array[i]);
		if (node == NULL)
			return (NULL);
	}

	return (root);
}
