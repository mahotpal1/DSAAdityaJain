#include <iostream>
#include <vector>

#define MAX 100

using namespace std;

int main(){
  int arr[MAX];
  for(int i=0; i<10; i++){
    cin >> arr[i];
  }
  int max = INT_MIN, count=0;
  for(int i=0; i<10; i++){
    if(max<arr[i]){
      max = arr[i];
    }
  }
  cout << "MAximum element in Array is : " << max << endl;
  return 0;
}