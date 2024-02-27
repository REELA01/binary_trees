#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a node as the right-child pf pearnt
 * @parent: pearnt pointer
 * @value: newnode value
 * Return: newnode or null
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nn;

	if (parent == NULL)
		return (NULL);
	nn = binary_tree_node(parent, value);
	if (nn == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		nn->right = parent->right;
		parent->right->parent = nn;
	}
	parent->right = nn;
	return (nn);
}
