class Solution {
public:
    string maximumBinaryString(string binary) {
        int t = 0,tt=0;
        string k ="",kk="";
        for(int i = 0 ; i < binary.size(); i++)
            {
            if(binary[i]=='0'){t=i;break;}
                
            }
        for(int i = 0 ; i < binary.size(); i++)
            {
            if(binary[i]=='0'){tt++;}
                
            }
        if(tt==0){return binary;}
      string pp="";
        for(int i = 0 ; i <binary.size();i++)
        {
            pp+='1';
        }
        int p = tt+t-1;
         pp[p]='0';
        return pp;
    }
};
