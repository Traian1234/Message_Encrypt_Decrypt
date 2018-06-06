/**
* @file main.c
* @brief this file contain int main() function;
*
* @author Calcan Traian Marius
*
* @date 5/6/2018
*/


#include "functions.h"

int main()
{
	///\fn int main()
    ///\brief Main function
    ///\param i Iterator
	///
	/// \var row_1 , \var row_2 and \var row_3 are the keyboard rows
    char message[100];
    char row_1[12] = "qwertyuiop";
    char row_2[11] = "asdfghjkl";
    char row_3[9] = "zxcvbnm";
	
	///\var key give us the position for the encryption
    char key;
	
	///\var i Iterator
    int i ;
	///\var position is the position for the encryption
    int position;
    int message_id[100];
    int row_number[100];

	///We get the message 
    printf("introdu mesajul :");
    gets(message);
    if(message[0] != ' ' && message[1]==' '){
        key = message[0];
    }else{
        printf("Prima litera din mesaj trebuie urmata de un spatiu");
		system("pause");
        return 0;
    }

	/// We identify the position of the key
    position = identify(key ,row_1 ,row_2 ,row_3 ,&row_number[0]);

	/// We get the id for the \var message[i] char
    for(i = 0; i < strlen(message) ; i++){
        message_id[i] = identify(message[i],row_1,row_2,row_3,&row_number[i]);
		
		///We check if the key is ' ' ,if is not we decrypt the \var message_id[i]
        if(message_id[i] != 12){
            message_id[i]=message_id[i]-position;
			
			///If \var message_id[i] < 0 we add the row size to the \var message_id
            if(message_id[i] < 0){
                if(row_number[i]==1){
                    message_id[i] = message_id[i] + 10;
                }

                if(row_number[i]==2){
                    message_id[i] = message_id[i] + 9;
                }

                if(row_number[i]==3){
                    message_id[i] = message_id[i] + 7;
                }

            }
        }
    }

	/// we print the decrypted message
    print_decrypted(message,row_1,row_2,row_3,message_id,row_number,position);
	printf("mesajul decryptat este :");
	printf("%s",message);

	printf("\n");
	system("pause");
    return 0;
}