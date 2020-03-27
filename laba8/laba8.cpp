#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string input;
    cout<<"Введіть речення: ";    
    getline(cin,input);
    vector<string> out_arr;
    int index_start=0;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i]==' '  &&  i!=input.size()-1)
        {
            if (index_start!=0)
            {
                ++index_start;
            }
            
            out_arr.push_back(input.substr(index_start,i-index_start));
            index_start=i;
            
        }
        
    }
    out_arr.push_back(input.substr(index_start+1,input.length()));
    cout<<endl;
    cout<<"\tПеретворене речення"<<endl;

    for (int i = out_arr.size()-1; i>=0; i--)
    {
        cout<<out_arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
   
}