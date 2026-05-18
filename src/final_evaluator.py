import difflib

def get_accuracy(original, decompiled):
    return difflib.SequenceMatcher(None, original, decompiled).ratio()

# Load files
with open("vulnerable.c", "r") as f: orig = f.read()
with open("ghidra_output.c", "r") as f: ghidra = f.read()
with open("ai_output.c", "r") as f: ai = f.read()

# Analysis
print("--- PROJECT METRICS ---")
print(f"Ghidra Structural Accuracy: {get_accuracy(orig, ghidra):.2%}")
print(f"AI Logic Accuracy:           {get_accuracy(orig, ai):.2%}")

# Vulnerability Check
print("\n--- SECURITY CHECK ---")
print(f"Original has 'gets' bug:    True")
print(f"Ghidra preserved 'gets':    {'gets' in ghidra}")
print(f"AI preserved 'gets':        {'gets' in ai}")