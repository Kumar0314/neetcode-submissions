class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        
        n=len(arr)
        ans=[0]*n

        for i in range (n):

            right=-1

            for j in range(i+1,n):

                right=max(right,arr[j])

            ans[i]=right

        return ans     