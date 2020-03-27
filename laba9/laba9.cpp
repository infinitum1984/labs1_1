#include<iostream>
#include<string>
#include<vector>
#include <fstream>

using namespace std;
enum STATUS{excellent, bad, none};

STATUS getStudentStatus(string student){
    bool is_none=false;
    for(int i=student.length();i>=student.length()-10;--i){
        if (isdigit(student[i]))
        {
            string num;
            num.push_back(student[i]);
            int mark=stoi(num);
            if (mark<=2)
            {
                return bad;
            }
            if (mark<5)
            {
                is_none=true;
            }
            
            
            
        }
    }
    if (is_none)
    {
        return none;
    }
    
    return excellent;
}
int main(){
    string filename;
    vector<string> data;
    cout<<"Введіть ім'я файлу: ";
    cin>>filename;
    ifstream in(filename );

    while (!in.eof())
    {
        string tmp;
        getline(in,tmp);
        data.push_back(tmp);
    }
    in.close();

    int num_excelent=0;
    int num_bad=0;
    for (int i = 0; i < data.size(); i++)
    {
        STATUS cur = getStudentStatus(data[i]);
        switch (cur)
        {
        case excellent:
            num_excelent++;
            break;
        case bad:
            num_bad++;
            break;
        default:
            break;
        }
    }
    cout<<endl;
    cout<<"Кількість відмінників: "<<num_excelent<<endl;
    cout<<"Кількість двієчників: "<<num_bad<<endl;
    cout<<endl;
        
    
}