#include<iostream>

using namespace std;


int main(){
  
  int count = 1;
  int n;

  cout<<"enter the value of n : ";
  cin>> n;

  for(int i = 0; i<n;i++){
    for(int j = 0; j<n;j++){
      cout<<count<<" ";
      count++;
    }
    cout<<endl;
  }


}
