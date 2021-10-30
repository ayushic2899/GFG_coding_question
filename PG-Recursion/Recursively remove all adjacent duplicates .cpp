class Solution{
public:
    string remove(string s){
           // code here
       if(s=="") return "";
       
       int cnt=0;
       
       for( int i=0 ; i<s.size()-1 ;i++)
       {
           if(s[i]!=s[i+1]) cnt++;
       }
       
       if(cnt == s.size()-1) return s;
       
       int i=0;
       string ans="";
       
       while( i< s.size()-1)
       {
           if(s[i] != s[i+1])
           {
               ans.push_back(s[i]);
               i++;
               
               continue;
           }
           
           int st=i;
           
           while(i< s.size() && s[i] == s[st])
           {
               i++;
           }
           
       } 
       
       if(i == s.size() - 1)
       {
            ans.push_back(s[i]);
               i++;
       }

       return remove(ans);
      
    }
};
