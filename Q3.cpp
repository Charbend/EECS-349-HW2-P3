//Drew Heald EECS 349 HW2 P3 Q3

#include <stdio.h>
int main (int argc, const char* argv[]) {
    int x = 100;
    int max = 999;
    for (x; x < max; x++){
    	int a = (x / 100) * -100;
        int b = x / 10;
        int c = x - ((x / 10) * 4);
        if (a^3 + b^3 + x^3 == 0) {
            printf("%d", x);
        }
	}
    return 0;
}

