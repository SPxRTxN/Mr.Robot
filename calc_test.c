#include <stdio.h>
#include <math.h>

int main(){
    char action;
    long long num1, num2, res, result[1024];

    do{
        for(int i = 1;; i++){

        printf("Input num1: ");
        scanf("%lld\n", &num1);
        printf("Input action: ");
        scanf("%s\n", &action);
        printf("Input num2 :");
        scanf("%lld", &num2);

        if(action == 'r'){
            int s = 0;
            printf("Input 1 - if res its num1, 2 - num2: \n");
            scanf("%d", &s);
            if(s == 1){
                num1 = result[i-1];
                printf("Input action: ");
                scanf("%s\n", &action);
                printf("Input num2: ");
                scanf("%lld\n", &num2);
            }else{
                num2 = result[i-1];
                printf("Input num1: ");
                scanf("%lld\n", &num1);
                printf("Input action: ");
                scanf("%s\n", &action);
                
                }
        }
        

        switch(action){
        case '+':
            res = num1 + num2;
            printf("Sum: %lld\n", res);
            result[i] = res; 
            break;
        case '-':
            res = num1 - num2;
            printf("Diff: %lld\n", res);
            result[i] = res;              
            break;
        case '*':
            res = num1 * num2;
            printf("Mult: %lld\n", res); 
            result[i] = res;             
            break;
        case '/':
            if (num2 != 0){   
            res = num1 / num2;                            
			printf("Split: %lld\n", res);
            result[i] = res; 
			}else{
				continue;
                }           
            break;
        case '^':
            res = pow(num1,num2);
            printf("Pow: %lld\n", res);  
            result[i] = res;            
            break;
        }
        }
        printf("Continue: (y/n)\n");
        scanf("%s", &action);
    }while(action != 'n');
    return 0;

}