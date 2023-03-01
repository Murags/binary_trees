#include "binary_trees.h"
/**
 * binary_tree_sibling - finds sibling of a node
 * @node: node to find sibling of
 * Return: pointer to sibling else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !node->parent)
		return (NULL);

	if (!node->parent->left || !node->parent->right)
		return (NULL);

	if (node->parent->left == node && node->parent->right)
		return (node->parent->right);
	else if (node->parent->left)
		return (node->parent->left);

	return (NULL);
}
