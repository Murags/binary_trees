#include "binary_trees.h"
/**
 * binary_tree_uncle - check uncle of a node
 * @node: node to check uncle for
 * Return: uncle else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (!node->parent->parent->left || !node->parent->parent->right)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);

	return (NULL);
}
