//
// Created by rafae on 04/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER02REMOVEDUPLICATES_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER02REMOVEDUPLICATES_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER02REMOVEDUPLICATES_H

include <stdio.h>

#define MAX 30005

int main(void) {

    int n, i, k;

    scanf("%d", &n);

    int nums[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    /* o primeiro elemento sempre e' unico, entao k comeca em 1 */
    k = 1;
    for (i = 1; i < n; i++) {
        /* se o atual e' diferente do ultimo unico gravado, grava ele */
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
        /* se for igual, simplesmente ignora (nao avanca k) */
    }

    /* saida: quantidade de unicos e depois os k primeiros elementos */
    printf("%d\n", k);
    for (i = 0; i < k; i++) {
        printf("%d", nums[i]);
        if (i < k - 1) printf(" ");
    }
    printf("\n");

    return 0;
}