 #include <iostream>

#include<stdio.h>

#include<string.h>
int main()
{

    int i,l;
   
 int a[10];
   
  getline(a,10);
    
  l=strlen(a);
 
   if(a[l-1]==0||a[l-1]==2||a[l-1]==6||a[l-1]==8)
  
  std::cout << "Even no" << std::endl;
   
 else
   
 cout<<"Odd No";
    
    

    
return 0;
}
