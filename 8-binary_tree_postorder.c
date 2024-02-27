#include "binary_trees.h"
/**
 * binary_tree_postorder - usage of post-order traversal
 * @tree: tree pointer
 * @func: func pointer to call node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
