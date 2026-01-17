#include <iostream>
#include <string>

template<typename T>
struct Node
{
    T data;
    Node* next;

    Node(const T& value) : data(value), next(nullptr) {}
};

template<typename T>
class List
{
private:
    Node<T>* head;

public:
    List() : head(nullptr) {}

    ~List()
    {
        clear();
    }

    void push_back(const T& value)
    {
        Node<T>* newNode = new Node<T>(value);

        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node<T>* current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }

    void pop_front()
    {
        if (head == nullptr) return;

        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }

    void clear()
    {
        while (head != nullptr)
        {
            pop_front();
        }
    }

    void print() const
    {
        Node<T>* current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr\n";
    }
};

int main()
{
    List<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.print();

    list.pop_front();
    list.print();

    List<std::string> listString;
    listString.push_back("Petro");
    listString.push_back("ROB");
    listString.push_back("NAME");
    listString.print();

    listString.pop_front();
    listString.print();
    return 0;
}
