
// #include <stdio.h>

// int main() {
    // printf("Hello, World!\n");
    // return 0;
// }

//for N number print
// #include<stdio.h>
// int main() {
//     int N;

//     printf("Enter the value of N : ");
//     scanf("%d", &N);

//     for (int i = 1; i <= N;  i++){
//         printf("%d", i);
//     }
//     return 0;
// }

// for even number print
// #include<stdio.h>
// int main() {
//     int N;

//     printf("Enter the value of N : ");
//     scanf("%d",&N);

//     for (int i = 2; i <= N; i += 2){
//         printf("%d ", i);
//     }
//     return 0;
// }

//print odd number to N
// #include<stdio.h>
// int main() {
//     int N;

//     printf("Enter the value of N : ");
//     scanf("%d",&N);

//     for (int i = 1; i <= N; i += 2){
//         printf("%d ", i);
//     }
//     return 0;
// }

// print revers number 
//  

// sum of first N natural 
#include<stdio.h>
int main() {
    int N, sum = 0;

    printf("Enter the value of N : ");
    scanf("%d",&N);

    for (int i = 1; i <= N; i++){
sum += i; }
printf("Sum of first %d natural numbers is %d ", N, sum);
    return 0;
}

