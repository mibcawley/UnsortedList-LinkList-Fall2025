

template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    head = nullptr;
    currPos = nullptr;
}

template<class T>
void UnsortedList<T>::MakeEmpty() {
    length = 0;
    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

template<class T>
bool UnsortedList<T>::IsFull() const {
    try
    {
        Node *testNode = new Node(); // try to make a test node
        delete testNode; // we're good... delete test node
    } catch (std::bad_alloc &e)
    {
        return true;
    }
    return false;
}

template<class T>
int UnsortedList<T>::GetLength() const {
    return length;
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
    insertedNode->next = nullptr;

    head = insertedNode;
    ++length;

}

template<class T>
void UnsortedList<T>::DeleteItem(T item) {
    Node* currN = head;
    Node* prevN = nullptr; // no previous

    while (currN != nullptr)
    {
        if (currN->value == item)
        {
            if (prevN != nullptr) // not beginning
            {
                // handle middle case
                prevN->next = currN->next;
            } else
            {
                head = currN->next;
            }
            delete currN;
            --length;
            return;
        }
        prevN = currN;
        currN = currN->next;
    }
}

template<class T>
void UnsortedList<T>::ResetIterator() {
    currPos = head;
}

template<class T>
T UnsortedList<T>::GetNextItem() {
    T currVal = currPos->value;
    currPos = currPos->next;
    return T();
}
