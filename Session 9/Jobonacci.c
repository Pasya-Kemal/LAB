#include <stdio.h>

int main(){

    int nacci[26];
    nacci[0] = 0;
    nacci[1] = 1;
    
    int howMany;
    scanf("%d", &howMany);

    for(int i = 2; i <= howMany; i++){
        if(i % 2 == 0){
            nacci[i]=nacci[i-1]+nacci[i-2];
        } else {
            nacci[i] = 1;
        }
    }
    
    printf("%d\n", nacci[howMany]);

    return 0;
}
