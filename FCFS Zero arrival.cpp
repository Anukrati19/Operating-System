#include <iostream>
 
 //First Come First Serve with zero arrival time .......
 
using namespace std;
class FCFS
{
public:
void completion(int procesid[],int n,int bursttime[],int comp[])
{
    comp[0]=bursttime[0];
    for(int i=1;i<n;i++)
    {
        comp[i]=comp[i-1]+bursttime[i];
    }
}

void turnaround_time(int procesid[],int n,int bursttime[],int tat[],int comp[])
{
   
    for(int i=0;i<n;i++)
    {
        tat[i]=comp[i];
    }
}
void waiting_time(int procesid[],int n,int bursttime[],int tat[],int wait[])
{
    for(int i=0;i<n;i++)
    {
        wait[i]=tat[i]-bursttime[i];
    }
}
void display(int procesid[],int comp[],int tat[],int wait[],int n)
{
    cout<<"p_ID completion TAT Waiting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<procesid[i]<<"      " <<comp[i]<<"         "<<tat[i]<<"     "<<wait[i]<<endl;
    }
}
};
int main()
{
    FCFS f;
      int n;
      cout<<"Enter the number of process:";
      cin>>n;
      int procesid[n];
      int bursttime[n];
     // int arr[n]={0};
      for(int i=0;i<n;i++)
      {
          cout<<"Enter the process ID and burst time:";
          cin>>procesid[i]>>bursttime[i];
      }
      int comp[n];
      int tat[n];
      int wait[n];
     
     f. completion( procesid, n, bursttime,comp);
     
 
      f.turnaround_time( procesid, n, bursttime, tat,comp);
   f.waiting_time( procesid, n, bursttime, tat,wait);
  f.display( procesid,comp,tat, wait, n);

    return 0;
}
