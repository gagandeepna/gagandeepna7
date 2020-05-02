#include<stdio.h> 
int find_lcm(int, int);
int main() 
{
    int a, b, lcm; 
    printf("Enter 2 integers to find LCM of: \n"); 
    scanf("%d%d", &a, &b); 
    lcm = find_lcm(a,b);
    printf("\nLCM of %d and %d is: %d", a, b, lcm); 
    return 0;   
} 
int find_lcm(int a,int b) 
{
    static int x=1;
    if(x%a == 0 && x%b == 0) 
    { 
        return x; 
    }
    else 
    { 
        x++; 
        find_lcm(a,b); 
        return x; 
    } 
}
