
/*

Title: Addition and Subtraction of two matrices
Authors:Ramya, Lahari
Last modified date: 11-6-2-2020


*/



/* 

This program is to calculate the Addition and Subtraction of two matrices 
User need to give number of rows,columns as inputs
and need to enter the elemets according to the order of the matrix

*/


#include <stdio.h>      /* Standard Library of Input and Output */


int main()
{	
	printf("Addition and Subtraction of two matrices\n");
    int i1,j1,i2,j2,k,l,m,n;
    int matrix1[10][10],matrix2[10][10],matrix3[10][10],matrix4[10][10];


//Taking inputs from user number of rows-i1 & i2 and columns-j1 & j2


    printf ("enter no of rows in 1st matrix");
    scanf("%d", &i1);
    printf ("enter no of columns in 2st matrix");
    scanf("%d", &j1);
    printf ("enter no of rows in 2nd matrix");
    scanf("%d", &i2);
    printf ("enter no of columns in 2nd matrix");
    scanf("%d", &j2);
    
    
//Taking input elements from user for two matrices and are stored in two arrays called matrix1,matrix2


    for (k=1;k<=i1;k++)
    	{for(l=1;l<=j1;l++)
        	{printf ("enter the element of matrix1 %d%dplace",k,l);
        	  scanf("%d", &matrix1[k][l]);
        	}
    	}
   
    for (k=1;k<=i2;k++)
	    {for(l=1;l<=j2;l++)
	        {printf ("enter the element of matrix2 %d%dplace",k,l);
	         scanf("%d", &matrix2[k][l]);
	        }
	    }



//adding corresponding elements in two matrices according to row number and column number
//matrix3 is to store addition matrix values
//matrix4 is to store subtracted matrix values


    if(i1==i2 && j1==j2)
		{for (k=1;k<=i1;k++)
    		{for(l=1;l<=j1;l++)
				{matrix3[k][l]=matrix1[k][l]+matrix2[k][l];
				 matrix4[k][l]=matrix1[k][l]-matrix2[k][l];
				}
			}
		}
	
		 
// printing elements of outpu (addition and subtaction) matrix in a matrix form 


	if(i1==i2 && j1==j2)
		{printf("the addition of two matrices");
		printf("\n");
    	for(n=1;n<=i1;n++)
        	{for(m=1;m<=j1;m++)
            	{printf("%d\t",matrix3[n][m]);
				}
         	printf("\n");
        	}
        	
    	printf("the subtraction of two matrices\n");
    	for(n=1;n<=i1;n++)
        	{for(m=1;m<=j1;m++)
            	{printf("%d\t",matrix4[n][m]);
				}
        	printf("\n");
        	}    
    	}
    	
    
    else
	    {printf("add/sub of matrices not possible because order is not same\n");
		}
		
	}
