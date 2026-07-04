class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        ans=[-1]*len(arr)
        i=len(arr)-1
        great=-1
        for num in reversed(arr):
            arr[i]=great    
            great=max(great,num)
           
            i-=1

        return arr      