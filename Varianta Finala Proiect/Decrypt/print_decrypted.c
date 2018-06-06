/**
* @file print_decrypted.c
* @brief this file contain void print_decrypted function
*
* @author Calcan Traian Marius
*
* @date 5/6/2018
*/

#include "functions.h"

void print_decrypted(char message[] ,char row_1[] ,char row_2[] ,char row_3[] ,int message_id[] ,int row_number[],int position){
    ///\fn void print_decrypted(char message[] ,char row_1[] ,char row_2[] ,char row_3[] ,int message_id[] ,int row_number[],int position)
    ///\brief Change the encrypted message with the decrypted message
    ///
	
	
	///\var i Iterator
	int i;
    for(i = 0; i < strlen(message); i++){
		
		///we check if the \var message_id[i] is 12 (12 is the id for ' ')
        if (message_id[i] == 12){
            message[i] = ' ';
            row_number[i] = 0;
            continue;
        }
		
		///we check the row_number and change \var message[i] with the char row[message_id[i]]
        if(row_number[i] == 1){
            message[i] = row_1[message_id[i]];
            continue;
        }

        if(row_number[i] == 2){
            message[i] = row_2[message_id[i]];
            continue;
        }

        if(row_number[i] == 3){
			if(position == 8 && message[i]=='z'){
				message[i]='m';
				continue;
			}
            message[i] = row_3[message_id[i]];
            continue;
        }
    }
}
