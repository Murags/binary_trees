#include "binary_trees.h"
/**
 * binary_tree_insert_right - indert node at right position
 * @parent: parent of new node
 * @value: value of new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (!parent)
		return (NULL);

	if (parent->right == NULL)
	{
		new = binary_tree_node(parent->right, value);
		if (new == NULL)
			return (NULL);
		parent->right = new;
	}
	else
	{
		temp = parent->right;
		new = binary_tree_node(parent, value);

		if (new == NULL)
			return (NULL);

		new->right = temp;
		temp->parent = new;
		temp->right = NULL;
		parent->right = new;
	}
	return (new);
}
