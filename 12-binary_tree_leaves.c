#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves
 * @tree: tree
 * Return: total leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
