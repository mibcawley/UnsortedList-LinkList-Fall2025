

template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    head = nullptr;
    currPos = nullptr;
}

template<class T>
void UnsortedList<T>::MakeEmpty() {

}

template<class T>
bool UnsortedList<T>::IsFull() const {
    return false;
}

template<class T>
int UnsortedList<T>::GetLength() const {
    return 0;
}

template<class T>
bool UnsortedList<T>::Contains(T someItem) {

    Node* currN = head;

    while (currN != nullptr)
    {
        if (currN->value == someItem)
        {
            return true;
        }
        currN = currN->next;
    }


    return false;
}

template<class T>
void UnsortedList<T>::AddItem(T item) {
    // Make node
    // link node to first node in list
    // link head to new node

    Node *insertedNode = new Node;
    insertedNode->value = item;
    insertedNode->next - nullptr;

    head = insertedNode;
    ++length;

}

template<class T>
void UnsortedList<T>::DeleteItem(T item) {
    Node* currN = head;

    while (currN != nullptr)
    {
        if (currN->value == someItem)
        {

        }
        currN = currN->next;
    }
}

template<class T>
void UnsortedList<T>::ResetIterator() {

}

template<class T>
T UnsortedList<T>::GetNextItem() {
    return T();
}
