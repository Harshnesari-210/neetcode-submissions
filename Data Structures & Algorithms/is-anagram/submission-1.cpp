class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        int arr1[126]={0};

        if(n1!=n2) return false;

        for(auto i:s){
            arr1[i]++;
        }

        for(auto i:t){
            arr1[i]--;
        }

        for(int i=0;i<126;i++){
            if(arr1[i]>=1) return false;
        }

        return true;

    }
};
