#include <stdio.h>
#include <string.h>

int main(){
    char massage[27], ch;
    int i, a, b, m;
    printf("%s","massage: ");
    scanf("%s", massage);
    printf("%s", "input k1 and k2: ");
    scanf("%d %d\n", &a, &b);
    for(i = 0; massage[i] != '\0'; ++i){
        ch = massage[i];
        ch = ((((ch - 'A')* a + b) % 26) + 'A');
        massage[i] = ch;
        }
    printf("%s\n", massage);
    return 0;
}