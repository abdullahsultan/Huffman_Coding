#include <bits/stdc++.h> 
#include <vector>
using namespace std;


class   Int_and_Char{
    
public:
    Int_and_Char()
    {count=0; left=NULL; right=NULL;}
    
    Int_and_Char(int cnt,char ch)
    {count =cnt; character=ch; left=NULL; right=NULL;}
    
    int count;
    char character;
    Int_and_Char *left;
    Int_and_Char *right;
    
    };
    
vector<Int_and_Char*> huffmanTree(vector<Int_and_Char*> v)
{
        Int_and_Char *s1=new Int_and_Char(INT_MAX,' ');  Int_and_Char *s2 = new Int_and_Char(INT_MAX,' '); int is1,is2;
        while(v.size()!=1)
        {
            for(int x=0;x<v.size();x++)
            {
                if(s1->count < v[x]->count)
                    {s1 = v[x]; is1=x;} 
            }
            for(int x=0;x<v.size();x++)
            {
                if(s2->count < v[x]->count && v[x]->character != s1->character)
                    {s2 = v[x];is2=x;} 
            }
            vector<Int_and_Char>::iterator  i= v.begin(); 
            i= &v[is1];
            v.erase(i); 
            i = &v[is2];
            v.erase(i);
            v.insert(is1,new Int_and_Char(s1->count+s2->count,' ')); v[is1]->left=s1; v[is2]->right=s2;
            
            
        }
}


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

