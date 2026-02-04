#include <cassert>
#include "Structures/LinkedList.hpp"


void testLinkedListinsert() {
    LinkedList<int> list;
    list.insert(10);
    list.insert(20);
    list.insert(30);

    assert(list.size() == 3);
    assert(list.get(0) == 10);
    assert(list.get(1) == 20);
    assert(list.get(2) == 30);
}

int main() {
    testLinkedListinsert();
    return 0;
}