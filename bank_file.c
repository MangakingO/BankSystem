//Define neccessary libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

//Define structures for the user data we will be utilizing

struct user {

    char username[50]; //varaible to store username input
    char password[50]; //varriable to store password input
    char firstName[50]; //variable to store first name input
    char lastName[50]; //variable to store last name input
    char address[50]; //variable to store address input
    int date, month, year; // variable to store DOB
    char phoneNumber[15]; // variable to store phone number 
    float balance; //variable to store account balance
    char typeaccount[20]; // variable for account type 
};

//Define structure named money to store transaction information

struct money {
    char usernameTo[50];   // variable for username of recipient
    char usernameFrom[50]; // variable for username of sender
    long int amountTrans; // variable for transaction amount
};