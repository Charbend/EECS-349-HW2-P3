//Drew Heald EECS 349 HW2 P3 Q2

#include <stdio.h>
int main (int argc, const char* argv[]) {
    int limit = 7;
    int arr[] = {12, 15, 221, 3, 432, 54, 16, 67};
    int max = 0;
    int counter = 0;
    while (counter < limit) {
        if (arr[counter] > max) {
            max = arr[counter];
        }
        counter++;
    }
    printf("%i", max);
    return 0;
}
