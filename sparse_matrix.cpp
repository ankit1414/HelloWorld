#include<iostream>
using namespace std;


struct sparse{

    int x;
    int y;
    int data;

};
void display(struct sparse s[] , int p , int q){
    cout<<"\n\nDisplaying the Matrix : \n";
    int k=0;
    for(int i=0; i<p; i++){

        for(int j=0; j<q; j++){

            if(i == s[k].x && j == s[k].y){
                cout<<s[k++].data<<" ";
            }
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }




}
int main(){

    int n;
    int p, q;
    cout<<"Enter the dimension of the matrix: (i and j): ";
    cin>>p>>q;
    cout<<"Enter the number of non zero elements : ";
    cin>>n;


    struct sparse s[n];
    int k = 0;

    cout<<"\nEnter the elements of the matrix:\n";
    for(int i=0; i<p; i++){

        for(int j=0; j<q; j++){
            int temp;
            cin>>temp;
            if(temp != 0){
                s[k].x = i;
                s[k].y = j;
                s[k++].data = temp;
            }
        }
    }

    display(s , p , q);



    return 0;
}