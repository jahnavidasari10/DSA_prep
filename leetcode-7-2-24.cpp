

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
multimap<int,char> mpp2;
for(auto it:s)
mpp[it]++;
for(auto it:mpp)
mpp2.insert({it.second,it.first});
string ans="";
for(auto it:mpp2)
{
string temp="";
int count=it.first;
while(count)
{
temp+=it.second;
count-=1;
}
ans=temp+ans;
}
return ans;
        
    }
};
