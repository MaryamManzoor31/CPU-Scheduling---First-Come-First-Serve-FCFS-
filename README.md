# CPU-Scheduling---First-Come-First-Serve-FCFS-

#First Come First Serve (FCFS) Scheduling

## Objective
To implement the First Come First Serve (FCFS) CPU Scheduling Algorithm using C programming.

---

## About FCFS

First Come First Serve (FCFS) is a non-preemptive CPU scheduling algorithm in which processes are executed in the order they arrive in the ready queue.

The process that arrives first gets CPU execution first.

---

## Algorithm

1. Input the number of processes.
2. Input burst time for each process.
3. Assign waiting time of first process as 0.
4. Calculate waiting time for remaining processes:
   - WT[i] = WT[i-1] + BT[i-1]
5. Calculate turnaround time:
   - TAT[i] = WT[i] + BT[i]
6. Compute average waiting time and average turnaround time.
7. Display results.

---

## Program Details

- Language: C
- Scheduling Type: Non-preemptive
- Maximum Processes: 20

---

## Files Included

- `fcfs_scheduling.c` → Source code implementation
- `fcfs_output.txt` → Sample execution output

---

## Sample Output Format

