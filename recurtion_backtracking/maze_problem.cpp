#include<iostream>
using namespace std;
void maze(string s,int row,int col){
    if(row == 1 && col == 1){
        cout<<s<<endl;
        return;}
        if(row >1){
            maze((s+'d'),row-1,col);
        }
        if(col >1){
            maze((s+'r'),row,col-1);
        }

    }
    


 /*int count(int row,int col){
    //base case
    if(row == 1 || col == 1)    return 1;
    int left = count(row-1,col);
    int right = count(row,col-1);
    return (left+right);
}
*/
int main(){
    int row;
    int col;
    string s ="";
    cout<<"enter row and col"<<endl;
    cin>>row>>col;
    // int res = count(row,col);
    // cout<<res<<endl;
    maze(s,row,col);

}