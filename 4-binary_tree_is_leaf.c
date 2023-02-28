#include "binary_trees.h"
/**
 * binary_tree_is_leaf- checks if node is leaf
 * @node: node to check
 * Return: 1 Success else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	else
		return (1);
}
