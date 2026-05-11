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

    int current_time=0;
    //loop throguh processes
    for(Process& p:processes){
        //idle check-if finished early, jump to next arrival time
        if(current_time<p.arrival_time){
            current_time=p.arrival_time;
        }
        //update waiting, current, and turnaround time
        p.waiting_time=current_time-arrival_time;
        p.turnaround_time=p.waiting_time+p.burst_time;
        current_time+=p.burst_time;
    }
    return 0;
}