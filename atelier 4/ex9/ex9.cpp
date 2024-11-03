#include<iostream> 

using namespace std;

struct element { 
    int n;
    element *next;
};

class Liste { 
    element *start;
    public:

    Liste() : start(nullptr) {}
    void ajouter(int n) {
        element *new_node = new element;
        new_node->n = n;
        new_node->next = start;
        start = new_node;
    }

    int supprimer() {
        element *tmp = start;
        start = tmp->next;
        int value = tmp->n;
        delete tmp;
        return value;
    }

    void afficher() {

        element *index = start;
        while (index != nullptr)
        {
            cout << "the value of a node is : " << start->n << endl;
            index = index->next;
        }

    };
};

int main() {
    Liste l1;

    l1.ajouter(5);
    l1.ajouter(10);
    l1.ajouter(15);
    l1.ajouter(20);

    l1.afficher();

    return 0;

}