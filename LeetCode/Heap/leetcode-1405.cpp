class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>maxheap;

        if(a>0){
            maxheap.push({a,'a'});
        }

        if(b>0){
            maxheap.push({b,'b'});

        }

        if(c>0){
            maxheap.push({c,'c'});
        }

        string result="";

        while(!maxheap.empty()){
            auto it=maxheap.top();
            maxheap.pop();
            
            if(result.size()>=2 &&
   result[result.size()-1]==it.second &&
   result[result.size()-2]==it.second){
                if(maxheap.empty()){
                    break;
                }

                auto iti=maxheap.top();
                
                maxheap.pop();

                result+=iti.second;
                iti.first--;

                if(iti.first>0){
                    maxheap.push({iti.first,iti.second});
                }

                maxheap.push(it);
            }else{
                it.first--;
                result+=it.second;

                if(it.first>0){
                    maxheap.push(it);
                }
            }
        }

        return result;
    }
};