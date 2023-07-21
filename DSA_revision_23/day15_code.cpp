// #include<iostream>
// using namespace std;
//     int foo(int x){
//         return 3;
//     }
// int main(){
//     cout<<3*foo(5)<<endl;
//     cout<<foo(5);
//     foo(5);
// return 0;
// }


//printing the jaggered array
    // #include<bits/stdc++.h>
    // using namespace std;
    // int main(){
    //     cout<<"Enter the number of rows"<<endl;
    //     int row;
    //     cin>>row;    
    //     //dynamic memeory allocation for the rows
    //     int **arr = new int*[row];
    //     int *v = new int[row];
    //     //for each row take col
    //     for(int i = 0; i<row; i++){
    //         cout<<"Enter the number of the column in row: "<<i+1<<endl;
    //         int col;
    //         cin>>col;
    //         v[i] = col;
    //         arr[i] = new int [col];
    //         cout<<"Enter the element in the row:"<<i+1<<endl;
    //         for(int j = 0; j<col; j++){
    //             cin>>arr[i][j];
    //         }
    //     }
    //     //printing the output we should know number of col of each rows
    //     for(int i = 0; i<row; i++){
    //         for(int j = 0; j<v[i]; j++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // return 0;
    // }


//printing the fibbonacci series
    // #include<iostream>
    // using namespace std;
    // int fibonacci(int n){
    //     if(n<=1){
    //         return n;
    //     }
    //     return fibonacci(n-1)+fibonacci(n-2);
    // }
    // int main(){
    //     // the nth fibbonaci number
    //     cout<<"Enter the number : ";
    //     int n;
    //     cin>>n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout<<fibonacci(i)<<" ";
    //     }
    // return 0;
    // }

//write a program to say digit
    #include<bits/stdc++.h>
    using namespace std;
    void sayDigit(string arr[],int n){
        //get digit
        if(n==0){
            return;
        }
        int digit = n%10;
        sayDigit(arr,n/10);
        cout<<arr[digit-1]<<" ";
    }
    int main(){
        int n;
        cout<<"Enter the number: " <<endl;
        cin>>n;
        string arr[] = {
            "one", "two", "three", "four", "five", "six", "seven","eight", "nine"
        };
        sayDigit(arr,n);
    return 0;
    }