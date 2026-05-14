#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Process{
    int id;
    int arrival_time;
    int burst_time;
    int turnaround_time=0;
    int waiting_time=0;
};

int main(){
    Process p1={1, 0, 6};
    Process p2={2, 2, 8};
    Process p3={3, 4, 3};
    vector<Process> processes={p1, p2, p3};

    int n=processes.size();
    int current_time=0;
    int completed=0;
    
    vector<bool> done(n, false);
    while(completed<n){
        int shortest_p=-1; //candidate process;
        for(int i=0;i<n;i++){
            if(done[i]) continue; //skip completed processes
            if(processes[i].arrival_time>current_time) continue; //skip unarrived processes
            if(shortest==-1 || processes[i].burst_time<processes[shortest].burst_time) shortest=i; //update candidate process

        }
    }
    return 0;
}