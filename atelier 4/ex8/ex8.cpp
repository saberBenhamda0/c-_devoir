#include<iostream>

using namespace std; 

class Ficher { 
    private:
        int size;
        int *file_place;
        int *index;

    public:
    Ficher(int size, int *file_place) : size(size), file_place(*file_place) {}


    void Creation() {
        file_place = new int[size];
    }

    void Remplit(){
        int random;
        while (file_place != nullptr)
        {
            cout << " Entre a radnom integer : ";
            cin >> random;
            *file_place = random;
            file_place--; 
        }
    }

    void Afficher() { 
        while (file_place != nullptr)
        {
            cout << " Entre a radnom integer : " << *file_place;
            file_place++;
        }
    }
};

int main() {
    int size=10;
    int *start;
    Ficher f1(size, *start);
    f1.Creation();
    f1.Remplit();
    f1.Afficher();

    return 0;


}