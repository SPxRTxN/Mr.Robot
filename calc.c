#include <stdio.h>                                     

int main(){                                            

    while (1) {                                         

		char action;                                    
    	long long n1, n2, sum, diff, mult, split;      

		printf("%s", "input +,-,/,* :");               
		scanf("%c", &action);                           

		printf("%s", "input number 1:");                
		scanf("%d", &n1);                               
		printf("%s", "input number 2:");                
		scanf("%d", &n2);                               


		switch (action) {                                     
            case '*':                                       
			mult = n1 * n2;                             
			printf("%s %d\n", "Mult:", mult);           
			break;                                     
		case '+':                                       
			sum = n1 + n2;                              
			printf("%s %d\n", "Sum:", sum);             
			break;                                      
		case '/':                                       
			split = n1 / n2;                            
			printf("%s %d\n", "Split:", split);         
			break;                                      
		case '-':                                                                      
			diff = n1 - n2;                             
			printf("%s %d\n", "Diff:", diff);          
			break;                                      
		}                                               

        n1 = 0;                                          
        n2 = 0;
	}                                                   
	return 0;                                                           
}                                                       

