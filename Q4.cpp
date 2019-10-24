//Drew Heald EECS 349 HW2 P3 Q4

#include <stdio.h>
int main (int argc, const char* argv[]) {
    int output;
    int x = 7;
    int length = 100;
    int index = 0;
    int arr[100];
    for (index; index<length; index++){
    	arr[index] = index;
	}
    output = arr[x];
    output = arr[20];
    output = arr[output];
    printf("%d", output);
    return 0;
}
