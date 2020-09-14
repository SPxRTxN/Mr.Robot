#include <stdio.h>
#include <string.h>

// m = размер алфавита, a,b - ключи шифра
// функция щифрования F(x) = (a*x + b) % m

int main(){
    int a, b, i, j, len;
    char sh, alf[27], shifr[27], massage[27]; 
    sh="abcdefghijklmnopqrstuvwxyz";

    printf("%s","massage: ");
    scanf("%s", massage);
    printf("%s", "input k1 and k2: ");
    scanf("%d %d", &a, &b);
    
    for (i=1; i < 27; i++)
        alf[i]=sh.SubString(i,1);

    for (j=1; j<25; ){
        int f=(a *(j-1) +b ) /26;
        shifr[j] = alf[b +1 +a *(j-1) -26 *f];
  }    
   
    }
   }
  }
}
 




