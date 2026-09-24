/*Date: 24/09/2026
Prgram: Calculate Body Mass Index
Author: Alok Upadhyay
t.me/all_ok19*/

#include <stdio.h>
int main()
{
    
    float Bm, hm, W;
    printf("Lets calculate the BMI:\n");
    printf("Enter the weight in Kg:\n");
    scanf("%f", &W);
    printf("Enter the height in metres: \n");
    scanf("%f", &hm);
    Bm = W / (hm * hm);
    printf("The BMI is :%.2f\n", Bm);
    printf("\n Underweight (Below 18.5) \n Healthy (18.5 - 24.9)\n");
    printf("Overweight (25.0 - 29.9)\n Obesity) (30.0 or above)\n");
    return 0;
}