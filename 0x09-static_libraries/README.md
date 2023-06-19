# Static libraries
 > are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.

To create a static library, we can use a command like this:
`ar rc libutil.a util_file.o util_net.o util_math.o`
