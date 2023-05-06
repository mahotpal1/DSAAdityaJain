#include <iostream>

using namespace std;

int main(){
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  int x=4;
  bool flag = false;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(arr[i][j]==x){
        flag=true;
        cout << "Element Found at loc : (" << i << ", " << j << ")" << endl;
        break;
      }
    }
  }
  if(!flag){
    cout << "Element not found in Matrix!" << endl;
  }
  return 0;
}