#include <stdio.h>


int main() {
    
    long a1,b1,c1,d1;
    scanf("(%ld+%ld)x(%ld-%ld)\n", &a1, &b1, &c1, &d1);
    
    long a2,b2,c2,d2;
    scanf("(%ld+%ld)x(%ld-%ld)\n", &a2, &b2, &c2, &d2);
    
    long a3,b3,c3,d3;
    scanf("(%ld+%ld)x(%ld-%ld)", &a3, &b3, &c3, &d3);
    
    long jawaban1= (a1 + b1) * (c1-d1);
    long jawaban2= (a2 + b2) * (c2-d2);
    long jawaban3= (a3 + b3) * (c3-d3);
    
    printf("%ld %ld %ld\n", jawaban1, jawaban2, jawaban3);

    return 0;
}
