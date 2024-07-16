Практична 4

Виконав: Горбач Єгор

Опис

Тема: задача з рівними дільниками

Натуральне число m називається рівним дільником числа n, якщо частка і залишок від ділення n на m дорівнюють одне одному. Для заданого натурального числа n знайти кількість його рівних дільників.

Вхідні дані: Натуральне число n (1 < n < 150).

Вихідні дані: Вивести одне шукане число.

Код:

#include <stdio.h>

int main() {
    
    int n;
   
    
    printf("Enter the positive integer n: ");
    
    scanf("%d", &n);

    
    int count = 0;
    
    for (int m = 1; m < n; m++) {
    
        if (n % (m + 1) == 0) {
        
            int q = n / (m + 1);
            
            if (q == n % m) {
            
                count++;
            
            }
      
        }
   
    }
    

    
    printf("Number of equal divisors: %d\n", count);
    
    return 0;

}
