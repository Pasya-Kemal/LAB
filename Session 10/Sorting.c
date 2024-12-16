#include <stdio.h>
#include <string.h>

/*
    strcmp(s1, s2)
    <0 1st char beda lower in s1 than s2
    0 sama
    >0 1st char beda higher in s1 than s2
 */
void selSortString(char name[][100], int start, int end){
    char kosongName[100];

    for(int i = start; i < end-1; i++){
        int min = i;
        for(int j = i + 1; j < end; j++){
            if(strcmp(name[j], name[min]) < 0){
                min = j;
            }
        }
        if(min != i){
            strcpy(kosongName, name[i]);
            strcpy(name[i], name[min]);
            strcpy(name[min], kosongName);
        }
    }
}

void selSort(int tag[100], int howMany, char name[100][100]){
    int kosong;
    char kosongNama[100];

    
    for(int i = 0; i < (howMany-1); i++){
        int max = i;

        for(int j = i+1; j < howMany; j++){
            if(tag[j] > tag[max]){
                max = j;
            }
        }
        if(max != i){
            kosong = tag[i];
            tag[i] = tag[max];
            tag[max] = kosong;

            strcpy(kosongNama, name[i]);
            strcpy(name[i], name[max]);
            strcpy(name[max], kosongNama);
        }
    }

    for(int i = 0; i < howMany; i++){
        if(i < howMany-1 && tag[i] == tag[i + 1]){
            int start = i;
            // find end of range w/ same tag
            while(i+1 < howMany && tag[i] == tag[i+1]){
                i++;
            }
            
            selSortString(name, start, i+1);
        }
    }
}

int main(){
    int testCase; scanf("%d", &testCase);

    char name[100][100]; int tag[100];
    for(int t = 0; t < testCase; t++){
        int howMany; scanf("%d", &howMany);

        for(int h = 0; h < howMany; h++){
            scanf("%[^#]#%d", name[h], &tag[h]);
        }
        
        selSort(tag, howMany, name);

        printf("Case #%d:", t+1);

        for(int h = 0; h < howMany; h++){
            printf("%s - %d", name[h], tag[h]);
        }
        printf("\n");
    }
    
    return 0;
}
