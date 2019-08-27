#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void MinWindow(string str){
    int x = 0;
     for(int i = 0; i < str.length(); i++){
        for(int j = i+1; j < str.length(); j++){
            if(str[i] == str[j]){
                str[i] = NULL;
            }
        }
    }

    while(str[x]!='\0')
    {
         if(str[x] == NULL){
            x++;
         }
         else{
              cout << str[x];
         x++;
         }

    }

}


int main()
{
    char str[100];
    gets(str);
    MinWindow(str);
    return 0;
}
