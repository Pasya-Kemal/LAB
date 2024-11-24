#include <stdio.h>

int main(){
    int testCase;
    scanf("%d", &testCase);

    for(int i = 0; i < testCase; i++){
        int howMany;
        scanf("%d", &howMany);

        long int nums[1000];
        int bibi, lili;

        for(int j = 1; j <= howMany; j++){
            scanf("%ld", &nums[j]);
        }

        scanf("%d %d", &bibi, &lili);

        if(nums[bibi] > nums[lili]){
            printf("Case #%d : Bibi\n", i+1);
        } else if(nums[bibi] < nums[lili]){
            printf("Case #%d : Lili\n", i+1);
        } else {
            printf("Case #%d : Draw\n", i+1);
        }
    }

    return 0;
}
