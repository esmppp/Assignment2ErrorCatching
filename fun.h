#pragma once
#include <iostream>
#include <fstream>
using namespace std;

int readInFile(int* &org, int &SIZE);
//pre: takes in an int* of an array by address, and an int by address
//post: Reads in file into the array, and sets the value of SIZE

int checkNum(int *org, int numSearched, int SIZE);
//pre: takes in the int* of an array, the number to search for, and the size of the array
//post: iterates through array looking for number. Returns index if found, returns -1 if not found

void addNum(int* &org, int &SIZE);
//pre: takes in int* of array by address, int newNum to add to array, and the size of the array by address
//post: increments size by 1, extends array, and adds newNum to the end of the array

void delNum(int* &org, int index, int &SIZE);
//pre: takes in int* of array by address, int index of number to remove, and the int size of array by address
//post: decrements array by 1, removes value at index, and updates the array.

void modNum(int* &org, int &SIZE);
//pre: takes in int* of array by address, int index of number to remove, the int size of array by address, and the new number to add
//post: updates the array at given index for new value