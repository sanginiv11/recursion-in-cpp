#include <iostream>
using namespace std;
void funf(char *a){
    if (*a != '\0'){
        funf(a+1);
        cout << *a;
    }

    
}
int main(){
    char d[30] ;
    cout<<"enter the value ";
    cin>>d;
    cout<<"output is : ";
   funf(d);

return 0;
}
//OUTPUT
//enter the value SANGINI
//output is : INIGNAS