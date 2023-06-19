# Static libraries

## Creating a Static C Library
 > are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.

To create a static library, we can use a command like this:
`ar rc libutil.a util_file.o util_net.o util_math.o`

After an archive is created, or modified, there is a need to index it
The command used to create or update the index is called `ranlib`, and is invoked as follows:
```ranlib libutil.a```

## Using A "C" Library In A Program
This is done by adding the library's name to the list of object file names given to the linker, using a special flag, normally `-l`. Here is an example:
```cc main.o -L. -lutil -o prog```

For more on Libraries in C, look at this: [Libraries in C]https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html#:~:text=Shared%20libraries%20(also%20called%20dynamic,one%20of%20its%20shared%20libraries.
