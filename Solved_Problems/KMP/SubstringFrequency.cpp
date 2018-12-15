#include <bits/stdc++.h>
using namespace std;

void LPS(char Pattern_text[],int M,int Pattern_value_store[])
{
    int len=0;
    Pattern_value_store[0] = 0;
    int i = 1;
    while(i < M)
    {
        if(Pattern_text[i] == Pattern_text[len]){
            len++;
            Pattern_value_store[i]=len;
            i++;
        }
        else{
            if(len != 0)
            {
                len = Pattern_value_store[len-1];
            }
            else{
                Pattern_value_store[i] = 0;
                i++;
            }
        }
    }
}


void knuth_moris_pratt(char Pattern_text[],char Main_text[])
{
    int M = strlen(Pattern_text);
    int N =strlen(Main_text);

    int Pattern_value_store[M],Count_num=0;;
    LPS(Pattern_text,M,Pattern_value_store);

    int i=0,j=0;

    while(i<N)
    {
        if(Pattern_text[j]==Main_text[i])
        {
            i++;
            j++;
        }
        if(j==M)
        {
            Count_num++;
            j=Pattern_value_store[j-1];
        }
        else if(i<N && Pattern_text[j] != Main_text[i])
        {
            if(j != 0 ) j=Pattern_value_store[j-1];
            else i=i+1;
        }
    }
    cout<<Count_num<<endl;

}

int main(){
    freopen("Substring Input.txt","r",stdin);
    freopen("Substring Result.txt","w",stdout);

   int t,i;
    char Main_text[1000008],Pattern_text[1000008];
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>Main_text>>Pattern_text;
        cout<<"Case "<<i<<": ";
        knuth_moris_pratt(Pattern_text,Main_text);
    }
    return 0;
}
