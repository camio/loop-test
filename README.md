# Loop Test

## Description

This repository investigates the idea of using the upper end of an unsigned
numeric type as a loop index which allows the compiler to jump on overflow and
avoid a comparison at each iteration. The generated assembly, however, shows a)
that such a modification to the source results in no difference in generated
code, and b) that the compiler uses a similar optimization where it decrements
the index and jumps when zero is reached, thus avoiding a comparison.

## Build

This builds using GNU Make. Execute `make` to build `test.s` which contains the
assembly output.
