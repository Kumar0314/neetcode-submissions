
class TrieNode{

    Map<Character,TrieNode>children=new HashMap<>();
}

class Trie{
 
 TrieNode t= new TrieNode();

 void insert(String word){
     
    TrieNode node =t;

    for(char c:word.toCharArray()){
        node.children.putIfAbsent(c,new TrieNode());
        node=node.children.get(c);
    }
 }

 int lcp(String word,int prefixLen){
     
    TrieNode node=t;
    int i=0;

    while(i<Math.min(word.length(),prefixLen)){
         
         if(!node.children.containsKey(word.charAt(i))){
            return i;
         }

         node=node.children.get(word.charAt(i));
         i++; 
    }
    
    return Math.min(word.length(),prefixLen);
 }
}

class Solution {
    public String longestCommonPrefix(String[] strs) {
        
        if(strs.length==1){
            return strs[0];
        }
         

        int mini=0;

        for(int i=1;i<strs.length;i++){
            if(strs[mini].length()>strs[i].length()){mini=i;}
        } 

        Trie t= new Trie();

        t.insert(strs[mini]);


        int pre=strs[mini].length();

        for(int i=0;i<strs.length;i++){           
           pre=t.lcp(strs[i],pre);
        }

        return strs[0].substring(0,pre);

















    }
}