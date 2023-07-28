# Linux Performace Tunning

## 01 Introduction

### 01-01 What Do We Mean by Performce

- **Response Time**

    **Minimum**
    - A response as fast as possible

    **Deterministic**
    - A response in the same amount of time, every time

    **Deadline**
    - A response in time --- earlier may not have any additional value

- **Throughput**

    **Amount of work done in a time interval**
    - Database transactions per second
    - Webpages served per minute
    - Bytes transferrred per second
    - Throughput and response time my compete

- **Completion Time**
    **A particular task that completes as soon as possible**
    - Software build
    - QA run

- **Other Metrics**
    **Sometimes included in performance measures**
    - Efficiency
    - Scalability
    - Power consumption


### 01-02 Timming Techiniques

- **Using Wall Clock Time**

    **Get the time**
    - `date` command
    - `date`; your-command; date
    - Bash prompt
    - `PS1="\T$"`

- **The `time` Command**

    **`/usr/bin/time`**
    - `/usr/bin/time sleep 2`
    - 0.00user 0.00system 0:02.00elasped 0%CPU (0avgtext+0avgdata 1776maxresident)k
    - 0inputs+0outputs (0major+72minor)pagefaults Oswaps

    **Bash time keyword**
    - `$ type time`
    - `time` is a shell keyword
    - Note that builtins make sense alone; the time keyword is used before another command
    - `$time ./loop1.sh`

- **In Code**
    **Get the time, do it, and get the time afterwards.**
    - `gettimeofday()`
        Provides time since the start of the unix epoch, resolution uses.

    - `clock_gettime()`
        Lots of different times, see clock_getres(2)

- **Operations per Second**
    - Do N operations and time it (S Seconds)
    - Run program for S Seconds and count the number (N) of operations done
    - Operations/seond = N/S
    <!-- - `loop1/sh` did 50000 operations in  -->


- **Response Time**
    - Provide a stimulus and time how long it takes to get a response
    - `./ask.sh`

- **The `strace` Command**
    - The `strace` command will show the system calls that a process makes
    - It can also report how long they took --- in CPU time, not elapsed time 
    - `strace -c -o /tmp/s.out ./loop1.sh`


```sh
type pwd # pwd is a shell builtin
type /bin/pwd # /bin/pwd is /bin/pwd
```