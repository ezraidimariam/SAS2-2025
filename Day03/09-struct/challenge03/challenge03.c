#include <stdio.h>


struct Rectangle {
    int longueur;
    int largeur;
};


int calculAire(struct Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {
    struct Rectangle rect;

    rect.longueur = 10;
    rect.largeur = 5;


    int aire = calculAire(rect);
    printf("L'aire du rectangle est : %d\n", aire);

    return 0;
}

