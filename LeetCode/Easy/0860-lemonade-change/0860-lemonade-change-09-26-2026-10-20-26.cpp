class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int five=0 , ten=0;

        for(int i=0;i<n;i++){
            int money = bills[i];
            if(money==5) five++;
            else if(money==10){
                if(five>0){
                    five--;
                    ten++;
                    }
                else return false;
            }
            else{
                if(ten>0){   //choice 1
                    ten--;
                    if(five>0) five--;
                    else return false;
                }
                else{   //choice 2
                    if(five<3) return false;
                    else five = five -3;
                }
            }
        }
        return true;
    }
};