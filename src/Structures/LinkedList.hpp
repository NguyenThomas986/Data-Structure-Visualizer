#pragma once
#include "Node.cpp"

template <typename T>
class LinkedList {
    private:
        Node<T>* head;
        int size;
    public:
        LinkedList() : head(nullptr), size(0) {}
        void insert(T val);
        T get(int index);
        int getSize();
};