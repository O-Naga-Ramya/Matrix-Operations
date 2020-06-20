
/*

Title:Finding Trace of a matrix
Authors:Ramya, Lahari
Last modified date: 11-6-2-2020

*/



/* 

This program is to calculate the Trace a square matix 
User need to give number of rows,columns as inputs
and need to enter the elemets according to the order of the matrix

*/


#include <stdio.h>      /* Standard Library of Input and Output */


int main()
	{printf("Trace of a square matrix");
	printf("\n");
    int i,j,k,l;
    int matrix[10][10],trace;
    
    
//Taking inputs from user number of rows-i and columns-j


    printf ("enter no of rows");
    scanf("%d", &i);
    printf ("enter no of columns");
    scanf("%d", &j);
    
    
//Taking input elements from user and stored in array called matrix


    if(i==j)
		{for (k=1;k<=i;k++)
	        {for(l=1;l<=j;l++)
	            {printf ("enter the element%d%dplace",k,l);
	            scanf("%d", &matrix[k][l]);
	            }
	        }
	        
	        
// printing elements of given matrix in matrix form
	
	
	    for(k=1;k<=i;k++)
	        {for(l=1;l<=j;l++)
	            {printf("%d\t",matrix[k][l]);
				}
	        printf("\n");
	        }
	        
	        
//calculating the Trace of matrix and storing it in a variable called trace and printing the Trace of given matrix
	
	
	    if(i==j)
			{for(k=1;k<=i;k++)
		    	{trace=trace+matrix[k][k];
				}
			printf("trace of given matrix is %d",trace);
			}
		}
	else
		{printf("The matrix should be a square matrix to find trace");
		}

	}
    
