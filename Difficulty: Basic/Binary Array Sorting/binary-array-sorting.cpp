//{ Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int arr[], int N)
    {
       int i = 0;
       int j = N-1;
       while(i<j)
          {
              if(arr[i]==1 && arr[j]==0)
              {
                  swap(arr[i],arr[j]);
                  i++;
                  j--;
              }
              
           else if(arr[i]==1 && arr[j]==1)
              {
                  j--;
              }
              else if(arr[i]==0 && arr[j]==1)
              {
                  i++;
                  j--;
              }
              
              else{i++;}
              
          }
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}




// } Driver Code Ends