#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a binary tree node
 * @parent: A pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));

	if (tmp != NULL)
	{
		tmp->parent = parent;
		tmp->left = tmp->right = NULL;
		tmp->n = value;
	}

	return (tmp);
}
