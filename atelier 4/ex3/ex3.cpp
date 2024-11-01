#include <iostream>
#include <string>

using namespace std;

class Persone { 
protected: 
    string first_name;
    string second_name;
    string birth_date;
public:
    Persone(string m_first_name, string m_second_name, string m_birth_date) : 
        first_name(m_first_name), second_name(m_second_name), birth_date(m_birth_date) {}

    virtual void Afficher() const {
        cout << "first name : " << first_name << " , second name : " << second_name 
             << " , birth date : " << birth_date << endl;
    }
};

class Employe : public Persone { 
protected: 
    int salaire; 
public:
    Employe(string m_first_name, string m_second_name, string m_birth_date, int m_salaire) :
        Persone(m_first_name, m_second_name, m_birth_date), salaire(m_salaire) {}

    void Afficher() const override { 
        cout << "first name : " << first_name << " , second name : " << second_name
             << " , birth date : " << birth_date << " , salary : " << salaire << endl;
    }
};

class Chef : public Employe {
protected: 
    string service;
public:
    Chef(string m_first_name, string m_second_name, string m_birth_date, int m_salaire, string m_service) :
        Employe(m_first_name, m_second_name, m_birth_date, m_salaire), service(m_service) {}

    void Afficher() const override { 
        cout << "first name : " << first_name << " , second name : " << second_name
             << " , birth date : " << birth_date << " , salary : " << salaire 
             << " , service : " << service << endl;
    }
};

class Director : public Chef { 
protected: 
    string societe;
public:
    Director(string m_first_name, string m_second_name, string m_birth_date, int m_salaire, string m_service, string m_societe) :
        Chef(m_first_name, m_second_name, m_birth_date, m_salaire, m_service), societe(m_societe) {}

    void Afficher() const override { 
        cout << "first name : " << first_name << " , second name : " << second_name
             << " , birth date : " << birth_date << " , salary : " << salaire 
             << " , service : " << service << " , societe : " << societe << endl;
    }
};

int main() { 
    Persone p1("Saber", "benhamda", "2004-12-18");
    Employe e1("Saber", "benhamda", "2004-12-18", 2000);
    Chef c1("Saber", "benhamda", "2004-12-18", 2000, "student");
    Director d1("Saber", "benhamda", "2004-12-18", 2000, "student", "FSTT");

    p1.Afficher();
    e1.Afficher();
    c1.Afficher();
    d1.Afficher();

    return 0;
}
