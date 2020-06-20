
/*

Title: Finding given matrix is a Symmetric or Skew-symmetric or Asymmetric matrix
Authors:Ramya, Lahari
Last modified date: 11-6-2-2020

*/


/*

--asym is to check for asymmetricity
--sksym is to check for skew-symmetricity in upper and lower triangular
--sksym is to check for skew-symmetricity diagonal elements
--if asym=1 then it means non diagonal elements are not equal may be chance of A=-A
--if asym=1 and sksym=1 then its non diagonal elements are not equal as well as not A=-A then matrix is asymmetric
--if asym=1 and sksym=0 and sksymd=0 then its non diagonal elements are sign changed as well as diagonal elements are 0 so it is called skew-symmetric
--if asym=1 and sksym=0 and sksymd=1 then its non diagonal elements are sign changed as well as diagonal elements are not 0 so it is called asymmetric
--if asym=0 then upper and lower triangular matrices equal and irrespective of diagonal elements it is a symmetric matrix 

*/


#include <stdio.h>      /* Standard Library of Input and Output */


int main()
	{printf("check for symmetric or Skew-symmetric or Asymmetric matrix\n");
    int i,j,k,l,asym,sksym,sksydm;
    int matrix[10][10];
    
    
//Taking inputs from user number of rows-i and columns-j


    printf ("enter no of rows");
    scanf("%d", &i);
    printf ("enter no of columns");
    scanf("%d", &j);
    
    
//Taking input elements from user for two matrices and are stored in array called matrix


    for (k=1;k<=i;k++)
        {for(l=1;l<=j;l++)
            {printf ("enter the element%d%dplace",k,l);
            scanf("%d", &matrix[k][l]);
            }
        }
        
        
//Checking the conditions for the symmetricity,skew-symmetricity and asymmetricity


    if(i==j)
	    {asym=0;
		sksym=0;
		sksydm=0;
	    for(k=1;k<=i;k++)
			{for(l=1;l<=j;l++)
				{if(k!=l)
					{if(matrix[k][l]!=matrix[l][k])
		    			{asym=1;
						}
					if(matrix[k][l]!=(-1*matrix[l][k]))
						{sksym=1;}			
							
					}
				else
					{if(matrix[k][l]!=0)
						{sksydm=1;
						}
					}
				}
			}
		}
	else
		{printf("matrix should be a square matrix");
		}
		
		
//According to variable values printing the matrix type


	if(asym==1)
		{if(sksym==1)
			{printf("it is a assymmetric matrix");
			}
		else{
			if(sksydm==0)
				{printf("it is a skew-symmetric matrix");
				}
			else
				{printf("it is a assymmetric matrix");
				}
			}
		}
	
	else
		{printf("it is a symmetric matrix");
		}
	return 0;
	}	
