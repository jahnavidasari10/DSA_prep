class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) { 
        vector<pair<int  , int>> ar(n) ;
        for(int i = 0 ; i< n ; i++){
            ar[i] = {a[i],i} ;
        }
        sort(ar.begin() , ar.end()) ;
        int ans = 0 , i = ar[0].second ;
        for(int j = 0 ; j< n ; j++){
            i = min(ar[j].second , i) ;
            ans = max(ar[j].second - i , ans) ;
        }
        return ans ;
    }
};