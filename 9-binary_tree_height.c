#include "binary_trees.h"
/**
 * binary_tree_height - get tree height
 * @tree: tree pointer
 * Return: height or 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t lef = 0, rig = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rig = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lef > rig) ? lef : rig);
	}
	return (0);
}
