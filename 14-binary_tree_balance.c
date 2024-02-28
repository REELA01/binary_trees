#include "binary_trees.h"
/**
 * binary_tree_height_2 - get tree height
 * @tree: tree pointer
 * Return: height or 0
*/
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t lef = 0, rig = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rig = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lef > rig) ? lef : rig);
	}
	return (0);
}
/**
 * binary_tree_balance - get balance factor binary tree
 * @tree: tree pointer
 * Return: balance or 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (binary_tree_height_2(tree->left) -
				binary_tree_height_2(tree->right));

	return (0);
}
