#inlclude <stdio.h>

//FORMA MAIS COMPLEXA UTILIZANDO VETORES//
int main() {
    int v[3], i, j, temp;

    printf("Digite o primeiro valor inteiro:\n");
     scanf ("%d", &v[0]);
    printf("Digite o segundo valor inteiro:\n");
     scanf ("%d", &v[1]);
    printf("Digite o terceiro valor inteiro:\n");
     scanf ("%d", &v[2]);

    // Bubble sort (ordem decrescente)
    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (v[i] < v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    printf("Os valores em ordem decrescente sao: %d %d %d\n",
           v[0], v[1], v[2]);

    return 0;
}
