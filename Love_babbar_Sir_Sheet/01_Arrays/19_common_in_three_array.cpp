#include<bits/stdc++.h>
using namespace std;
vector<int>solve(int A[], int B[], int C[], int n1, int n2, int n3){
    int i = 0, j = 0, k = 0;
    int p1, p2, p3;
    p1 = p2 = p3 = INT_MAX;
    vector<int>ans;
    while(i<n1 && j<n2 && k<n3){
        while(p1==A[i] && i<n1){
            i++;
        }
        while(p2==B[j] && j<n2){
            j++;
        }
        while(p3==C[k] && k<n3){
            k++;
        }
        if(A[i]==B[j] && A[i]==C[k]){
            ans.push_back(A[i]);
            p1 = A[i];
            p2 = B[j];
            p3 = C[k];
            i++;j++; k++;
        }else if(A[i]<B[j] && A[i]<C[k]){
            p1 = A[i];
            i++;
        }else if(B[j]<C[k] && B[j]<C[k]){
            p2 = B[j];
            j++;
        }else if(C[k]<A[i] && C[k]<B[j]){
            p3 = C[k];
            k++;
        }
    }
    return ans;
}
int main(){
    int A[] = {1,5,10,20,40,80};
    int B[] = {6,7,20,80,100};
    int C[] = {3,4,15,20,30,70,80,120};
    vector<int>ans = solve(A, B, C, sizeof(A)/sizeof(int), sizeof(B)/sizeof(int), sizeof(C)/sizeof(int));
    for(auto val: ans){
        cout<<val<<" ";
    }

    return 0;
}