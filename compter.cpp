#include <stdio.h>

int compte_mots(const char *phrase) {
    int i = 0, compteur = 0;
    int dans_mot = 0; // Variable pour indiquer si on est actuellement dans un mot

    // Parcourir chaque caractère de la phrase
    while (phrase[i] != '\0') {
        if (phrase[i] != ' ' && dans_mot == 0) {
            // Si le caractère actuel n'est pas un espace et qu'on entre dans un mot
            dans_mot = 1; // Marquer le début d'un mot
            compteur++; // Incrémenter le compteur de mots
        } else if (phrase[i] == ' ') {
            // Si on rencontre un espace, marquer la fin du mot courant
            dans_mot = 0;
        }
        i++; // Passer au caractère suivant
    }

    return compteur; // Retourner le nombre total de mots
}

int main() {
    const char *texte = " je mange trois fois par jours "; // Chaîne de test
    printf(" Le Nombre de mots : %d\n", compte_mots(texte)); // Afficher le résultat
    return 0;
}