#include <stdio.h>

#include <stdlib.h>

struct Node // this is structure for bnary search tree

{

	struct Node* lchild;

	int data;

	struct Node* rchild;

}*root = NULL;

void Insert(int key) // key value to be inserted

{

	struct Node* t = root; // set a temp variable pointer to the root

	struct Node* r=t, * p; // r will follow t // p for creating a new node

	if (root == NULL)

	{

		p = (struct Node*)malloc(sizeof(struct Node)); // creating a new node in heap memory for inserting new data

		p->data = key; // assign the p's data part with key value

		p->lchild = p->rchild = NULL; // set left and right as null initilally

		root = p; // and again root should point on new node

		return;

	}

	// now take a loop so that we can repeat the steps upto t becomes null so

	while (t != NULL)

	{

		r = t;

		if (key < t->data)

			t = t->lchild; // move t upon left child

		else if (key > t->data)

			t = t->rchild; // move t upon right child

		else

			return;
