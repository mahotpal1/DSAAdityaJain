#include <iostream>

using namespace std;

int main(){
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  cout << "Primary Diagonal Elements : ";
  for(int i=0; i<3; i++){
    // for(int j=0; j<3; j++){
    //   if(i==j){
    //     cout << arr[i][j] << " ";
    //     break;
    //   }
    // }
    cout << arr[i][i] << " ";
  }
  cout << "\nSecondary Diagonal Elements : ";
  int k=2;
  for(int i=0; i<3; i++){
    cout << arr[i][k] << " ";
    k--;
  }
  return 0;
}