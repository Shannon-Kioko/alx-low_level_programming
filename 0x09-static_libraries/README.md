# Static libraries
are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.
'''bash
ar rc libutil.a util_file.o util_net.o util_math.o
'''
