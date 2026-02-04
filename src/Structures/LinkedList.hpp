#pragma once
#include "Node.cpp"

/*
* @class LinkedList
* @brief A singly linked list data structure.
* @tparam T Type of elements stored in the linked list.
* 
* Description:
* This class implements a basic singly linked list with functionalities
* to insert elements, retrieve elements by index, and get the size of the list.
* 
* Best Case Time Complexity: O(1) for insert and getSize, O(1) for get (if index is 0)
* Worse Case Time Complexity: O(n) for insert and get
* Average Time Complexity: O(n) for insert and get
* Space Complexity: O(n) for storing n elements
* 
* Last modified: 2/3/2026 Thomas Nguyen
*
*/
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