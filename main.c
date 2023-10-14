#include <stdio.h>

int main() {
    char mamifero, quadrupede, carnivoro, herbivoro, ave, reptil, animalAquatico, animalSelvagem;

    printf("O animal é mamífero? (S/N): ");
    scanf(" %c", &mamifero);

    printf("O animal é quadrúpede? (S/N): ");
    scanf(" %c", &quadrupede);

    printf("O animal é carnívoro? (S/N): ");
    scanf(" %c", &carnivoro);

    printf("O animal é herbívoro? (S/N): ");
    scanf(" %c", &herbivoro);

    printf("O animal é uma ave? (S/N): ");
    scanf(" %c", &ave);

    printf("O animal é um réptil? (S/N): ");
    scanf(" %c", &reptil);

    printf("O animal é aquático? (S/N): ");
    scanf(" %c", &animalAquatico);

    printf("O animal é selvagem? (S/N): ");
    scanf(" %c", &animalSelvagem);

    if (mamifero == 'S') {
        if (quadrupede == 'S') {
            if (carnivoro == 'S') {
                printf("O animal é um leão.\n");
            } else if (herbivoro == 'S') {
                printf("O animal é um cavalo.\n");
            } else {
                printf("Não foi possível identificar o animal.\n");
            }
        } else {
            if (carnivoro == 'S') {
                printf("O animal é um morcego.\n");
            } else if (herbivoro == 'S') {
                printf("O animal é um macaco.\n");
            } else {
                printf("Não foi possível identificar o animal.\n");
            }
        }
    } else if (reptil == 'S') {
        if (animalAquatico == 'S') {
            printf("O animal é uma tartaruga.\n");
        } else {
            printf("O animal é uma cobra.\n");
        }
    } else if (ave == 'S') {
        if (animalAquatico == 'S') {
            printf("O animal é um pinguim.\n");
        } else {
            printf("O animal é uma avestruz.\n");
        }
    } else {
        printf("Não foi possível identificar o animal.\n");
    }

    return 0;
}
