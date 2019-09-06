//Import I/O library header
#include <iostream>
//Import string library header
#include <string.h>
//Simplifies our I/O code
using namespace std;
  
//Pre-define variables used in program
int A = 0b00, T = 0b01, C = 0b10, G = 0b11, i = 0, j = 0, len, temp_len, gene_arr[] = {};
unsigned int gene_val = 0b00;

int geneLength(string str);
int sequenceGene(string gene);

/** example for reference
 input: ./lab02.out -c ATTCGG
 output: 6 22 240
*/


int main(int argc, char *argv[])
{
  string c = " -c ", gene = argv[1];
 if(gene.compare(c))
 {
  len = geneLength(argv[2]);
  temp_len = len;
  while(j <= len){
   gene_val = sequenceGene(argv[2]);
   gene_arr[j] = gene_val;
   j++;
  }
  cout << len << " " << gene_arr[0] << " " << gene_arr[1] << "\n";
 }
 // else if(strncmp(argv[1], "-d", 2)){}
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

int sequenceGene(string gene)
{
 unsigned int val = 0b0000;
 while(i <= temp_len)
 {
   if(gene[i] == A)
   {
    val += A;
   }else if(gene[i] == T)
   {
    val += T;
   }else if(gene[i] == C)
   {
    val += C;
   }else
   {
    val += G;
   }
  
  i++;
 }
 temp_len -= 4;
 return val;
}