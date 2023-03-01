#include "binary_trees.h"
/**
 * size - frees a tree
 * @tree:tree to be freed
 * Return: size of tree
 */
int size(const binary_tree_t *tree)
{
	int count = 1;

	if (tree == NULL)
		return (0);

	count += size(tree->left);
	count += size(tree->right);

	return (count);
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

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);

	return (0);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: tree to check
 * Return: 1 else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes_left, nodes_right, height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_heights(tree->left);
	height_r = binary_tree_heights(tree->right);

	nodes_left = size(tree->left);
	nodes_right = size(tree->right);

	if (height_l == height_r)
		if (nodes_left == nodes_right)
			return (1);

	return (0);
}
