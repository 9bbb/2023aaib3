///因為range-based for迴圈必須在c++11(2011之後才能用)
///如果用c++98無法正確編輯

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(char c:s){
        if(c!='2')cout<<c;
    }
    return 0;
}
