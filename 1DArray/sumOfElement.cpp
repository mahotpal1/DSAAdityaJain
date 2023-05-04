#include <iostream>
#include <vector>

#define MAX 100

using namespace std;

int main(){
  int arr[MAX]={1,34,65,-90,0,98,-87,-98,1234,543};
  int sum=0;
  for(int i=0; i<10; i++){
    sum += arr[i];
  }
  cout << "The sum of Elements in the array is : " << sum;
  return 0;
}