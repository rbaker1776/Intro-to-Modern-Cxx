#ifndef LIST_H_5ACEB3D507736B4D
#define LIST_H_5ACEB3D507736B4D

#include <iostream>


template<class T>
class List {
    struct Node {
        T data;
        Node* next;
        Node(T val): data(val), next(nullptr) {}
    };
    Node* head;

public:
    List(): head(nullptr) {}
    ~List() {
        for (Node* cursor = head; cursor != nullptr; ) {
            Node* next { cursor->next };
            delete cursor;
            cursor = next;
        }
    }

    void insert(T val) {
        Node* node { new Node(val) };
        node->next = head;
        head = node;
    }

    friend std::ostream& operator<<
    (std::ostream& os, const List<T>& l) {
        for (typename List<T>::Node* cursor = l.head;
             cursor != nullptr; cursor = cursor->next) {
            os << cursor->data << " -> ";
        }
        os << "nullptr" << std::endl;
        return os;
    }
};


#endif // LIST_H_5ACEB3D507736B4D
