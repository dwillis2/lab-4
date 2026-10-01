#include <stdio.h>
#include <stdlib.h>
extern unsigned char ram[];
extern int get_sum(int array[], int count);
int main() {
    FILE *file = fopen("data.txt", "r");

    if (file == NULL) {
        return 1;
    }
    
    int count = 0;
    if (fscanf(file, "%d", &count) != 1){
        fclose(file);
        return 1;
    }
    int arr[count];
    for(int i = 0; i<count; i++){
         fscanf(file, "%d", &arr[i]);
    }

    int sum = get_sum(arr, count);
    printf("%d", sum);

    fclose(file);
    return 0;
}
