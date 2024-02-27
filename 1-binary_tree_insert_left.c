#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as a left-child pf pearnt
 * @parent: pearnt pointer
 * @value: newnode nalue
 * Return: newnode in left or null
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nn;

	if (parent == NULL)
		return (NULL);

	nn = binary_tree_node(parent, value);
	if (nn == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		nn->left = parent->left;
		parent->left->parent = nn;
	}
	parent->left = nn;
	return (nn);
}
