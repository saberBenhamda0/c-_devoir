#include<iostream>

using namespace std;

class Voiture { 
    public:
        string marque;
        string model;
        int annee;
        float kilometrage;
        float vitesse;

    Voiture() { 
        marque = "";
        model = "";
        annee = 0;
        kilometrage = 0.0;
        vitesse = 0.0;
    }

    Voiture(string m_marque, string m_model, int m_annee, float m_kilometrage, float m_vitesse) : marque(m_marque), model(m_model),  annee(m_annee),  kilometrage(m_kilometrage),  vitesse(m_vitesse) 
    {}

    void accelerer(float valeur) { 
        this->vitesse += valeur;
        cout << "the new vitesse is : " << vitesse << endl;
    }

    void freiner(float valeur) { 
        if (this->vitesse > valeur) { 
            vitesse -= valeur;
        }

        else 
            vitesse=0;

        cout << "the new vitesse is : " << vitesse << endl;

    }

    void afficherInfo() {
        cout << " marque is : " << this->marque << endl;
        cout << " model is : " << this->model << endl;
        cout << " annee is : " << this->annee << endl;
        cout << " kilometrage is : " << this->kilometrage << endl;
        cout << " vitesse is : " << this->vitesse << endl;

    }

    void avancer(float distance) {
        kilometrage += distance;
        cout << " the new kilometrage is : " << kilometrage << endl; 
    }

    ~Voiture() { 
        cout << "the Voiture instance has been destroyed" << endl;
    }

};

int main() { 

    Voiture car("honda", "sanya" , 2010, 1500, 35);
    car.afficherInfo();
    car.accelerer(10);
    car.freiner(20);
    car.avancer(100);

}