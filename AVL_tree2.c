#include <stdio.h>
#include <stdlib.h>

// Struktur node AVL tree
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    int height;
} Node;

// Fungsi untuk mendapatkan tinggi node
int height(Node *node) {
    if (node == NULL)
        return 0;
    return node->height;
}

// Fungsi untuk mendapatkan nilai maksimum
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Fungsi untuk membuat node baru
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1;
    return newNode;
}

// Rotasi kanan
Node* rightRotate(Node *y) {
    Node *x = y->left;
    Node *T2 = x->right;

    // Lakukan rotasi
    x->right = y;
    y->left = T2;

    // Update tinggi
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

// Rotasi kiri
Node* leftRotate(Node *x) {
    Node *y = x->right;
    Node *T2 = y->left;

    // Lakukan rotasi
    y->left = x;
    x->right = T2;

    // Update tinggi
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

// Mendapatkan balance factor
int getBalance(Node *node) {
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}

// Fungsi insert dengan balancing
Node* insert(Node* node, int data) {
    if (node == NULL)
        return createNode(data);

    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
    else
        return node;

    node->height = 1 + max(height(node->left), height(node->right));

    int balance = getBalance(node);

    // Left Left Case
    if (balance > 1 && data < node->left->data)
        return rightRotate(node);

    // Right Right Case
    if (balance < -1 && data > node->right->data)
        return leftRotate(node);

    // Left Right Case
    if (balance > 1 && data > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && data < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// Fungsi untuk mencetak tree secara preorder
void preOrder(Node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Fungsi untuk mencetak tree secara inorder
void inOrder(Node *root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

// Fungsi untuk mencetak tree secara postorder
void postOrder(Node *root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

// Fungsi untuk menampilkan menu
void displayMenu() {
    printf("=== Menu AVL Tree ===\n");
    printf("1. Tambah data\n");
    printf("2. Tampilkan Preorder\n");
    printf("3. Tampilkan Inorder\n");
    printf("4. Tampilkan Postorder\n");
    printf("5. Keluar\n");
    printf("Pilihan Anda: ");
}

int main() {
    Node *root = NULL;
    int choice, data;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Masukkan data yang akan ditambahkan: ");
                scanf("%d", &data);
                root = insert(root, data);
                printf("Data telah berhasil ditambahkan: %d\n", data);
                break;
            case 2:
                printf("Preorder traversal: ");
                preOrder(root);
                printf("\n");
                break;
            case 3:
                printf("Inorder traversal: ");
                inOrder(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder traversal: ");
                postOrder(root);
                printf("\n");
                break;
            case 5:
                printf("Keluar dari program\n");
                break;
            default:
                printf("Pilihan tidak valid\n");
        }
    } while (choice != 5);

    return 0;
}

