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
         
        }
    
    };





int main(int argc, char **argv)
{
    string raw_data = "abdullah";
    
    string data = "abdulh";
    int freq[] = {2,1,1,1,2,1};
    Huffman_Tree base_array[sizeof(freq)];
    cout<<sizeof(freq)/sizeof(freq[0]);

    return 0;
}

