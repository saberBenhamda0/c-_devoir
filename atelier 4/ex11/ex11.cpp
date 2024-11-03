#include<iostream> 
#include <vector>

using namespace std;

class Traitement {
    private:
    vector<int> numbers;

    public:
    void initialise() {
        int index = 15;
        int n;
        while(index>0){
            cout << "Entre the value for the vector : ";
            cin >> n;
            if (n != 0 && n % 2 == 0){
                numbers.push_back(n);
                index--;
            }
            else 
            cout << "entre a valid number pair and not null . " << endl;

        }

     }

    void show(int n){ 
        if ( n <= -1)   {
            return;
        }
        cout << " vector value is " << numbers[n] << endl;
        show(n-1);
    }


};

int main() { 
    Traitement t1;

    t1.initialise();
    t1.show(14);

    return 0;
}