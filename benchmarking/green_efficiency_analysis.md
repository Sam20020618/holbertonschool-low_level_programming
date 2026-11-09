**Green_efficiency_analysis**

**Measurement Methodology**
Within the instrumentation_lab.c file, I used two different methods to measure my results. The first method I used to find the total time the program ran was by using a clock_t variable named total_time. I started this variable at the start of the program to keep track of the time. I then used a clock_t variable named end_time to grab the clock time once I had finished running all my tests, e.g build_dataset, process_dataset and reduce_checksum. I then used both total_time and end_time to calculate the total seconds it took for my program to complete. The other method I used was to calculate the times for the three program functions (the same ones that were mentioned before) by using the function clock_t start and clock_t end to grab the difference between the two in order to get the running time of the function. With this, I would run the program three times in a row on the same system to get my results. 


**Observed Performance Differences**
The results from my three tests showed that the total run time of the program was very quick, as my lowest total run time was 0.000644 and my highest run time was 0.000671. Another trend that I found to be interesting within my results was that the reduce_checksum function managed to run, on average, about 0.000158 seconds faster than process_dataset and 0.000141 seconds faster than build_dataset. Other than that, all my data seems to be quite consistent, with only small variations within the runtimes of each function.

Results:
 Run 1:
TOTAL seconds: 0.000645 seconds
BUILD_DATA seconds: 0.000249 seconds
PROCESS seconds: 0.000274 seconds
REDUCE seconds: 0.000116 seconds

Run 2:
TOTAL seconds: 0.000644 seconds
BUILD_DATA seconds: 0.000249 seconds
PROCESS seconds: 0.000275 seconds
REDUCE seconds: 0.000117 seconds

Run 3:
TOTAL seconds: 0.000671 seconds
BUILD_DATA seconds: 0.000274 seconds
PROCESS seconds: 0.000273 seconds
REDUCE seconds: 0.000116 seconds
 



**Relation Between Runtime and Energy Consumption**
With every runtime, it is important to consider the energy that is being used to compute the code. With this in mind, it is important to understand what part of the computer you are using, e.g., RAM, CPU, and other components. Using the results from my test, I can conclude that since the reduce function was much quicker in comparison to the other two functions, it takes up less energy and power within the computer system itself. Understanding how runtime and energy consumption relate to each other can help your code to become more efficient and green for the environment.


**Limitations of the Experiment**
Some limitations within this experiment include running the program only three times. If I were to run the same code one thousand times, I would get more accurate results of the runtimes within my functions. Another limitation is that I ran this test only on my home PC; if I ran it on my laptop or a different device, I might get different results, as each computer system has different software components that could affect the results. 

**Practical Engineering Takeaway**
Overall, this project has helped to give me a deeper understanding of how to calculate runtimes for future projects and programs to ensure that I am coding more efficiently and more green. It also helped me to understand the impact that code has on the environment, which I had no idea about before taking this course.  
