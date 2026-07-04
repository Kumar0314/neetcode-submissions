class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        
        s=s.strip(' ')

        arr=re.split(r" +",s)
        print(arr)
        return len(arr[len(arr)-1])
        
