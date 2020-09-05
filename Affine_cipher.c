#include <stdio.h>
#include <string.h>

// m = размер алфавита, a,b - ключи шифра
// функция щифрования F(x) = (a*x + b) % m

int main(){


    int a,b,i,j,len;

    char sh, str, alf[i], shifr[i], ich[i], kod[i]; 

    sh="abcdefghijklmnopqrstuvwxyz";

    str="abc";

    a=3; b=4;

    for (i=1; i < 27; i++)
        alf[i]=sh.SubString(i,1);//разделение строки на символы

    for (j=1; j<25; ){
        int f=(b+a*(j-1))/26;
    shifr[j]=alf[b+1+a*(j-1)-26*f];
  }    
    if(ich[i]==alf[j]){

            kod[i]=shifr[j];
            j++;
            printf();//при a=3, b=4 abc=EHK
    }
   }
  }
}
 




