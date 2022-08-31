#include "binary_trees.h"
/**
 * binary_tree_inorder - print numbers of tree inorder
 * @tree: pointer to root of tree
 * @func: function to print numbers of tree
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
