class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        //ESWAR
         int sum=0;
         for(string c:operations){
            if(c=="++X" ||c=="X++")sum+=1;
            else sum+=-1;
         }
         return sum;
    }
};