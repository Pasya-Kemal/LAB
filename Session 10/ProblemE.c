#include<stdio.h>
#include<stdlib.h>

long long int recursion(int n, int *count){
    if(n == 0 || n == 1){
        return n + 1;
    }
	(n % 3 == 0) ? (*count)++ : (*count);
	if(n % 5 == 0){
        return n * 2;
    } else{
        return recursion(n - 1, count) + n + recursion(n - 2, count) + n - 2;
	}
}

int main(){
    int i, testcase, n;
	long long int result;

    scanf("%d", &testcase);
	char **cout = (char **)malloc(testcase * sizeof(char *));
    for(i = 0; i < testcase; i++){
        cout[i] = (char *)malloc(100 * sizeof(char)); //alokasi space array 2 dimensi
    }
    
    for(i = 0; i < testcase; i++){
        scanf("%d", &n); getchar();
        int count = 0;
        result = recursion(n, &count);
        sprintf(cout[i], "Case #%d: %lld %d\n", i + 1, result, count);
    }
    
    for(i = 0; i < testcase; i++){
    	printf("%s", cout[i]);
	}
	
	free(cout);
    return 0;
}