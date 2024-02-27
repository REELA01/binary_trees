#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: pearnt pointer
 * @value: the newnode value
 * Return: the newnode or null
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nn;

	nn = malloc(sizeof(binary_tree_t));
	if (nn == NULL)
		return (NULL);
	nn->n = value;
	nn->parent = parent;
	nn->left = NULL;
	nn->right = NULL;
	return (nn);
}
