/**
* @file encrypt_row.c
* @brief this file contain encrypt_row function
*
* @author Calcan Traian Marius
*
* @date 5/6/2018
*/

#include "functions.h"

void encrypt_row(char row[], int position){
	
	///\fn void encrypt_row(char row[], int position)
    ///\brief This function will encrypt the row 
    ///\param \var i Iterator 1
	///\param \var j is used as a second iterator
	///\param \var aux  is a copy the \var position of the key
	///
	
	
        int i;
        int aux;
        int j;
        char cpy[12];

		j = 0;
		
		///we copy the \var row in \var cpy
        strcpy(cpy,row);

        aux = position;
		
			///\var i from 0 to length of the row - position of the key
            for(i = 0 ; i < strlen(row) - position; i++){
				///We change the \var row[i] with the \var cpy[aux](row[position]) 
                row[i] = cpy[aux];
                aux++;
            }

            

			///we change the remaining elements of row with the remaining elements of the cpy
			///\var i from  length of the row - position of the key to length of the row
            for(i = strlen(row) - position; i < strlen(row); i++){
                row[i] = cpy[j];
                j++;
            }

			///we change the last element of row with the first element of cpy
            row[i + 1] = cpy[0];
        }
 