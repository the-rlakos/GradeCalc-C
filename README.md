# StudentGradeCalc-C

A small **C** console program that reads a number of assignment scores, computes the **average**, and prints a **letter grade**.

## How it Works (High Level)
1. Prompts for `n` (the number of assignments) and validates the input.
2. Loops `n` times asking for a score **0–100**; rejects invalid inputs.
3. Computes the average and maps it to **A/B/C/D/F** via a helper function.
4. Prints the results and exits.

## File Structure
```
StudentGradeCalc-C/
└─ main.c
```

## Build & Run
```bash
gcc -o grade main.c
./grade
```

## Next Steps (Optional)
- Add **weights** for assignments and exams.
- Read from a **file** instead of interactive input.
- Print **min**, **max**, and **standard deviation**.
