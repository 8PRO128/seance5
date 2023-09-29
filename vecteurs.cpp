#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v, v1;     // vecteur vide
  vector<int> v2(5);     // vecteur de 5 éléments, tous initialisés à zéro
  vector<int> v3(5, 10); // vecteur de 5 éléments, tous initialisés à 10

  int index = 0;

  v1[index];    // Accès non sécurisé à l'élément à l'index
  v1.at(index); // Accès sécurisé à l'élément à l'index

  v1.push_back(10); // Ajoute une valeur à la fin
  v1.pop_back();    // Supprime la dernière valeur
  v1.size();        // Retourne le nombre d'éléments
  v1.empty();       // Vérifie si le vecteur est vide
  v1.clear();       // Efface tous les éléments

  int taille = v1.size();    // le method size() retourne la taille du vecteur
  bool estVide = v2.empty(); // le method empty() retourne true si le vecteur est vide

  for (int i = 0; i < v1.size(); i++)
    // faites quelque chose avec v1[i];

  v.push_back(20); // Ajoute une valeur à la fin
  v.pop_back();      // Supprime la dernière valeur
  v.size();          // Retourne le nombre d'éléments
  v.empty();         // Vérifie si le vecteur est vide
  v.clear();         // Efface tous les éléments

  return 0;
}
