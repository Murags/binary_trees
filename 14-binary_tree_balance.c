#include "binary_trees.h"
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

    if (tree->left)
        left++;

    if (tree->right)
        right++;

    left += binary_tree_balance(tree->left);
    right += binary_tree_balance(tree->right);

    return (left - right);
}