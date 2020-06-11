
/*

Title: Hermitian of matrix
Authors:Ramya, Lahari
Last modified date: 11-6-2-2020

*/


/* 

This program is to print the Hermitian of given matrix matrices 
User need to give number of rows,columns as inputs
and need to enter the elemets(both real and imaginary part seperately) according to the order of the matrix

*/


#include <stdio.h>      /* Standard Library of Input and Output */
#include <complex.h>    /* Standard Library of Complex Numbers */


int main() 
	{
	printf("Hermitian of a matrix\n");
    int real[10][10],img[10][10];
    int k,l,i,j;
    double complex z1[10][10];
    double complex z1con[10][10];
    
    
//Taking inputs from user number of rows-i and columns-j


    printf ("enter no of rows");
    scanf("%d", &i);
    printf ("enter no of columns");
    scanf("%d", &j);
    
    
//Taking input elements both real part and imaginary part from user for & stored in two matrices called real,img swpwrately


    for (k=1;k<=i;k++)
        {for(l=1;l<=j;l++)
            {printf ("enter the element real part in %d%dplace",k,l);
            scanf("%d", &real[k][l]);
            printf ("enter the element img part in %d%dplace",k,l);
            scanf("%d", &img[k][l]);
            }
        }
    printf("\n");


//converting complex number in to its conjugate form


	for (k=1;k<=i;k++)
        {for(l=1;l<=j;l++)
			{
     		z1[k][l] = real[k][l] + img[k][l] * I;
    		printf("%.2f + %.2fi\t", creal(z1[k][l]), cimag(z1[k][l]));
    		z1con[k][l]= conj(z1[k][l]);
			}
        printf("\n");
        }
	printf("\n");
	
	
//printing the conjugate of given matrix


	printf("conjugate of given matrix\n");
	for(k=1;k<=i;k++)
        {for(l=1;l<=j;l++)
        	{printf("%.2f + %.2fi\t", creal(z1con[k][l]), cimag(z1con[k][l]));
			}
        printf("\n");
        }
	printf("\n");
	
	
//transpose the conjugate matrix and printing the transpose conjugate (Hermitian) of given matrix


	printf("hermitian of given matrix\n");
	for(k=1;k<=j;k++)
        {for(l=1;l<=i;l++)
        	{printf("%.2f + %.2fi\t", creal(z1con[l][k]), cimag(z1con[l][k]));
			}
        printf("\n");
        }
        
    return 0;
	}
