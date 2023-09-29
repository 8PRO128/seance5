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

void foo()
{
  Etoile etoile;
  Etoile etoile1 = Etoile("Sirius", 1);
  //...
}

void foo2(Etoile etoile)
{
  etoile.afficher();
}

void foo3() {
  //La variable etoile (un objet de Etoile) 
  //est sur la pile.
  Etoile etoile; 

  //Le pointeur etoile est sur la pile, 
  //mais il ne pointe sur rien de valide 
  //tant qu'il n'est pas initialisé.
  Etoile* etoile; 

  // Le pointeur etoile est sur la pile 
  //et pointe vers une instance de Etoile 
  //qui est sur le tas (heap).
  Etoile* etoile = new Etoile(); 
}

int main()
{
  Etoile* etoile = new Etoile("Sirius", 1);

  foo2(*etoile);

  (*etoile).afficher();
  etoile->afficher();

  if (etoile != NULL) 
    etoile->afficher();

  delete etoile;
}
