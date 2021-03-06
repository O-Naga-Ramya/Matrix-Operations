/*

Title:Finding type of matrix
Authors:Ramya, Lahari
Last modified date: 11-6-2-2020

*/



/*

This code is used to determine the type of matrix whether it is 
__Row matrix
__Column matrix
__Square matrix
__Rectangular matrix
__Diagonal matrix
__Scalar matrix
__Unit matrix
__Upper triangular matrix
__lower triangular matrix

*/



/*User need to enter number of columns,rows and elements according to order of the matrix*/



/*

Logic used in code
	--x is to check for upper triangularity
	--y is to check fot lower triangularity
	--z is to check for null matrix if z==1 it is not a null matrix if z==0 it is a null matrix
	--s is to check for diagonality

	--if z=0 means all elements are equal and if a11=0 then it is called null matrix 
	--(i==j)if x=0 and y=0 and s=1 means upper and lower triangular elements are 0 and diagonal elements  are not equal so called diagonal matrix
	--if x=0 y=0 s=0 means upper and lower triangular elements are 0 and diagonal elements  are also equal
		then if a11=1 it is called unitary a11!=1 then it is a scalar matrix
	--if x=0 and y=1 irrespective of diagonal elements it is called lower triangular matrix
	--if x=1 and y=0 irrespective of diagonal elements it is called upper triangular matrix
	
*/


#include <stdio.h>      /* Standard Library of Input and Output */


int main()
	{printf("Identifying type of matrix\n");
    int i,j,k,l,m,n;
    int x=0,y=0,z=0,s=0;
    int matrix[10][10];


//Taking inputs from user number of rows-i and columns-j


    printf ("enter no of rows");
    scanf("%d", &i);
    printf ("enter no of columns");
    scanf("%d", &j);
    
    
//Taking input elements from user and storing in array called matrix


    for (k=1;k<=i;k++)
    	{for(l=1;l<=j;l++)
            {printf ("enter the element%d%dplace",k,l);
             scanf("%d", &matrix[k][l]);
            }
        }
        
        
// printing the user given matrix in matrix form


    for(n=1;n<=i;n++)
        {for(m=1;m<=j;m++)
            {printf("%d\t",matrix[n][m]);
			}
        printf("\n");
        }
        
        
//checking for null matrix or not


    for(n=1;n<=i;n++)
		{for(m=1;m<=j;m++)
         	{if(matrix[1][1]!=matrix[n][m])
            	{z=1;}
        	}
    	}
    
    
//checking for square matrix types


    if(i==j)
     	{for(n=1;n<=i;n++)
			{for(m=1;m<=j;m++)
            	{if(m==n)
                	{if(matrix[1][1]!=matrix[n][m])
                    	{s=1;}
                	}
            	else
            		{if(n<m)
                		{if(matrix[n][m]!=0)
                    		{x=1;}
                		}
            		else 
                		{if(matrix[n][m]!=0)
                   			{y=1;}
                		}
                	}
    			}
    		}
    	}
    
    
// printing output according to the variable values


    if(z==0 && matrix[1][1]==0)
        {printf("it is a null matrix");
		}
		
    else if(i==j)
		{if(x==0&&y==0&&s==1)
            {printf("it is a diagonal matrix");
			}
        else if(x==0&&y==0&&s==0 && matrix[1][1]!=1)
            {printf("it is a scalar matrix");
			}
        else if(x==0&&y==0&&s==0 && matrix[1][1]==1)
            {printf("it is a unitary matrix");
			}
        else if(x==1&&y==0)
            {printf("it is a upper triangular matrix");
			}
        else if(x==0&& y==1)
            {printf("it is a lower triangular matrix");
			}
        else
			{printf("it is a square matrix");
			}
		}
		
	else if(i==1 && j!=1)
            {printf("it is a row matrix");
			}
			
    else if(j==1&& i!=1)
            {printf("it is a column matrix");
			}
					
    else
    	{printf ("it is a rectangular matrix");;
    	}
    	
    	
    return 0;
    
    }
