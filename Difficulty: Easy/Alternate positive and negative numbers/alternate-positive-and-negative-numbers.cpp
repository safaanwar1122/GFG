//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0)
            {
                pos.push_back(arr[i]);
            }
            else {
                neg.push_back(arr[i]);
            }
        }
        
        int x=0; // index for positive vector
        int y=0; // index for negative vector
        int i=0; //index for original vector
       
        int a=pos.size(); // size of positive vector 
        int b=neg.size(); // size of negative vector 
        while(i<arr.size())
        {
            if(x!=a)
            {
                arr[i]=pos[x];
                i++;
                x++;
            }
            if(y!=b)
            {
                arr[i]=neg[y];
                i++;
                y++;
            }
        }
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends