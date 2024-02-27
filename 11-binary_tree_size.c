#include "binary_trees.h"
/**
 * binary_tree_size - get the size of binary tree
 * @tree: tree pointer
 * Return: tree size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, lef = 0, rig = 0;

	if (tree != NULL)
	{
		lef = binary_tree_size(tree->left);
		rig = binary_tree_size(tree->right);
		size = rig + lef + 1;
	}
	return (size);
}
