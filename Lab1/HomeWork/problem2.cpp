#include<iostream>
using namespace std;

class batsman{
    private:
    
    int batsmanCode,total_innings,notout_innings;
    double total_runs;
    string name;
    
        double calcavg(){
        double batting_avg;
        return batting_avg= total_runs/(total_innings-notout_innings);
    }
    public:

    void readdata(int a,int b,int c,int d,string n){
    batsmanCode=a;
    total_innings=b;
    notout_innings=c;
    total_runs=d;
    name=n;
    }
        void displayData() {
        cout << "Batsman Code: " << batsmanCode << endl;
        cout << "Batsman Name: " << name << endl;
        cout << "Total Innings: " << total_innings << endl;
        cout << "Not Out Innings: " << notout_innings << endl;
        cout << "Total Runs: " << total_runs << endl;
        cout << "Batting Average: " << calcavg() << endl;
    }

};
int main(){
   batsman b1;
   b1.readdata(2001,30,5,7581,"Ridwan");
   b1.displayData();
   
}
