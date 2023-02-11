#include <iostream>
#include <stdio.h>
using namespace std;
#include <math.h>
#include <stdlib.h>
#include<string.h>

using namespace std;


int main(){
      int n;
      cin>>n;
      for(int i=0;i<n;i++)
      {
         for(int j=n-i; j>1;j--)
         { 
          cout<<' ';
         }
          for(int j=i; j>=0;j--)
          {
          cout<<"#";
          }
          cout<<endl;
          
      }
      return 0;
}

