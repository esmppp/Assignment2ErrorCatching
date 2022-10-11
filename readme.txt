Write a C++ program that can read data (let’s say file that has 10 lines, and each line contains 10 integers) from a file into an array and perform the following functions:
1)Check if a certain integer exists in the array if the number is present return the index where the number is present. 
2)A function that can modify the value of an integer when called with the index of the integer in the array and return the new value and old value back to the user.
3)A function that adds a new integer to the end of the array
4)A function which intakes an index of an array and remove the integer corresponding to that index.

This code works with 4 functions and depends on the exact input from text.txt of 100 values (10 rows of 10 as the problem describes). It reads in from "text.txt" specifically, and performs the following:
-Prompts for value to search for, and runs the function to search array for specific value. Returns -1 if not found, and returns index if found
-Prompts for number to add, then runs function to resize array and add the new value to the end of the array
-Prompts for index to remove from array, then runs function to remove the value at the index of array and resizes the array.