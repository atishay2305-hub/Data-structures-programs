//toggle between cases in a string 
//lower to upper and upper to lower in a string
// lower case alpha: 97 to 122 
//upper case alpha: 65 to 90
//difference between lower and upper is always 32

#include <stdio.h>

int main()
{
    char A[] = "wElcOmE";
    int i;

    for(i=0; A[i] != '\0'; i++)
    {
        if(A[i] >=65 && A[i] <= 90)
        {
            A[i] += 32;
        }
        else if(A[i] >= 'a' && A[i] <= 122)
        {
            A[i] -= 32;
        }
    }
    printf("%s", A);
    return 0;
}