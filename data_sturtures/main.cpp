//
//  main.cpp
//  data_sturtures
//
//  Created by fabricio policarpo on 12/5/20.
//

#include <iostream>
using namespace std;

//ilustrating




void print(int n){
       if(n > 0){
        cout<<n<<endl;
        print(n-1);
    }
}

// in print2 printing will be done at returning time or when the command goes bcak to the previous call
// n - 1 and conditional checking will be done for 3,2,1,0 and lastly when retunring it will print
// the output hence will be 1, 2, 3,
void print2(int n){
    if(n > 0){
        print(n-1);
        cout<<n<<endl;
    }
}

int main(int argc, const char * argv[]) {
    int sum = 0;
    int arr[] = {1,2,3,4,5 };
    for(auto x:arr)
    {
        sum = sum +x;
    }
     int number = 3;
     print(number);
//     print2(3);
    
    return 0;
}
