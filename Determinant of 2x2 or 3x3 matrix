
/*

Title: Determinant of a matrix
Authors:Ramya, Lahari
Last modified date: 11-6-2-2020

*/


/* 

This program is to calculate the Determinant of a square matix of order 2x2 or 3x3
User need to give number of rows,columns as inputs
and need to enter the elemets according to the order of the matrix

*/


#include <stdio.h>      /* Standard Library of Input and Output */


int main()
{	


//Taking inputs from user number of rows-i and columns-j


	printf("enter a 2x2 or 3x3 matrix to find determinant\n");
    int i,j,k,l,det;
    int m[10][10];
    printf ("enter no of rows");
    scanf("%d", &i);
    printf ("enter no of columns");
    scanf("%d", &j);
    
    
//Taking input elements from user and stored in array called m


    for (k=1;k<=i;k++)
        {for(l=1;l<=j;l++)
            {printf ("enter the element%d%dplace",k,l);
            scanf("%d", &m[k][l]);
            }
        }
   
        
// using formula determinant of 2x2 matrix
 
 
    if(i==2)
    	{det=(m[1][1]*m[2][2]-m[1][2]*m[2][1]);
    
		}
		
		
// using formula determinant of 3x3 matrix
		
		
		
	else if(i==3)
		{det=((m[1][1])*((m[2][2]*m[3][3])-(m[3][2]*m[2][3])))-(m[1][2]*((m[2][1]*m[3][3])-(m[3][1]*m[2][3])))+(m[1][3]*((m[2][1]*m[3][2]-m[3][1]*m[2][2])));

		}
		
		
	
//printing the det of given matrix


	printf("%d",det);
	
	}
