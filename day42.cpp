class Solution {
public:
    double trimMean(vector<int>& arr) {
        int i, k;
        double mean;
        sort(arr.begin(), arr.end());
        k = 0.05*arr.size();
        for(i=0 ; i<k ; i++)
        {
            arr.erase(arr.begin()+0);
            arr.erase(arr.begin()+arr.size()-1);
        }
        mean = (double)accumulate(arr.begin(), arr.end(), 0)/arr.size();
        return mean; 
    }
};
