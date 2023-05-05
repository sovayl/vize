#include <iostream>

void vizesoru3(int liso[], int lisouzunluk, int liso2[], int liso2uzunluk) {
    int lisotoplam[10];

    for (int i = 0; i < lisouzunluk; i++) {
        lisotoplam[i] = liso[i];
    }
    for (int i = 0; i < liso2uzunluk; i++) {
        lisotoplam[i + lisouzunluk] = liso2[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (lisotoplam[i] > lisotoplam[j]) {
                int temp = lisotoplam[i];
                lisotoplam[i] = lisotoplam[j];
                lisotoplam[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", lisotoplam[i]);
    }
    printf("\n");
}
int main() {
    int liso[6]{ 10,90,40,70,50,60 };
    int liso2[4]{ 20,80,100,120 };

    vizesoru3(liso, 6, liso2, 4);

    return 0;
}