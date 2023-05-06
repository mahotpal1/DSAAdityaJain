#include <iostream>

using namespace std;

int main(){
  int arr[5][5]={1,2,3,32,23,45,54,98,89,11,22,33,44,55,66,77,88,99,98,65,43,65,90,21,14};
  for(int i=0; i<5; i++){
    cout << "|";
    for(int j=0; j<5; j++){
      cout << arr[i][j];
      if(j!=4){
        if(arr[i][j]<10){
          cout << "  "; 
        }
        if(arr[i][j]>=10){
          cout << " ";
        }
      }
    }
    cout << "|" << endl;
  }
  return 0;
}