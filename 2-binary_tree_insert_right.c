#include "binary_trees.h"

/**
 * binary_tree_insert_right - generates new rigt node
 * @parent: parent node
 * @value: noew node value
 * Return: new right nnode
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
		return (node);
	}
	else
	{
		parent->right = node;
		return (node);
	}
}
