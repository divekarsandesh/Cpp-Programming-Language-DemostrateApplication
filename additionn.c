/*
   steps to develop the application
   step 1:Understand the problem statement
   step 2:write the algorithm
   Step 3:Decide the programming language(c/c++/java/_____)
   step 4:Write the programming
   step 5:Test the protected
*/


   //Accept N number from user and perform the addition

   //Input
   // Value of N = 5
   // Values :10 20 30 40 50

   // Output
   // Addition is : 150

   //Algorithm 
/*
  START
       Accept the number of elements from user   
	   Allocate the memory to store that numbers
	   Accept the numbers from user 
	   Perform addition of all numbers
	   Display the addition
  END
*/

#include<stdio.h>   //For printf and scanf
#include<stdlib.h>  //for malloc and free

///////////////////////////////////////////////////////////////////
////////////
//
// Application Name : Addition of N numbers
// Input :  N numbers
// Output : Addition 
// Author: Sandesh Shivaji Divekar
// Date : 18 september 2022
//
//////////////////////////////////////////////////////////////////////////
/////////////////////

int main()
{
	int *Arr = NULL; //pointer to hold the address of array
	int iSize = 0; //	Variable to hold size of array
	int i = 0; // loop counter 
	int isum = 0; // To hold the addition
	
	printf("Please enter how many elements you want?\n");
	scanf("%d",&iSize);
	
	// Allocate the memary
	Arr = (int *)malloc(iSize * sizeof(int));
	printf("memory allocation is successful\n");
	
	printf("Please enter the elements\n");
	
	for(i = 0; i < iSize; i++)
	{
		scanf("%d",&Arr[i]);
	}
	
	//perform addition
	for(i = 0; i < iSize; i++)
	{
		isum = isum + Arr[i];
	}
	
	printf("Addition is : %d\n",isum);
	
	free(Arr);
	printf("Memory gets deallocated.\n");
	
	return 0;
}