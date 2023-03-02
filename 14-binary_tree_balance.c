#include "binary_trees.h"

int binary_tree_heights(const binary_tree_t *tree);
/**
 * binary_tree_balance - measures balane of a tree
 * @tree:tree to be measured
 * Return:balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_heights(tree->left);
	right = binary_tree_heights(tree->right);

	return (left - right);
}

/**
 * binary_tree_heights - Calculates the height of a binary tree
 * @tree: Pointer to the root node of the tree to calculate the height
 *
 * Return: The height of the tree. If @tree is NULL, return 0.
 */
int binary_tree_heights(const binary_tree_t *tree)
{
	int left_height = 1, right_height = 1;

	if (tree == NULL)
		return (0);

	left_height += binary_tree_heights(tree->left);
	right_height += binary_tree_heights(tree->right);

	printf("Parent: %d, Left: %d, Right: %d\n", tree->n, left_height, right_height);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);

	return (0);
}
