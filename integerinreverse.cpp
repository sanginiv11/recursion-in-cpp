#include <iostream>
#include <string.h>

void print_rev(int i){
    if(i>0) 
    {
        std::cout<<(i%10);
        print_rev(i/10); 
    }
}
    
int main(){
    int i;
    std::cout<<"Enter the number: ";
    std::cin>>i;
    std::cout<<"The reverse of the number is: ";
    print_rev(i); 
    return 0;
}


/*Output:
Enter the number: 1234567
The reverse of the number is: 7654321
*/