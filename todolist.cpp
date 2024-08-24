#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    //inliazation of vector string string to list operation and task
vector<string>todo;
string req;
cout<<"Enter your request:";
getline(cin,req);
while(true){
    if(req=="quit"){
        cout<<"You quit app";
        break;
    }

    if(req=="list"){
        cout<<"---------"<<endl;
        for(int i=0;i<todo.size(); i++){
            cout<<todo[i]<<endl;
        }
        cout<<"--------"<<endl;
    }

    else if(req=="add"){
        string task;
        cout<<"enter your task you want to add"<<endl;
        getline(cin,task);
        todo.push_back(task);
        cout<<"Tasked added succesfully"<<endl;
    }

    else if(req=="delete"){
        int idx;
        cout<<"enter the oder  of task you want to delete="<<endl;
        cin>>idx;
        todo.erase(todo.begin()+idx);

        cout<<"task delete succesfully"<<endl;
    
    }
else {
    cout<<"enter wrong request"<<endl;
}
    cout<<"Enter your request="<<endl;
getline(cin,req);

}
    return 0;
}
