#include <iostream>

using namespace std;
int main() {

    int n = 4;
     cin>>n;
    int sum= 0;
     int num;
    for(int i=0;i<n;i++){
        num = sum + n;
      cout<<num;
    }
  cout<<endl;

//left half pyramid
  
int size = 5;
  // loop to print the pattern
  for (int i = 0; i < size; i++) {
    // print column
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;



//inverted half pyramid
  
   int size; cin>>size;
  for (int i = 0; i < size; i++) {
   for (int j = 0; j < i+1; j++) {
      cout << " ";
    }
    for (int k = 0; k < size - i; k++) {
      cout << "* ";
    }
    cout << "\n";
  }





 // heart star pattern
  int size;
  cin>>size;

  for (int i = size / 2; i < size; i += 2) {
    // print first spaces
    for (int j = 1; j < size - i; j += 2) {
      cout << " ";
    }
    // print first stars
    for (int j = 1; j < i + 1; j++) {
      cout << "*";
    }
    // print second spaces
    for (int j = 1; j < size - i + 1; j++) {
      cout << " ";
    }
    // print second stars
    for (int j = 1; j < i + 1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  // lower part
  // inverted pyramid
  for (int i = size; i > 0; i--) {
    for (int j = 0; j < size - i; j++) {
      cout << " ";
    }
    for (int j = 1; j < i * 2; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;

}