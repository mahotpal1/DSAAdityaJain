#include <iostream>
#include <vector>

#define MAX 100

using namespace std;

int main(){
  int arr[MAX]={1,4,2,3,6};
  int count=0, sum=5;
  for(int i=0; i<5; i++){
    for(int j=i+1; j<5; j++){
      if(arr[i]+arr[j] == sum){
        count++;
      }
    }
  }
  cout << "Total Pairs with sum " << sum << " is : "<< count << endl;
  return 0;
}