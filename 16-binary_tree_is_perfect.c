#include "binary_trees.h"
/**
 * tree_check - check the req of tree tp be perfect
 * @tree: tree pointer
 * Return: 0 or 1 in success
*/
int tree_check(const binary_tree_t *tree)
{
	int lef = 0, rig = 0;

	if (tree->left && tree->right)
	{
		lef = 1 + tree_check(tree->left);
		rig = 1 + tree_check(tree->right);
		if (rig == lef && rig != 0 && lef != 0)
			return (rig);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - check if tree preffect or not
 * @tree: tree pointer
 * Return: 0 or 1 in success
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int re = 0;

	if (tree != NULL)
	{
		re = tree_check(tree);
		if (re != 0)
		{
			return (1);
		}
		return (0);
	}
	else
		return (0);
}
