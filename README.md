# linux-kernel-module
This is a small test kernel module for linux that does some stuff.


Checklist (for Tanay lol) of things this module is supposed to do:


- [ ] Can be loaded / unloaded with `insmod` / `rmmod` 


- [ ] Creates a `proc` entry and register a `read` / `write` file op


- [ ] Stores a copy of the buffer in a linked list `struct` after every write to `proc`


- [ ] Each `read` from the `proc` will fill the read buffer with list entries upto `read_size` or buffer length.


- [ ] Linked List memory gets cleaned up once the module is unloaded.


Will update further. Maybe this is a one shot thing, maybe I can turn this into something important, who knows?

