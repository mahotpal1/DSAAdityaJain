#include <iostream>
#include <vector>

#define MAX 100

using namespace std;

void swap(int *a, int *b){
  int temp; 
  temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int arr[MAX]={5,3,7,8,1};
  int start=0, end=4;
  while(start<=end){
    swap(&arr[start], &arr[end]);
    start++;
    end--;
  }
  for(int i=0; i<5; i++){
    cout << arr[i] << " " << endl;
  }
  return 0;
}