**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

New: Process is being created
Ready: All resources are available to run, but the CPU is not working on it.
Running: Process running
Waiting: Waiting for resources to become available to run.
Terminated: Process has completed.

**2. What is a zombie process?**

A process becomes a zombie when it exits but the parent doesn't call wait. The zombie does not exist, but still apppears in the process table. The zombie process is necessary as it waits for the parent to read its exit code, at which time it is destroyed.

**3. How does a zombie process get created? How does one get destroyed?**

All processes become zombies, at least until the parent can read its exit code. Then the process is destoryed.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

Benefits of a compiled language versus a non-complied language are that they are much more efficient. A compiled language is compiled only once and then can be run a number of times without having to run the compiler again. Non-complied languages must be parsed, interpreted, and executed each time they are run.
