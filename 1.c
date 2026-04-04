#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for menu category tree node
typedef struct Node {
    char name[50];
    struct Node *child;
    struct Node *sibling;
} Node;

// Create a new node
Node* createNode(char name[]) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->name, name);
    newNode->child = NULL;
    newNode->sibling = NULL;
    return newNode;
}

// Add category (as child or sibling)
Node* addCategory(Node* root, char parentName[], char newName[]) {
    if (root == NULL) {
        printf("Creating root category: %s\n", newName);
        return createNode(newName);
    }

    if (strcmp(root->name, parentName) == 0) {
        Node* temp = root->child;

        if (temp == NULL) {
            root->child = createNode(newName);
        } else {
            while (temp->sibling != NULL)
                temp = temp->sibling;
            temp->sibling = createNode(newName);
        }
        return root;
    }

    root->child = addCategory(root->child, parentName, newName);
    root->sibling = addCategory(root->sibling, parentName, newName);

    return root;
}

// Display tree (indentation style)
void display(Node* root, int level) {
    if (root == NULL) return;

    for (int i = 0; i < level; i++)
        printf("  ");

    printf("- %s\n", root->name);

    display(root->child, level + 1);
    display(root->sibling, level);
}

// Search category
Node* search(Node* root, char name[]) {
    if (root == NULL) return NULL;

    if (strcmp(root->name, name) == 0)
        return root;

    Node* found = search(root->child, name);
    if (found != NULL) return found;

    return search(root->sibling, name);
}

// Update category name
void update(Node* root, char oldName[], char newName[]) {
    Node* node = search(root, oldName);

    if (node != NULL) {
        strcpy(node->name, newName);
        printf("Updated successfully!\n");
    } else {
        printf("Category not found!\n");
    }
}

// Delete node helper (delete subtree)
void deleteTree(Node* root) {
    if (root == NULL) return;

    deleteTree(root->child);
    deleteTree(root->sibling);
    free(root);
}

// Delete category
Node* deleteCategory(Node* root, char name[]) {
    if (root == NULL) return NULL;

    if (strcmp(root->name, name) == 0) {
        deleteTree(root);
        return NULL;
    }

    Node *prev = NULL, *curr = root->child;

    while (curr != NULL) {
        if (strcmp(curr->name, name) == 0) {
            if (prev == NULL)
                root->child = curr->sibling;
            else
                prev->sibling = curr->sibling;

            curr->sibling = NULL;
            deleteTree(curr);
            printf("Deleted successfully!\n");
            return root;
        }
        prev = curr;
        curr = curr->sibling;
    }

    root->child = deleteCategory(root->child, name);
    root->sibling = deleteCategory(root->sibling, name);

    return root;
}

// MAIN MENU
int main() {
    Node* root = NULL;
    int choice;
    char parent[50], name[50], newName[50];

    while (1) {
        printf("\n===== Restaurant Menu Management =====\n");
        printf("1. Add Category\n");
        printf("2. Delete Category\n");
        printf("3. Update Category\n");
        printf("4. Search Category\n");
        printf("5. Display Menu Tree\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter category name: ");
                scanf("%s", name);

                if (root == NULL) {
                    root = createNode(name);
                } else {
                    printf("Enter parent category: ");
                    scanf("%s", parent);
                    root = addCategory(root, parent, name);
                }
                break;

            case 2:
                printf("Enter category to delete: ");
                scanf("%s", name);
                root = deleteCategory(root, name);
                break;

            case 3:
                printf("Enter old name: ");
                scanf("%s", name);
                printf("Enter new name: ");
                scanf("%s", newName);
                update(root, name, newName);
                break;

            case 4:
                printf("Enter category to search: ");
                scanf("%s", name);
                if (search(root, name))
                    printf("Category found!\n");
                else
                    printf("Not found!\n");
                break;

            case 5:
                printf("\nMenu Structure:\n");
                display(root, 0);
                break;

            case 6:
                printf("Exiting...\n");
                deleteTree(root);
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}