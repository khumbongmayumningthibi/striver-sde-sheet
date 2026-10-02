#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  vector <int> num(n);
cout<<"Enter"<<n<< "numbers:";
  for(int i=0;i<n;i++){
    cin>>num[i];
  }
  int target;

cout<<"Enter target:";
  cin>>target;

  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if (num[i]+num[j]==target){
     cout<<"Found:"<<i<<""<<j;
     return 0;
      }}}
      cout<<"Not found";
      return 0;
    }

