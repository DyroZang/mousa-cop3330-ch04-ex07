/*
*  UCF COP3330 Fall 2021 Assignment 5 Solution
*  Copyright 2021 Gabriel Mousa
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void parser(double num1, double num2, char operation[1]);
double toDouble(char num[5]);

int main() {

    double num1, num2;
    char sNum1[6], sNum2[6];
    char operation[2];

    //Get the values
    cin >> sNum1 >> sNum2 >> operation;

    //Convert spelled out to ints
    num1 = toDouble(sNum1);
    num2 = toDouble(sNum2);

    //Parse the operation and do the operation
    parser(num1, num2, operation);

} 

void parser(double num1, double num2, char operation[1]){

    //Parsing the operation entry and outputting based on the operation
    
    if(strncmp(operation, "+", 1) == 0){
        cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2;
    } else if(strncmp(operation, "-", 1) == 0){
        cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2;
    } else if(strncmp(operation, "*", 1) == 0){
        cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2;
    } else if(strncmp(operation, "/", 1) == 0){
        cout << "The quotient of " << num1 << " and " << num2 << " is " << num1 / num2;
    }
}

double toDouble(char num[6]){
    //Turning the spelled out number into an integer, or keep it the same
    if(strncmp(num, "one", 5) == 0){
        return 1;
    } else if(strncmp(num, "two", 5) == 0){
        return 2;
    } else if(strncmp(num, "three", 5) == 0){
        return 3;
    } else if(strncmp(num, "four", 5) == 0){
        return 4;
    } else if(strncmp(num, "five", 5) == 0){
        return 5;
    } else if(strncmp(num, "six", 5) == 0){
        return 6;
    } else if(strncmp(num, "seven", 5) == 0){
        return 7;
    } else if(strncmp(num, "eight", 5) == 0){
        return 8;
    } else if(strncmp(num, "nine", 5) == 0){
        return 9;
    } else if(strlen(num) == 1){
        try{
            return stod(num); 
        }catch(...){
            cout << "Invalid Entry";
            exit(EXIT_FAILURE);
        }
    } else{
        cout << "Invalid Entry";
        exit(EXIT_FAILURE);
    }
    
}