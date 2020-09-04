#include <stdio.h>

int main() {
    int num ;
    printf("In put hight : ");
        scanf_s("%d",&num);
   
    int size = num * 2 + 1; 
    int i; 
    int j;  
    int a;  
    int s;  
    if (num == 0) {
        
        printf("@");
    }
    else if (num >= 1) {                           
        
        for (i = 1; i <= size; i++) {
            for (j = 1; j <= size; j++) {
                if (i == num + 1 && j == num + 1) {
                   
                    printf("@"); /// MID
                    continue;
                }
               //// /////   loop !     //// /////
                else {
                    if (i <= num + 1) {
                        
                        a = i * 2 - 1;
                    }
                    else {
                        
                        a = (size - i + 1) * 2 - 1;
                    }
                    
                    s = (int)((num + 1) - (a / 2));
                    
                    if (j >= s && j <= s + a - 1) {
                        
                        printf("!");
                    }
                    else {
                        
                        printf(" ");
                    }
                }
            }
            
            printf("\n");
        }
    }
    return 0;

}