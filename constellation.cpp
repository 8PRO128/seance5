#include <iostream>
#include <vector>
using namespace std;

class Etoile {
  private:
    string nom;
    int grandeur;

  public:
    Etoile();
    Etoile(string nom, int grandeur);
    void set_nom(string nom);
    void afficher() const;
};

Etoile::Etoile() {
  nom = "";
  grandeur = 0;
}

Etoile::Etoile(string nom, int grandeur) {
  this->nom = nom;
  this->grandeur = grandeur;
}

void Etoile::set_nom(string nom) {
  this->nom = nom;
}

void Etoile::afficher() const {
  cout << "Nom: " << nom << endl;
  cout << "Grandeur: " << grandeur << endl;
}

int main()
{
  vector<Etoile> constellation;
  constellation.push_back(Etoile("Sirius", 1));
  constellation.push_back(Etoile("Rigel", 2));

  constellation[0].set_nom("Sirius A");
  constellation[0].afficher();
  constellation[1].afficher();

  Etoile* etoile = new Etoile("Sirius", 1);

  (*etoile).afficher();

  delete etoile;

  return 0;
}
