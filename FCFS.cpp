#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Process{
    int id;
    int arrival_time;
    int burst_time;
    int turnaround_time=0;
    int waiting_time=0;
}

int main(){
    //example process objects
    Process p1={1,0,4};
    Process p2={2,2,5};
    Process p3={3,8,2};
    vector<Process> processes={p1,p2,p3} //vector for Process objects- {id, arrival, burst}
    
    //sort by arrival time- ascending order
    sort(processes.begin(), processes.end(), [](const Process& a, const Process& b){
        return a.arrival_time<b.arrival_time;
    });


    return 0;
}