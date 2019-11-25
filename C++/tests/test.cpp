//Import I/O library header
#include <iostream>
//Import string library header
#include <cstring>
//Simplifies our I/O code
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};
    int max = sizeof(arr) / sizeof(*arr);
    cout << max << '\n';

    //  int i;
    //     for(i=0; i<argc; ++i){
    //         cout << "Argument: " << i << "\n" << argv[i] << "\n";
    //     }
    return 0;
}