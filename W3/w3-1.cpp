///�]��range-based for�j�饲���bc++11(2011����~���)
///�p�G��c++98�L�k���T�s��

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
