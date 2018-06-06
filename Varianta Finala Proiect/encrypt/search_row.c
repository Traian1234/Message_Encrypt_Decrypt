/**
* @file search_row.c
* @brief this file contain int search_row function
*
* @author Calcan Traian Marius
*
* @date 5/6/2018
*/

#include "functions.h"

int search_row(char key,char row[11]){
	///\fn void search_row(char key,char row[11])
    ///\brief We search the key on the row
    ///\param i Iterator
    ///\var i Iterator
	///
	
     int i;

	 ///For \var key = ' ' we return 12 . 12 will be the message_id for ' '
     if (key==' '){
        return 12;

     }
	 
	 ///We return the position if the \var key is on the row
     for(i=0;i<strlen(row);i++){
        if (key == row[i]){
            return i;
        }
     }

	 ///If the \var key is not on the row we return 11 . 
     return 11 ;
}