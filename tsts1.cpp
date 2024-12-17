#include <iostream>
#include <cmath>
using namespace std;

// Fonction pour calculer la racine carrée
void racine(int nb) {
    if (nb > 0) {
        int racine = sqrt(nb);
        cout << "La racine carrée de " << nb << " est " << racine << endl;
    } else if (nb < 0) {
        cout << "Vous ne pouvez pas entrer un nombre négatif" << endl;
    } else {
        cout << "Terminé" << endl;
    }
}

int main() {
    int nb = 0;

    cout << "Entrez le nombre :" << endl;
    cin >> nb; // Récupérer l'entrée de l'utilisateur
    racine(nb); // Appeler la fonction pour calculer la racine

    return 0; // Retourner 0 pour indiquer que le programme s'est terminé avec succès
}
