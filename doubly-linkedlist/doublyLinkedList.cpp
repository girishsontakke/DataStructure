#include <iostream>
using namespace std;

template <typename T>
struct Node
{
    T data;
    Node<T> *next;
    Node<T> *prev;
    Node(T data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

template <typename T>
class DoublyLinkedList
{
    Node<T> *head;
    Node<T> *tail;
    int length;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    void append(T); // inserting data at the end of list
    void print();  //printing the list
    int size();
};

int main()
{
    DoublyLinkedList<int> list;
    list.append(1);
    list.append(2);
    list.print();
    return 0;
}

template<typename T>
DoublyLinkedList<T>::DoublyLinkedList():head(NULL), tail(NULL), length(0){};

template<typename T>
DoublyLinkedList<T>::~DoublyLinkedList(){
    delete head;
    delete tail;
}


template <typename T>
void DoublyLinkedList<T>::print()
{
    Node<T> *temp = DoublyLinkedList<T>::head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

template <typename T>
void DoublyLinkedList<T>::append(T data)
{
    Node<T> *temp = new Node<T>(data);
    if (head == NULL)
    {   // when list is empty
        DoublyLinkedList<T>::head = temp;
        DoublyLinkedList<T>::tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
    length++;
}


template<typename T>
int DoublyLinkedList<T>::size(){
    return length;
}