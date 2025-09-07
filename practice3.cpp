#include<iostream>
using namespace std;
class SpiralPattern{
    int m,n;
    int **arr;
    
    public:
    SpiralPattern(int rows,int cols,int **matrix){
          m=rows;
          n=cols;
          arr=new int*[m];
          for(int i=0;i<m;i++){
            arr[i]=new int[n];
            for(int j=0;j<n;j++){
                arr[i][j]=matrix[i][j];
            }
          }
    }
    void pattern(){
        int row1=0,row2=n-1,col1=0,col2=m-1;
        while(col1<=col2&&row1<=row2){
            for(int i=row1;i<=row2;i++){
               cout<<arr[col1][i]<<" ";
            }
            col1++;
            for(int i=col1;i<col2;i++ ){
                cout<<arr[i][row2]<<" ";
            }
            row2--;
            for(int i=row2;i>=row1;i--){
               cout<<arr[col2][i]<<" ";
            }
            col2--;
            for(int i=col2;i>=col1;i--){
               cout<<arr[i][row1]<<" ";
            }
            row1++;
        }
    }
    ~SpiralPattern(){
        for(int i=0;i<m;i++){
            delete[] arr[i];
        }
        delete[] arr;
    }

};
int main(){
    int m,n,input;
    cout<<" enter number of rows:";
    cin>>m;
    cout<<"Enter the number of columns:";
    cin>>n;
    cout<<"Enter the element in matrix:";
    int **matrix=new int*[m];
    for(int i=0;i<m;i++){
        matrix[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    SpiralPattern obj1(m,n,matrix);
    obj1.pattern();
    for(int i=0;i<m;i++){
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}