#include<iostream>
using namespace std;
int* getMinSix(int* mas, int size);
void copy_mas(int* input, int* output, int size)
int main(){
    int size=0;
   
    while (size<6)
    {
        cout<<"Enter array size: ";
        cin>>size;
        if (size<6)
        {

            cout<<"Size must be six or more!!"<<endl;
        }
        
    }
    
    int* array = new int[size];

    cout<<endl;
    cout<<"Enter array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<endl<<"\t Six min elements"<<endl;
    
    int* six_min=getMinSix(array, size);
    for (int i = 0; i < 6; i++)
    {
        cout<<six_min[i]<<" ";
    }
    cout<<endl;
    delete array;
    delete six_min;
    
    
}   
void copy_mas(int* input, int* output, int size){
    for (int i = 0; i < size; i++)
    {
        output[i]=input[i];
    }
    
}

int* getMinSix(int* mas, int size){
    int* new_mas=new int[size];
    int* out_mas=new int[6];

    // скопіюємо елементи вхідного масиву
    // в новий масив, бо нам не треба змінювати вхідний масив,
    // а треба лише повернути шість мінімальних елементів.

    copy_mas(mas, new_mas, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (new_mas[j]>new_mas[j+1])
            {
                int temp = new_mas[j];
                new_mas[j]=new_mas[j+1];
                new_mas[j+1]=temp;
            }
            
        }
        
    }
    for(int i=0;i<6;i++){
        out_mas[i]=new_mas[i];
    }
    delete new_mas;
    return out_mas;
    

}
