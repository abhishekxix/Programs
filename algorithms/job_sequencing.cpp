#include <bits/stdc++.h>

#define MAX 100

using namespace std;

class Job
{
public:
    string id;
    int deadline;
    int Profit;
};

void jobSequencing(std::vector<Job> &jobs, int n);

int main(void)
{

    int i, j, n;

    cout << "Enter the number of jobs";

    cin >> n;

    std::vector<Job> jobs(n);

    for (i = 0; i < n; i++)
    {

        cout << "\nEnter the job -> ";

        cin >> jobs.at(i).id;

        cout << "\nEnter the Profit -> ";

        cin >> jobs.at(i).Profit;

        cout << "\nEnter deadline ->";

        cin >> jobs.at(i).deadline;
    }

    Job temp;

    cout << "\nJob(i)\t Profit\t Deadline\t \n\n";

    cout << "--------------------------------------------------";

    for (i = 0; i < n; i++)
    {

        cout << "\n\n";

        cout << jobs.at(i).id << "\t\t"
             << jobs.at(i).Profit << "\t\t" << jobs.at(i).deadline;
    }

    for (i = 1; i < n; i++)
    {

        for (j = 0; j < n - i; j++)
        {

            if (jobs.at(j + 1).Profit > jobs.at(j).Profit)
            {

                temp = jobs.at(j + 1);

                jobs.at(j + 1) = jobs.at(j);

                jobs.at(j) = temp;
            }
        }
    }

    cout << "\n\nTotal nuber of jobs = " << n << endl;

    jobSequencing(jobs, n);

    return 0;
}

void jobSequencing(std::vector<Job> &jobs, int n)
{

    int i, j, k, maxprofit;

    std::vector<int> time_slot(MAX);

    int filledTimeSlot = 0;

    int dmax = 0;

    for (i = 0; i < n; i++)
    {

        if (jobs[i].deadline > dmax)
        {

            dmax = jobs[i].deadline;
        }
    }

    cout << "\nTotal time slot:" << dmax;

    for (i = 1; i <= dmax; i++)
    {

        time_slot[i] = -1;
    }

    cout << "\n\nnumber of jobs done:" << dmax;

    for (i = 1; i <= n; i++)
    {

        k = std::min(dmax, jobs[i - 1].deadline);

        while (k >= 1)
        {

            if (time_slot[k] == -1)
            {

                time_slot[k] = i - 1;

                filledTimeSlot++;
                break;
            }

            k--;
        }

        if (filledTimeSlot == dmax)
        {

            break;
        }
    }

    for (i = 1; i <= dmax; i++)
    {

        cout << "\tJob" << jobs[time_slot[i]].id
             << "at time:" << i << endl;
    }

    maxprofit = 0;

    for (i = 1; i <= dmax; i++)
    {

        maxprofit += jobs[time_slot[i]].Profit;
    }

    cout << "\ntotal profit" << maxprofit;
}