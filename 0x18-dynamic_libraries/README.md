# Dynamic Libraries in C
Dynamic Linking of all the *.c* files in the current directory
## Creating A Shared C Library Using `ld`
The creation of a shared library is rather similar to the creation of a [static library](../0x09-static_libraries/README.md), except for two major differences.

* We use `-fpic` on the compilation command to use relative addresses on all jump calls.
* Unlike a static library, this isn't an archive file, hence the `-G` flag or `-shared` flag is used to create a shared library.
