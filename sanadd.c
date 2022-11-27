/*
  Steps develop the application
  step 1 : Understand the problem statement
  step 2 : Write the Algorithm 
  step 3 : Display the programming language
  step 4 : Write the program
  step 5 : Test the protocol
*/

//Accept the N number from user and perform the addition
//Input :
//       values of N : 5
//       values : 10 20 30 40 50
//output :
//       Addition is : 150
// Algorithm
/*
   START



   END
*/

#include<stdio.h>     //for printf and scanf
#include<stdlib.h>    //for malloc and free 

///////////////////////////////////////////////////////////////////////////////////////
//////////////
//
// Application Name : N number Addition
// Input : N number
// Outpt : Addition 
// Author : sandesh shivaji divekar
// Date : 27 september 2022
//
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int *Arr = NULL;
	int iSize = 0;
	int i = 0;
	int isum = 0;
	
	printf("please enter the element of array you want\n");
	scanf("%d",&iSize);
    
    Arr = (int *)malloc(iSize * sizeof(int));
	
    printf("Memory allocated is successful\n");
	
	printf("please enter the element\n");
    
     for(i=0; i<iSize; i++)
	{
		scanf("%d",&Arr[i]);
	}		
	for(i=0; i<iSize; i++)
	{
		isum= isum + Arr[i];
	}
	
	printf("Addition is :%d\n",isum);
	  
	free(Arr);
	printf("Memory gets deallocated\n");
	
	return 0;
	
}