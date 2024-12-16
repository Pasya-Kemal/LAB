#include <stdio.h>
#include <string.h>

void selSortString(char name[101][101], int testCase){
    char kosong[101];

    for(int i = 0; i < testCase-1; i++){
        int min = i;

        for(int j = i + 1; j < testCase; j++){
            if(strcmp(name[j], name[min]) < 0){
                min = j;
            }
        }
        if(min != i){
            strcpy(kosong, name[i]);
            strcpy(name[i], name[min]);
            strcpy(name[min], kosong);
        }
    }
}

int main(){
    int testCase; scanf("%d", &testCase); getchar();

    char name[testCase][101];
    for(int t = 0; t < testCase; t++){ 
        scanf("%s", name[t]);
    }
    
    selSortString(name, testCase);

    for(int t = 0; t < testCase; t++){ 
        printf("%s\n", name[t]);
    }
    return 0;
}