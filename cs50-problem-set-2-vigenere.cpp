#include<iostream>
using namespace std;
int main(){
  string password,key,c_pass;
  int i = 0,p = 0,j = 0;
  cout <<"請輸入密碼";
  cin >> password;
  cout <<"請輸入密鑰";
  cin >> key; 
  while ( password[i] != 0){
    i++;
  }
  while ( key[p] !=0)
  {
    int num1 = key[p]-'a';
    p++;
  if((int)password[j] <= 'z' && (int)password[j] >= 'a')
    {
      c_pass[j] = ((int)password[j] + num1 - 'a') % 26 + 'a';
      j++;
    }
  else if((int)password[j] <= 'Z' && (int)password[j] >= 'A')
    {
      c_pass[j] = ((int)password[j] + num1 - 'A') % 26 + 'A';
      j++;
    }
  else
    {
      c_pass[j] = password[j];
      j++;
    }        
  }
  cout << "密文為:";
  for (int k=0; k < i; k++)
  {
    cout << c_pass[k];
  }
}
