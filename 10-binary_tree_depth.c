#include "binary_trees.h"

/**
 * binary_tree_depth - counts the deep of a node
 * @tree: tree
 * Return: heihg of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int aux = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		aux++;
	}
	return (aux);
}
