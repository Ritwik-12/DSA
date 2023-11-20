#include<bits/stdc++.h>
using namespace std;
bool valid_paranthisis(string str){
     stack<char>st;
    char element;
    for(int i=0;i<str.length();i++){
        element=str[i];

        //chek if it is opening 
        if(element=='(' || element=='{' || element=='['){
            st.push(element);
        }
        //for closing
        else{
         
            if(!st.empty()){
                char top=st.top();
                if((element==')' && top=='(') ||
                    (element=='}' && top=='{')
                    ||(element==']' && top=='[')
                ){

                    st.pop();
                }
              else{
                return false;
            }
            }
            
            else{
                return false;
            }
        }
 
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    //string str="[{()}]{}()";
    string str="";
   
    if(valid_paranthisis(str)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
}