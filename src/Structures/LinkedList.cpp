#include "LinkedList.hpp"

/*
* @brief Inserts a value at the end of the linked list.
*
* @tparam T Type of elements stored in the linked list.
* @param val The value to insert.
*
* Description:
* This function creates a new node containing the given value
* and inserts it at the **end** of the linked list. If the list
* is empty, the new node becomes the head.
*
* Best Case Time Complexity: O(1) (if the list is empty)
* Worse Case Time Complexity: O(n)
* Average Time Complexity: O(n)
* Space Complexity: O(1)
*/
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


/*
@brief Retrieves the value at a specified index in the linked list.
@tparam T Type of elements stored in the linked list.
@param index The index of the element to retrieve.
@returns The value at the specified index.

Description:
This function traverses the linked list to find and return the value
at the given index. It assumes that the index is valid (0 <= index < size)

Best Case Time Complexity: O(1) (if index is 0)
Worse Case Time Complexity: O(n)
Average Time Complexity: O(n)
Space Complexity: O(1)

*/
template <typename T>
T LinkedList<T>::get(int index) {
    Node<T>* temp = head;
    for (int i = 0; i < index; i++) {
        temp = temp->next;
    }
    return temp->data;
}

/*
@brief Returns the current size of the linked list.
@tparam T Type of elements stored in the linked list.
@returns The number of elements in the linked list.

Description:
This function simply returns the size member variable,
which keeps track of the number of elements in the linked list.

Best Case Time Complexity: O(1)
Worse Case Time Complexity: O(1)
Average Time Complexity: O(1)
Space Complexity: O(1)

*/
template <typename T>
int LinkedList<T>::getSize() {
    return size;
}

