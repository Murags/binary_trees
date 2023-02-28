#include "binary_trees.h"
/**
 * binary_tree_is_root- check if node is root
 * @node: node ot check
 * Return:1 success else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent != NULL)
		return (0);
	else
		return (1);
}
