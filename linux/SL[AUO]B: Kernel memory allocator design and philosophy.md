# SL[AUO]B: Kernel memory allocator design and philosophy

## Allocator in Linux

- `PAGE_SIZE`(4k) basic allocation unit via page allocator.
- Allows fractional allocaiton. Frequently needed for small objects that the kernel allocates f.e.
