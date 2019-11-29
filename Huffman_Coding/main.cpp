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
         left=NULL; right=NULL; c=' ';
        }
    
    };
    
Huffman_Tree* tree_maker(Huffman_Tree base_array[], Huffman_Tree *pointer_array[], int size)
{
    int sum=0;
    for(int x=0;x<size;x++)
        sum = sum + base_array[x].d;
    Huffman_Tree *root;
    Huffman_Tree *temp;
    int first,second,first_index,second_index;
    while(true){
    first = second = INT_MAX;  
    for (int i = 0; i < size ; i ++)  
    {
        if(pointer_array[i] != NULL)
            if (pointer_array[i]->d < first)  
            { 
                second = first;  second_index = first_index;
                first = pointer_array[i]->d;  first_index = i;
            }
    }
    
    temp = new Huffman_Tree(pointer_array[first_index]->d + pointer_array[second_index]->d,' ');
    temp->left = & base_array[first_index]; temp->right = & base_array[second_index];
    if(pointer_array[first_index]->d + pointer_array[second_index]->d == sum)
        {root = temp; return root;}
    
    pointer_array[first_index] = NULL ; pointer_array[second_index] = NULL ;
    
    pointer_array[first_index] = temp;
    
    }  
}

void traversal_Data_Extraction(Huffman_Tree *root)
{
   if(root->c!=' ')
    {
        
    }
 
}





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
    
    Huffman_Tree *root;
    root = tree_maker(base_array,pointer_array,size);
    cout<<"Done final";
    

    return 0;
}

