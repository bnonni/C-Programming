//Import I/O library header
#include <iostream>
//Import string library header
#include <string.h>
#include <math.h>
#include <cstdlib>
//Simplifies our I/O code
using namespace std;
  
//Pre-define variables used in program
unsigned char A = 0b00, T = 0b01, C = 0b10, G = 0b11, i = 0, j = 0, length, temp_len, compressed_bits; int gene_value;

int geneLength(string str);
int sequenceGene(string gene);


/** example for reference
 input: ./lab02.out -c ATTCGG
 output: 6 22 240
*/

int main(int argc, char *argv[])
{
  string c = " -c ", flag = argv[1], gene = argv[2];

 if(flag.compare(c))
 { 
  int gene = atoi(gene);
   //compressed_bits |= A
   // 00000000 & A => 00000000 |= 01 = 000000000
  length = geneLength(argv[2]);
  double check = ceil(length % 4);
  
  cout << check;

  if(check != 0){
    for(i = 0; i < check; i++){
      gene = gene + "0";
    }
  }
  // gene_value = sequenceGene();
  cout << length << " " << gene;
 }
 // else if(strncmp(argv[1], "-d", 2)){ }
 else
 {
  cout << "ERROR: -c or -d flag required.\n";
 }
 return 0;
}

int geneLength(string str)
{
 return str.length();
}


/** example for reference
 input: ./lab02.out -c ATTCGG
 output: 6 22 240
*/


// unsigned char sequenceGene(string gene){ return compressed_bits;}