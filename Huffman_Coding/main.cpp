#include <bits/stdc++.h> 
using namespace std;

class   Int_and_Char{
    
public:
    Int_and_Char()
    {count=0;}
    
    Int_and_Char(int cnt,char ch)
    {count =cnt; character=ch;}
    
    int count;
    char character;
    
    };

int main(int argc, char **argv)
{
    vector<Int_and_Char*>v;
    string data;
    cout<<"Enter data\n";
    cin>>data;
    for(int x=0;    x < data.size();     x++)
        {  
            if(data[x] != ' '){
            Int_and_Char *obj = new Int_and_Char(1, data[x]);
            for(int y=0;    y < data.size();     y++)
            {
                if(x!=y && data[x] == data[y] && data[y] != ' ')
                  {  obj->count++;
                  data[y]=' ';}
                    
            }
            data[x]= ' ';
            v.push_back(obj);
            }
        }
        
        
        for(int x=0; x < v.size() ; x++)
        {
            for(int y=0;    y < v.size();     y++)
            {
                if(x != y && v[x] -> count > v[y] -> count)
                    swap(v[x],v[y]);
            }
        }


                for(int x=0; x < v.size() ; x++)
            cout<<v[x]->character<<" "<<v[x]->count<<endl; 
            

    return 0;
}

