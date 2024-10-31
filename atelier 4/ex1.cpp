#include<iostream>
using namespace std;


class NumberComplexe { 
    private:
        float real;
        float imaginary;


    public:
    NumberComplexe (float arg_real = 0.00, float arg_imaginary = 0.00) :  real(arg_real), imaginary(arg_imaginary) {}
     NumberComplexe addition (const NumberComplexe &other) { // we used the & to pass objects by refrence not by value 
            return NumberComplexe(real + other.real, imaginary + other.imaginary );
    }

     NumberComplexe substract (const NumberComplexe &other) { 
        return NumberComplexe( real - other.real, imaginary - other.imaginary);
    }

     NumberComplexe multiply (const NumberComplexe &other) { 
        return NumberComplexe( (real * other.real) -  (imaginary * other.imaginary), (real * other.imaginary) + (imaginary * other.real));
    }

     NumberComplexe devision (const NumberComplexe &other) { 
        int bottom = other.real * other.real+ other.imaginary * other.imaginary;
        return NumberComplexe(((real * other.real) + (imaginary * other.imaginary)) / bottom,( -(real * other.imaginary) + (imaginary * other.real)) / bottom );
    }

     void equality (const NumberComplexe &other ) {
        if ( real == other.real && imaginary == other.imaginary)
          cout << " the two numbers are equal " << endl;
        else
          cout << " the two numbers are not equal " << endl;

    }

        void display () { 
        cout << " after operation the real part :  " << real ;
        cout << " and imaginary is : " << imaginary<< endl;
    };
};


int main() { 

    NumberComplexe n1(5, 10);
    NumberComplexe n2(15, 25);
    NumberComplexe result(0, 0);

    int choice=0;

    cout << " 1-addition" << endl;
    cout << " 2-absctraction" << endl;
    cout << " 3-multiply" << endl;
    cout << " 4-devision" << endl;
    cout << " 5-compare" << endl;
    cout << " 6-display" << endl;
    
    while (choice>6 || choice<1)
    {
    cout << "entre ur choice : "; 
    cin >> choice;
    }

    switch (choice) { 
        case 1 :
            result = n1.addition(n2);
            break;
        case 2 :
            result = n1.substract(n2);
            break;
        case 3 :
            result = n1.multiply(n2);
            break;
        case 4 :
            result = n1.devision(n2);
            break;
        case 5 :
            n1.equality(n2);
            break;
        case 6 :
            break;
    }
    result.display();

    return 0;
}
