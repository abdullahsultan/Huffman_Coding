#include <bits/stdc++.h> 
#include <vector>
using namespace std;

class Huffman_Tree{

public:
    int d;
    char c;
    Huffman_Tree *left;
    Huffman_Tree *right;
    
        Huffman_Tree(int data, char cha)
        {
            d=data; c=cha;
            left=NULL; right=NULL;
        }
        Huffman_Tree()
        {
         left=NULL; right=NULL;
        }
    
    };





int main()
{
    string raw_data = "abdullah";
    
    string my_data = "abdulh";
    int freq[] = {2,1,1,1,2,1};
    int size = sizeof(freq)/sizeof(freq[0]);
    Huffman_Tree base_array[size];
    Huffman_Tree *pointer_array[size];
    for(int x=0 ; x < size ; x++)
    {
        base_array[x].c = my_data[x];
        base_array[x].d = freq[x];
        pointer_array[x] = &base_array[x];
    }
    

    
    


    return 0;
}

