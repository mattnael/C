#include <stdio.h>


void adjust_time(int *hh, int *mm) {
    *hh -= 1; 
    if (*hh < 0) {
        *hh += 24; 
    }
}

int main() {
    char course_code[6][11]; 
    int start_hh[5], start_mm[5], end_hh[5], end_mm[5]; 
    for (int i = 0; i < 5; i++) { 
        scanf("%s %d:%d-%d:%d", course_code[i], &start_hh[i], &start_mm[i], &end_hh[i], &end_mm[i]); 
        adjust_time(&start_hh[i], &start_mm[i]);
        adjust_time(&end_hh[i], &end_mm[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %02d:%02d-%02d:%02d\n", course_code[i], start_hh[i], start_mm[i], end_hh[i], end_mm[i]);
    }

    return 0;
}

