# Decompiler Comparison Study Tool

This project benchmarks traditional static decompilation against modern neural decompilation methodologies.

## Project Overview
We analyzed a custom-built vulnerable binary to see how well **Ghidra** and **AI** could reconstruct the original source code and identify security flaws.

### Key Metrics
- **Ghidra Structural Accuracy:** 42.24%
- **AI Logic Accuracy:** 51.42%
- **Vulnerability Detection:** 100% (Both tools successfully identified the `gets()` buffer overflow)

## Methodology
1. **Target:** Compiled a C program with a deliberate stack-based buffer overflow.
2. **Analysis:** Processed the stripped binary through Ghidra and a Neural LLM.
3. **Evaluation:** Used a custom Python script (`final_evaluator.py`) to measure code similarity.

## Contributors
- Hashir Faheem
- Hassan Shahid
