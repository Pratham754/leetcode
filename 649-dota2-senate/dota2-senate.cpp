class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> rq,dq;

        for(int i=0;i<senate.size();i++){
            (senate[i] == 'R') ? rq.push(i) : dq.push(i);
        }

        while(!rq.empty() && !dq.empty()){
            int rid = rq.front(), did = dq.front();
            rq.pop(); dq.pop();
            (rid < did) ? rq.push(rid + senate.size()) : dq.push(did + senate.size());
        }
        return (rq.size() > dq.size()) ? "Radiant" : "Dire" ; 
    }
};