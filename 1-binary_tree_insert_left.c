#include "binary_trees.h"
/**
 * binary_tree_insert_left - indert node at left position
 * @parent: parent of new node
 * @value: value of new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (!parent)
		return (NULL);

	if (parent->left == NULL)
	{
		new = binary_tree_node(parent, value);
		if (new == NULL)
			return (NULL);
		parent->left = new;
	}
	else
	{
		temp = parent->left;
		new = binary_tree_node(parent, value);

		if (new == NULL)
			return (NULL);

		parent->left = new;
		new->left = temp;
		temp->parent = new;
	}
	return (new);
}
