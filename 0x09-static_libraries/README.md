# Static libraries

## Creating a Static C Library
 > are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.

To create a static library, we can use a command like this:
`ar rc libutil.a util_file.o util_net.o util_math.o`

After an archive is created, or modified, there is a need to index it
The command used to create or update the index is called 'ranlib', and is invoked as follows:
```ranlib libutil.a```

