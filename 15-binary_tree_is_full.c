#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if tree is full or not
 * @tree: tree pointer
 * Return: 0 or 1 in sucsses
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lef = 0, rig = 0;

	if (tree != NULL)
	{
		if (tree->left && tree->right)
		{
			lef = binary_tree_is_full(tree->left);
			rig = binary_tree_is_full(tree->right);
			if (lef == 0 || rig == 0)
			{
				return (0);
			}
			return (1);
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
	else
		return (0);
}
