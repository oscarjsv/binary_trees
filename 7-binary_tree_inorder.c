#include "binary_trees.h"
/**
 * binary_tree_inorder - prints tree inorder
 * @tree: input tree
 * @func: input function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
