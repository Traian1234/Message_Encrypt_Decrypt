/**
* @file functions.h
* @brief this header file will contain all required
* definitions and basic utilities functions.
*
* @author Calcan Traian Marius
*
* @date 5/6/2018
*/
#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int search_row(char key,char row[11]);
int identify( char key ,char row_1[] ,char row_2[] ,char row_3[], int *row_number);
void print_decrypted(char message[] ,char row_1[] ,char row_2[] ,char row_3[] ,int message_id[] ,int row_number[],int position);
void find_message_id(int *message_id,int position , int row_number);

#endif