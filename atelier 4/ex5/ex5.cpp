#include<iostream>

using namespace std;

class Test {
    private:
    static int number_of_call;
    public:
        int call() { 
            return number_of_call++;
        }
};

int Test::number_of_call = 1;

int main(){ 

    Test t1, t2, t3, t4, t5;


    cout << " "  << endl << t1.call();
    cout << " "  << endl << t2.call();
    cout << " "  << endl << t3.call();
    cout << " "  << endl << t4.call();
    cout << " "  << endl << t5.call();

    return 0;
}