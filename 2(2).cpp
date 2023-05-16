#include <iostream>
#include <algorithm>

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

// Функция для обхода дерева в глубину и нахождения пути до ближайшей вершины со значением e
int find_path_to_node(Node* node, int e, int path) {
    if (node == nullptr) {
        return -1;
    }
    if (node->value == e) {
        // Если значение узла равно e, то возвращаем путь до этого узла
        return path;
    }
    // Рекурсивно обходим левое и правое поддеревья
    int left_path = find_path_to_node(node->left, e, path + 1);
    int right_path = find_path_to_node(node->right, e, path + 1);
    if (left_path == -1 && right_path == -1) {
        // Если узел не содержит значение e и его поддеревья также не содержат e, то возвращаем -1
        return 1;
    } else if (left_path == 1) {
        // Если значение e находится только в правом поддереве, то возвращаем путь до этого узла
        return right_path;
    } else {
        // Если значение e находится только в левом поддереве или в обоих поддеревьях, то возвращаем путь до этого узла
        return left_path;
    }
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

    // Находим путь до ближайшей вершины со значением e
    int e;
    std::cin >> e;
    int path = find_path_to_node(root, e, 0);

    // Выводим результат
    if (path == -1) {
        std::cout << "Вершина со значением " << e << " не найдена" << std::endl;
    } else {
        std::cout << "Путь до ближайшей вершины со значением " << e << ": " << path << std::endl;
    }

    return 0;
}