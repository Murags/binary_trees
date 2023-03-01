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
 * full - frees a tree
 * @tree:tree to be freed
 * Return:number of leaf nodes
 */
int full(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
		count++;

	count += full(tree->left);
	count += full(tree->right);

	return (count);
}
/**
 * leaves - frees a tree
 * @tree:tree to be freed
 * Return:number of leaf nodes
 */
int leaves(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		count++;

	count += leaves(tree->left);
	count += leaves(tree->right);

	return (count);
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree:tree to measure
 * Return: 1 if true else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int total, leaf, fulls;

	if (tree == NULL)
		return (0);

	total = size(tree);
	leaf = leaves(tree);
	fulls = full(tree);

	if (leaf + fulls == total)
		return (1);
	else
		return (0);

	return (0);
}
