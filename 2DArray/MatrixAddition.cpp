#include <iostream>

using namespace std;

int main(){
  int arr1[2][2]={1,2,3,4}, arr2[2][2]={4,5,6,7};
  cout << "Sum of given two matrix is :" << endl;
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      cout << arr1[i][j]+arr2[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}