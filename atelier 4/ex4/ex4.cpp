#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Vecteur3d { 
    private: 
        float x;
        float y;
        float z;

    public:
    Vecteur3d(float m_x = 0, float m_y = 0, float m_z = 0) : x(m_x), y(m_y), z(m_z) {}
    void affichage () { 
        cout << "(" << x << ", " << y << ", " << z << ")" <<endl;
    }

    Vecteur3d somme(const Vecteur3d &other) {
        return Vecteur3d(other.x + x, other.y + y, other.z + z);
    }

    Vecteur3d product(const Vecteur3d &other) { 
        return Vecteur3d(x * other.x, y * other.y , z * other.z);
    }

    void coincide(const Vecteur3d &other) { 
        if(x != other.x || y != other.y || z != other.z)  
            cout << "the two vectors are different . " << endl;
        else{
            cout << "the vector are equal . " << endl;
        }
}

    float norme() {
        float term = pow(x, 2) +  pow(y, 2) + pow(z, 2);
        return pow(term, 0.5);
    }

    float normax(const Vecteur3d &other) {
        float term1 = pow(x, 2) +  pow(y, 2) + pow(z, 2);
        float term2 = pow(other.x, 2) +  pow(other.y, 2) + pow(other.z, 2);

        term1 = pow(term1, 0.5);
        term2 = pow(term2, 0.5);

        bool result = term1 > term2;

        if (result) { 
            cout << "the first vector is bigger" << endl;
            return term1; 
        }

        else if(!result) { 
        cout << "the second vector is bigger" << endl; 
            return term2; 
        }

    }
    
};

int main() {

    float x1, y1, z1, x2, y2, z2;
    
    cout << "entre x value for the first vector : ";
    cin >> x1;

    cout << "entre y value for the first vector : ";
    cin >> y1;

    cout << "entre z value for the first vector : ";
    cin >> z1;

    cout << "entre x value for the second vector : ";
    cin >> x2;

    cout << "entre y value for the second vector : ";
    cin >> y2;

    cout << "entre z value for the second vector : ";
    cin >> z2;
    
    Vecteur3d v1(x1, y1, z1);
    Vecteur3d v2(x2, y2, z2);

    // Displaying sum of vectors
    Vecteur3d sum = v1.somme(v2);
    cout << "Sum: ";
    sum.affichage();
    // Displaying product of vectors
    Vecteur3d prod = v1.product(v2);
    cout << "Product: ";
    prod.affichage();

    v1.coincide(v2);

    // Displaying norm of the first vector
    cout << "Norm of the first vector: " << v1.norme() << endl;

    // Comparing norms of the vectors
    v1.normax(v2);

}