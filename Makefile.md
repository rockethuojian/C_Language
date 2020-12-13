Two ways for Makefile to create dependency:
1. An important point that it took me a while to grasp is that the make.deps from the previous build are good enough.
(but with -MMD -MP to work around errors when any header file is deleted)
https://stackoverflow.com/questions/2801532/make-include-directive-and-dependency-generation-with-mm
2. Produce .d files to explicit define dependency
https://stackoverflow.com/questions/11855386/using-g-with-mmd-in-makefile-to-automatically-generate-dependencies
