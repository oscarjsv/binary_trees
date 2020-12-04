#include "binary_trees.h"
/**
 * binary_tree_postorder - prints tree postorder
 * @tree: input tree
 * @func: input function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	if (tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
