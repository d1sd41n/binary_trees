#include "binary_trees.h"

/**
 * binary_tree_node - generates new node
 * @parent: parent node
 * @value: noew node value
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->right = NULL;
	node->left = NULL;

	return (node);
}
