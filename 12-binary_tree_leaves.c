#include "binary_trees.h"
/**
 * binary_tree_leaves - get the nuber of leaves
 * @tree: tree pointer
 * Return: tree leaves number
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lev = 0;

	if (tree != NULL)
	{
		lev += (!tree->left && !tree->right) ? 1 : 0;
		lev += binary_tree_leaves(tree->left);
		lev += binary_tree_leaves(tree->right);
	}
	return (lev);
}
