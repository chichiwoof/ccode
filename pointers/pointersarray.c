#include <stdio.h>
#include <stdlib.h>

//  int arraySum (int array[], const int n)
int arraySum (int *array, const int n)
{
    int sum =0, *ptr;
    int * const arrayEnd = array + n;

    // for ( ptr = array; ptr <arrayEnd; ++ptr)
    //     sum += *ptr;
    //     the above does the same thing but the pointer version below reduces code and 
    for (; array<arrayEnd; ++array)
        sum += *array;

    return sum;
}

void main (void)
{
   // ///  int arraySum(int array[], const int n); //initialize function
    int arraySum(int *array, const int n);
    int values[10] = {3,7,-9,3,6,-1,7,9,1,-5};

    printf("The sum is %i\n", arraySum(values, 10)); // call the function here and pass the 10 to show the end of list.

}

// int main()
// {


    // // pointers often used as pointers to arrays
    // int values[100];

    // int *valuesPtr; // this one will be a pointer to a specific element in the array

    // valuesPtr = values; // points by default to first element in array
    // valuesPtr = &values[0]; // this does the same thing but is more clear
    //     // ar[i] and *(ar+i) are the same as well
    
    // //sequence through elements of array 
    // *(valuesPtr + i); //this points to the i+1 element of the array

    // values[10] = 27; 
    // *(valuesPtr + 10) = 27;  // these two do the same

    // valuesPtr +=1; // increments 
    // ++valuesPtr; //increments





// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



    // // when using void as the pointer type, you must first 
    // //  cast the pointer to the variable type you'd like it to hold
    // int i = 10;
    // float f = 2.34;
    // char ch = 'k';
    // void *vptr;

    // vptr = &i;
    // printf("Value of i = %d\n", *(int *)vptr);

    // vptr = &f;
    // printf("Value of f = %f\n", *(float *)vptr);

    // vptr = &ch;
    // printf("Value of ch = %c\n", *(char *)vptr);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



    // int num = 150;
    // int *pNum = NULL;

    // pNum = &num;

    // printf("num address is: %p\n", &num);
    // printf("Value of pNum: %p\n", &pNum);
    // printf("value of the pNum: %p\n", pNum);
    // printf("value of what pNum is pointing to %d\n", *pNum);
    
//     return 0;
// }