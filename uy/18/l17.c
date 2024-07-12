#include <stdio.h>

int aaa(int d) {
    if (d <= 1)
        return 0;
    	for (int i = 2; i * i <= d; i++) {
        	if (d % i == 0)
        	    return 0;
    }
    return 1;
}


int aa(int c) {
    c++;
    while (!aaa(c)) {
        c++;
    }
    return c;
}

int main() {
    int a;
    printf("\tSon kiritng: ");
    scanf("%d", &a);
    int b = aa(a);
    printf ("Keyingi tub soni: %d\n", b);
    return 0;
}