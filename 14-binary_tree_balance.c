#include "binary_trees.h"
/**
 * binary_tree_balance - measures balane of a tree
 * @tree:tree to be measured
 * Return:balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	left = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	return (left - right);
}
