#include "binary_trees.h"

/**
  * binary_tree_insert_left - A function that inserts a node as the left-child
  * of another node
  * @parent: A pointer to the node to insert the left-child in
  * @value: The value to store in the new node
  *
  * Return: A pointer to the created node, or NULL on failure or
  * if parent is NULL
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);

	if(!tmp)
		return (NULL);

	tmp->n = value;
	tmp->parent = parent;
	tmp->left = parent->left;
	parent->left = tmp;

	if (tmp->left)
		tmp->left->parent = tmp;

	return (tmp);
}
