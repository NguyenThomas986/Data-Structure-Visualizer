#include "LinkedList.hpp"

template <typename T>
void LinkedList<T>::insert(T v) {
    Node<T>* newNode = new Node<T>(val);
    if (!head) {
        head = newNode;
    } else {
        Node<T>* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    size++;
}

template <typename T>
T LinkedList<T>::get(int index) {
    Node<T>* temp = head;
    for (int i = 0; i < index; i++) {
        temp = temp->next;
    }
    return temp->data;
}

template <typename T>
int LinkedList<T>::getSize() {
    return size;
}

