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
    int position;
    int message_id[100];
    int row_number[100];


	///We get the message 
    printf("introdu mesajul :");
    gets(message);
    if(message[0] != ' ' && message[1]==' '){
        key = message[0];
    }else{
        printf("Prima litera din mesaj trebuie urmata de un spatiu\ns");
		system("pause");
        return 0;
    }
	
	/// We identify the position of the key
    position = identify(key ,row_1 ,row_2 ,row_3 ,&row_number[0]);

	/// We get the id for the \var message[i] char
    for(i = 0; i < strlen(message) ; i++){
        message_id[i] = identify(message[i],row_1,row_2,row_3,&row_number[i]);
    }
	
	///We check is the \var position is 8 , in this case the algoritm won't work because the size of the \var row_3 is 7
	///We encrypt the rows
    if(position==8){
        strcpy(row_1,"opqwertyui");
        strcpy(row_2,"lasdfghjk");
        strcpy(row_3,"xcvbnmz");

    }else{
    encrypt_row(row_1,position);
    encrypt_row(row_2,position);
    encrypt_row(row_3,position);
	}


	/// we print the encrypted message
    print_encrypted(message,row_1,row_2,row_3,message_id,row_number);
	printf("Mesajul encryptat este :");
    printf("%s",message);
	printf("\n");
	system("pause");

    return 0;
}
