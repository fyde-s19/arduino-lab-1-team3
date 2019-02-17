# arduino-lab-1-team3
arduino-lab-1-team3 created by GitHub Classroom


Q1: Why do embedded systems need a setup and loop?

A1: Because the embedded systems never stop, we need a loop. And we only need to execute some code once, so we need a setup area.

Q2: Why does our code need to be complied?

A2: Because our Arduino can't read C code, it can only read mechine code. The compiler can translate our C code into machine code.

Q3: When lowering the frequency in step four, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?

A3: When we change the frequency from 100Hz to 10Hz, we did not update the period calculations. This led to a visible flicker in the led, which can be fixed if we change the period calculation so that the ratio remains 10. 



