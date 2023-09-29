#include <iostream>
using namespace std;

class Personne {
  private:
    string nom;
    int age;
  
  public:
    Personne() {}
    Personne(string nom, int age) {
      this->nom = nom;
      this->age = age;
    }
    void afficher() const {
      cout << "Nom: " << nom << endl;
      cout << "Age: " << age << endl;
    }
};

class Voiture {
  private:
    int vitesse;
    int essence;
    Personne* conducteur;

  public:
    Voiture() {
      vitesse = 0;
      essence = 0;
    }

    void set_conducteur(Personne* conducteur) {
      this->conducteur = conducteur;
    }
  
    void afficher() const {
      cout << "Vitesse: " << vitesse << endl;
      cout << "Essence: " << essence << endl;
    }
};

int main() {
  Personne* personne = new Personne("Bob", 21);
  Voiture* voiture = new Voiture();
  voiture->set_conducteur(personne);

  delete personne;
  delete voiture;

  return 0;
}