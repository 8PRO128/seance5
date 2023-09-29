// Fichier salvect.cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> salaires;
    bool plus = true;

    while (plus) {
        double s;
        cout << "Veuillez entrer un salaire, " 
             << "0 pour quitter: ";
        cin >> s;

        if (s == 0) {
            plus = false;
        } else {
            salaires.push_back(s);
        }
    }

    double maximum = salaires[0];

    for (int i = 0; i < salaires.size(); i++) {
        if (salaires[i] > maximum) {
            maximum = salaires[i];
        }
    }

    for (int i = 0; i < salaires.size(); i++) {
        if (salaires[i] == maximum) {
            cout << "Maximum => " << salaires[i] << endl;
        }
    }

    return 0;
}