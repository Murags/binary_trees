#include "binary_trees.h"
/**
 * binary_tree_leaves - frees a tree
 * @tree:tree to be freed
 * Return:number of leaf nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		count++;

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}
