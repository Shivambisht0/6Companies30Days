
bool factorornot(string s1,string s2){
    string temp="";
    while(s1.length()>temp.length())
    {
        temp=temp+s2;
    }
    if(temp==s1)
    {
       return true;
        
    }
    else return false;
    
}
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
         int l1=str1.length();
           int l2=str2.length();
        int min =0;
        string s1,s2;
        if(l1<l2)
        {
            s2=str1;
            s1=str2;
            min=l1;
        }
        else
        {
            s1=str1;
            s2=str2;
            min=l2;
        }
        
        int i=0;
        string factor="";
        while(i<min)
        {
            string prefix=s2.substr(0,i+1);
            bool isfactorofS1=factorornot(s1,prefix);
                 bool isfactorofS2=factorornot(s2,prefix);
                 if(isfactorofS1 && isfactorofS2)
                 {
                     factor=prefix;
                 }
                     i++;    
        }
        
        
        return factor;
        
        
    }
};
