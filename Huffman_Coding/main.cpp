#include <iostream>
#include <vector>
using namespace std;

class   Int_and_Char{
    
    Int_and_Char()
    {count=0;}
    
    int count;
    char character;
    
    };

int main(int argc, char **argv)
{
    vector<>
    string data;
    cout<<"Enter data\n";
    cin>>data;
    int size = data.size();     int count=0;
    for(int x=0;    x<size;     x++)
        {
            for(y=0;    y<size;     y++)
            {
                if(x!=y && data[x] == data[y])
                    count++;
            }
        }
    return 0;
}

