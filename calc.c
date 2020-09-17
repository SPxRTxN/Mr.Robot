#include <stdio.h>  
int main(){   
	char action = '+';                                    
    long long n1, n2;
    do{ 
		printf("input num1 ""+-*/"" num2: ");               
		scanf("%d%s%d", &n1, &action, &n2);
		switch (action) {                                     
            case '*':                            
			printf("Mult: %d\n", n1 * n2);           
			break;                                
		case '/':                                       
			printf("Split: %d\n", n1 / n2);         
			break;                                      
		case '-':                                                                      
			printf("Diff: %d\n", n1 - n2);          
			break; 
		case '+':                                       
			printf("Sum: %d\n", n1 + n2);             
			break;                                           
		}   
	}  while(action != '0');
	return 0;                                                           
}                                                 

