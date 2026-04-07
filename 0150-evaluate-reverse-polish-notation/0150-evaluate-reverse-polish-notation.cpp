class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                int top1=s.top();
                s.pop();
                int top2=s.top();
                s.pop();
               int  sum=top1+top2;
                s.push(sum);
            }
            else if(tokens[i]=="-"){
                int top1=s.top();
                s.pop();
                int top2=s.top();
                s.pop();
               int  sum=top2-top1;
                s.push(sum);

            }
             else if(tokens[i]=="*"){
                int top1=s.top();
                s.pop();
                int top2=s.top();
                s.pop();
               int  sum=top1*top2;
               s.push(sum);
            }
             else if(tokens[i]=="/"){
                int top1=s.top();
                s.pop();
                int top2=s.top();
                s.pop();
                int sum=top2/top1;
                s.push(sum);
            }
            else{
                int n=stoi(tokens[i]);
                s.push(n);
            }
        }
        return s.top();
    }
};