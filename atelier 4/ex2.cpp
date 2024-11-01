#include<iostream>
#include<string>

using namespace std;


class Animale { 
    protected:
        string name;
        int age; 

    public: 
        // this method only for constroctor void set_value(string name, int age) : m_name(name), m_age(age) {};
        void set_value(string name, int age){
            this->age = age;
            this->name = name; 
        };
};


class Zebra: public Animale {
    public: 
        void display_info(){ 
            cout << "name is : " << name << endl;
            cout << "age is : " << age << endl;
            cout << "origine place is congo " << endl;
        }
};

class Dolphin: public Animale {
    public: 
        void display_info(){ 
            cout << "name is : " << name << endl;
            cout << "age is : " << age << endl;
            cout << "origine place is south africa " << endl;
        }
};

int main() { 
    Dolphin d1;
    Zebra z1; 

    d1.set_value("rocky", 20);
    z1.set_value("sasha", 5);

    d1.display_info();
    z1.display_info();

    return 0;
}