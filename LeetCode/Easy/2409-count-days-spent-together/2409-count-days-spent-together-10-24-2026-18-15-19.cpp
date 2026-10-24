class Solution {
public:
int findDayOfYear(string date, vector<int> &cumMonthDays){
    int month = stoi(date.substr(0,2));
    int days= stoi(date.substr(3));

    return cumMonthDays[month-1]+ days;
}
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
        vector<int> monthDays={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        vector<int> cumMonthDays(13);
        //1st Index = Jan;
        //2nd Index = Feb;

        cumMonthDays[1]=31;  //Jan;
        for(int i=2;i<=12;i++){
            cumMonthDays[i] = cumMonthDays[i-1] + monthDays[i-1];
        }

        int arriveAliceDay= findDayOfYear(arriveAlice,cumMonthDays);
        int leaveAliceDay=  findDayOfYear(leaveAlice,cumMonthDays);
        int arriveBobDay= findDayOfYear(arriveBob,cumMonthDays);
        int leaveBobDay=  findDayOfYear(leaveBob,cumMonthDays);

    int overLapDays= min(leaveAliceDay,leaveBobDay) - max(arriveAliceDay,arriveBobDay) +1;

    if (overLapDays<0) return 0;
    else return overLapDays;
    }
};