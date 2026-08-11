//
// Created by rafae on 04/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER01TWOSUM_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER01TWOSUM_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER01TWOSUM_H

#include <stdio.h>

int main(void) {

    int n, t, i, j;

    scanf("%d %d", &n, &t);

    int nums[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == t) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    return 0;
}