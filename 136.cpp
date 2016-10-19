class Solution {
public:
    int singleNumber(int A[], int n) {
        if(n <= 0) return 0;
        if(n == 1) return A[0];
        
        int j = 1;
        sort(A,A+n);
        for(int i = 0; i < n-1; i++)
        {
            if(A[i] == A[i+1])
                j++;
            else
            {
                if(j < 2 ) return A[i];
                j = 1;
            }
        }
        return A[n-1];
    }
};
