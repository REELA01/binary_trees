#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if node is a leaf of a binary tree
 * @node: the node to be checked
 * Return: if node is leaf 1
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
