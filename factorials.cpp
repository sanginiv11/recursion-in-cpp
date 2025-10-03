#include <iostream>
int funf(int a){
    if (a==1){
        return 1;
    }
    else{
        return (a*funf(a-1));
    }
}
int main(){
    int d;
    std::cout<<"enter the value ";
    std::cin>>d;
    std::cout<<"output is : "<<funf(d);

return 0;
}
//OUTPUT
//enter the value 11
//output is : 39916800