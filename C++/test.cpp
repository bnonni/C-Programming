//Import I/O library header
#include <iostream>
//Import string library header
#include <string.h>
//Simplifies our I/O code
using namespace std;
  
int main(int argc, char *argv[])
{
    cout << strncmp(argv[1], "-c", 2);
 
//  int i;
//     for(i=0; i<argc; ++i){
//         cout << "Argument: " << i << "\n" << argv[i] << "\n";
//     }
    return 0;
}