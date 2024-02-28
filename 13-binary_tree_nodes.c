#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with childs
 * @tree: tree pointer
 * Return: node count or 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nod = 0;

	if (tree != NULL)
	{
		nod += (tree->left || tree->right) ? 1 : 0;
		nod += binary_tree_nodes(tree->left);
		nod += binary_tree_nodes(tree->right);
	}
	return (nod);
}
