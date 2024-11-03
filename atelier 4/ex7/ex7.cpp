#include<iostream>

using namespace std;

class Pile_entier {
    private: 
        int *pile_array;
        int counter=0;
        int m_n;

    public:
        Pile_entier(int n): m_n(n) { 
            pile_array = new int[m_n];
        }

        void empiler(int p) { 
            pile_array[counter] = p;
            counter++;
        }

        int depiler(){
            if(counter >= 0) {
                counter--;
                int deleted_value = pile_array[counter];
                return deleted_value;
            }
            else if (counter == 0) { 
                cout << "the stack is empty" <<endl;
                return 0;
            }
        };
};

int main() { 

    Pile_entier p1(5);

    p1.empiler(5);
    p1.empiler(10);
    p1.empiler(15);
    p1.empiler(25);
    cout << "fisrt top item " << p1.depiler() << endl;
    cout << "second top item " << p1.depiler() << endl;
    cout << "third  top item " << p1.depiler() << endl;
    cout << "third  top item " << p1.depiler() << endl;

    return 0;

}