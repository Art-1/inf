#include <iostream>
#include <algorithm>
#include <climits>

struct Node {
    int value;
    Node* left;
    Node* right;
};

// Функция для создания нового узла дерева
Node* create_node(int value) {
    Node* node = new Node();
    node->value = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// Функция для обхода дерева в глубину и нахождения минимального значения среди листьев
void find_min_leaf(Node* node, int& min_leaf) {
    if (node == nullptr) {
        return;
    }
    if (node->left == nullptr && node->right == nullptr) {
        // Если узел является листом, то проверяем, является ли его значение минимальным
        min_leaf = std::min(min_leaf, node->value);
    }
    // Рекурсивно обходим левое и правое поддеревья
    find_min_leaf(node->left, min_leaf);
    find_min_leaf(node->right, min_leaf);
}

int main() {
    // Создаем дерево
    Node* root = create_node(5);
    root->left = create_node(3);
    root->right = create_node(7);
    root->left->left = create_node(1);
    root->left->right = create_node(4);
    root->right->left = create_node(6);
    root->right->right = create_node(9);

    // Находим минимальное значение среди листьев
    int min_leaf = INT_MAX;
    find_min_leaf(root, min_leaf);

    // Выводим результат
    std::cout << "Минимальное значение среди листьев: " << min_leaf << std::endl;

    return 0;
}