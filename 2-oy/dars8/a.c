#include <stdio.h>
#include <math.h>

int main () {

        for (int son = 2; son <= 100000; son++) {
                int count = 0;

                for (int boluvchi = 2; boluvchi <= sqrt(son); boluvchi++) {
                        if (son % boluvchi == 0) {
                                count++;
                        }
                }

                if (count == 0) {
                        printf("%d\n", son);
                }
        }

        return 0;
}