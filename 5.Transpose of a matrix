
/*

Title:Transpose of matrix
Authors:Ramya, Lahari
Last modified date: 11-6-2-2020

*/


/* 

This program is to calculate the Transpose a square matix 
User need to give number of rows,columns as inputs
and need to enter the elemets according to the order of the matrix

*/


#include <stdio.h>      /* Standard Library of Input and Output */
 

int main()
	{printf("Transpose of a matrix");
    int i,j,k,l;
    int matrix[10][10],matrix1[10][10];
    
    
//Taking inputs from user number of rows-i and columns-j


    printf ("enter no of rows");
    scanf("%d", &i);
    printf ("enter no of columns");
    scanf("%d", &j);
    
    
//Taking input elements from user and stored in array called matrix


    for (k=1;k<=i;k++)
        {for(l=1;l<=j;l++)
            {printf ("enter the element%d%dplace",k,l);
             scanf("%d", &matrix[k][l]);
            }
        }
    
    
// printing elements of given matrix in matrix form


    printf("entered matrix");
    printf("\n");
    for (k=1;k<=i;k++)
        {for(l=1;l<=j;l++)
        	{printf ("%d\t",matrix[k][l]);
            }
        printf("\n");
        }
        
        
//finding transpose of a matrix
    
    
    for(k=1;k<=j;k++)
		{for(l=1;l<=i;l++)
			{matrix1[k][l]=matrix[l][k];
			}
		}
		

//Printing the transpose form of given matrix


	printf("transpose of given matrix");
	printf("\n");
	for (k=1;k<=j;k++)
        {for(l=1;l<=i;l++)
            {printf ("%d\t",matrix1[k][l]);
			}
        printf ("\n");
        }
    }
