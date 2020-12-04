#include "binary_trees.h"
/**
 * post_order_traversal - delete a tree
 * @root: input root
 */
void post_order_traversal(binary_tree_t *root)
{
	if (!root)
		return;

	if (root)
	{
		post_order_traversal(root->left);
		post_order_traversal(root->right);
	}
	free(root);
}
/**
 * binary_tree_delete - delete a tree
 * @tree: input root
 */
void binary_tree_delete(binary_tree_t *tree)
{
	post_order_traversal(tree);
}
