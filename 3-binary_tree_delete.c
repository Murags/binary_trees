#include "binary_trees.h"
/**
 * binary_tree_delete - frees a tree
 * @tree:tree to be freed
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left || tree->right)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
	free(tree);
}
