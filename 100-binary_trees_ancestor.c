#include "binary_trees.h"
/**
 * depth - measure tree depth
 * @tree: tree to measure
 * Return: depth
 */
int depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
/**
 * binary_trees_ancestor - Finds the least common ancestor
 * @first: first node
 * @second: second node
 * Return: least common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	int first_depth, second_depth;

	if (!first || !second)
		return (NULL);

	first_depth = depth(first);
	second_depth = depth(second);

	if (first_depth > second_depth)
	{
		while (first_depth != second_depth)
		{
			if (first->parent == second)
				return (first->parent);
			first = first->parent;
			first_depth--;
		}
	}
	else if (second_depth > first_depth)
	{
		while (second_depth != first_depth)
		{
			if (second->parent == first)
				return (second->parent);
			second = second->parent;
			second_depth--;
		}
	}
	while (second && first)
	{
		if (second->parent == first->parent)
			return (first->parent);

		second = second->parent;
		first = first->parent;
	}

	return (NULL);
}
