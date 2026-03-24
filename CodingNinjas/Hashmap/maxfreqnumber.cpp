int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here

    unordered_map<int,int>count;

    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
    }

    int maxi=INT_MIN;

    for(auto i:count){
        if(i.second>maxi){
            maxi=i.second;
        }

    }


    for(int i=0;i<n;i++){
        if(count[arr[i]]==maxi){
            return arr[i];
        }
    }
}