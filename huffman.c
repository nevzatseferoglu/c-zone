#include <stdio.h>
#include <stdlib.h>

struct HuffmanTree
{
    struct HuffmanTree* left, *right;
    char letter;
    int freq;
};

struct HuffmanTree arr[] = {
    {NULL, NULL, 'Z', 2},
    {NULL, NULL, 'K', 7},
    {NULL, NULL, 'M', 24},
    {NULL, NULL, 'C', 32},
    {NULL, NULL, 'U', 37},
    {NULL, NULL, 'D', 42},
    {NULL, NULL, 'L', 42},
    {NULL, NULL, 'E', 120}
};

int size = 8;

struct HuffmanTree* min(struct HuffmanTree*, int*);
struct HuffmanTree* merge(struct HuffmanTree*, struct HuffmanTree*);
void append(struct HuffmanTree*, struct HuffmanTree*, int*);
void printArr(struct HuffmanTree*, int);
void inorder(struct HuffmanTree*);
void builtTree(struct HuffmanTree*, int*);

int main(void)
{
	builtTree(arr, &size);
	inorder(arr);
    return 0;
}

void builtTree(struct HuffmanTree* arr, int* size)
{
	struct HuffmanTree* left, *right;

	left = min(arr, size);
	right = min(arr, size);

	append(arr, merge(left, right), size);

	
	if(*size != 1)
		builtTree(arr, size);
}

struct HuffmanTree* min(struct HuffmanTree* arr, int* size)
{
	struct HuffmanTree* item;
	struct HuffmanTree* itemAddress = arr;
	int index = 0;

	for(int i=1 ; i < *size ; ++i)
		if(arr[i].freq < itemAddress->freq)
		{
			index = i;
			itemAddress = &arr[i];
		}

	item = (struct HuffmanTree*)malloc(sizeof(struct HuffmanTree));
	item->left = itemAddress->left;
	item->right = itemAddress->right;
	item->letter = itemAddress->letter;
	item->freq = itemAddress->freq;

	for(int i=index ; i < *size - 1 ; ++i)
		arr[i] = arr[i+1];
	--*size;

	return item;
}

void append(struct HuffmanTree* arr, struct HuffmanTree* node, int* size)
{
	arr[(*size)++] = *node;
}

void inorder(struct HuffmanTree* root)
{
	if(root == NULL)
		return;

	inorder(root->left);
	printf("%d\n", root->freq);
	inorder(root->right);
}

struct HuffmanTree* merge(struct HuffmanTree* left, struct HuffmanTree* right)
{
	struct HuffmanTree* temp = (struct HuffmanTree*)malloc(sizeof(struct HuffmanTree));

	temp->left = left;
	temp->right = right;
	temp->letter = '\0';
	temp->freq = left->freq + right->freq;

	return temp;
}