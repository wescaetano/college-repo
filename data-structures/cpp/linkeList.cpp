#include <iostream>

using namespace std;

// Estrutura para representar um nó da lista
struct Node {
    int data;
    Node* next;

    // Construtor para facilitar a criação de nós
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Classe para representar a lista ligada
class LinkedList {
private:
    Node* head; // Ponteiro para o primeiro nó da lista

public:
    LinkedList() {
        head = nullptr;
    }

    // Método para inserir um elemento no final da lista
    void insert(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Método para exibir a lista
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Método para remover um elemento da lista
    void remove(int value) {
        if (head == nullptr) return;

        // Se o elemento a ser removido estiver no início
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr && current->data != value) {
            prev = current;
            current = current->next;
        }

        if (current == nullptr) return; // Elemento não encontrado

        prev->next = current->next;
        delete current;
    }

    // Destrutor para liberar a memória alocada dinamicamente
    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    
    cout << "Lista: ";
    list.display();

    list.remove(20);
    cout << "Após remover 20: ";
    list.display();

    return 0;
}
