#include <iostream>
#include <vector>
#include<ios> //used to get stream size
#include<limits> //used to get numeric limits
#include "fun.h"
using namespace std;


int main() {
  int* org;
  int SIZE, num;
  readInFile(org, SIZE);
  for(int i = 0; i < SIZE; i++){
    cout << org[i] << " ";
  }

  cout << "\nWhat number would you like to check for? ";
  cin >> num;
  if(checkNum(org, num, SIZE) == -1){
    cout << "The number does not exist in the array." << endl;
  }else{
    cout << "The number exists at index " << checkNum(org,num, SIZE) << endl;
  }

  
  try{
    addNum(org, SIZE);
    }catch(invalid_argument& e){
      cout << e.what() << endl;
    cin.clear();
    cin.ignore(numeric_limits<int>::max(), '\n');
    }
  
  for(int i = 0; i < SIZE; i++){
    cout << org[i] << " ";
  }

  cout << "\nWhat index would you like to delete? ";
  cin >> num;
  
  delNum(org, num, SIZE);

  /*cout << "\nWhat index would you like to modify? ";
  cin >> num;
  cout << "\nWhat number? ";
  int newNum;
  cin >> newNum;*/
  try{
    modNum(org, SIZE);
    }catch(invalid_argument& e){
      cout << e.what() << endl;
    cin.clear();
    cin.ignore(numeric_limits<int>::max(), '\n');
    }
  for(int i = 0; i < SIZE; i++){
    cout << org[i] << " ";
  }
}