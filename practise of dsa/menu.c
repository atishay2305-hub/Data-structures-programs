//menu driver program from scratch

#include <stdio.h>
#include <stdlib.h>
void Insert(struct *arr, x, index)
{
printf("\nEnter the value you want to insert and the index at which you want to insert it: \n");
scanf("%d%d", &x, &index);
for(index >=0 && index <= arr->length)
{
    if(i = arr->length; i > index; i--)
    {
        arr->A[i] = arr->A[i-1];
    }
    arr->A[index] = x;
    length++:
}
}
void L_search(struct Array *arr, int key)
{
int i;
int temp;
for(i=0; i < arr->A.length; i++)
{
    if(key == A[i])
    {
        temp = A[i]; //temp takes value from A[i]
        A[i] = A[i-1]; // A[i] takes value from A[i-1]
        temp = A[i-1]; //now temp stores A[i]'s value to A[i-1]
        return i;
    }
}
}
void B_search(struct Array *arr,int key)
int l;
int h; 
int mid;

while(l <= h)
mid = (l+h)/2;
{
    if(key == mid)
    {
        return mid;
    }
    else if(key < mid)
    {
     h = mid - 1;
    }
    else // key > mid 
    {
        l = mid + 1;
    }
}
void R_B_Search(struct Array *arr, int key)
{
    int l;
    int h;
    int mid;

while(l < h)
if(key == mid)
{
    return mid;
}
else if(key < mid)
{
    return (arr, l, mid-1, key);
}
else // key > mid
{
    return (arr, mid+1, h, key);
}
}
void Sum(struct Array arr)
{
int i;
for(i=0; i < arr->A.length; i++)
{
    sum += A[i];
}
return sum;
}
void delete(strut Array *arr, int index)
{
 int i;
 int x = arr.A[index]
 printf("\nEnter the index you want to delete the element from: ");
 scanf("%d", &index);
 for(index >= 0 && index <= arr->A.length)
 {
     if(i=index; i < arr->A.length; i++)
     {
         arr.A[i] = arr.A[i+1];
     }
    arr->length--;
    return x;
 }
 return 0;
}
void display(struct Array *arr)
{
    int i;
    for(i=0; i < arr->A.length; i++)
    {
        printf("the elements are : ");
        printf("%d", arr.A[i]);
    }
}
void exit
{


}

int main()
{
struct 
printf("")
printf("\nEnter you choice : \n");
scanf("%d", &ch);

printf("1.Insert\n");
printf("2.L_Search\n");
printf("3.B_Search\n");
printf("4.R_B_Search\n");
printf("5.Sum\n");
printf("6.delete\n");
printf("7.display\n");
printf("8.exit\n");

switch(ch)
{
   case 1 : printf("\nenter the element and the index:");
    scanf("%d", &x, &index);
    Insert(&arr1,index, x);
    break;
    case 2 : printf("\nEnter the element you want to search in the array: ");
            scanf("%d", &key);
    L_search(&arr1, key);
    break;
    case 3 : printf("\nEnter the element you to binary search: \n");
        scanf("%d", &key);
    B_search(&arr1, key);
    break;
    case 3 : printf("\nEnter the element you want to recursively Binary Search: ");
        scanf("%d", &key);
    R_B_Search(&arr1, key);
    break;
    case 4 : printf("\nThe sum is: ", Sum(arr1));
    break;
    case 5 : printf("\nThe deleted element is: ", delete(arr1))
    break;
    case 6 : printf("\nHere is the array: ");
    display(arr1);
    break;
    case 7: 
}
return 0;
}