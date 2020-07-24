#include "binary_trees.h"

/**
 * binary_tree_size - counts the nodes
 * @tree: tree
 * Return: total of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (1 + left + right);
}