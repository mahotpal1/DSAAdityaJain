#include <iostream>
#include <vector>

#define MAX 100

using namespace std;

int main(){
  int arr[MAX]={21,2,4,56,32,33,34,78,769,31};
  int count=0;
  for(int i=0; i<10; i++){
    if(arr[i]%2==0){
      count++; //7
    }
  }
  cout << "Total number of Even Elements in the Array : " << count << endl;
  return 0;
}