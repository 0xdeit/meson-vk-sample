# meson-vk-sample

Simple project to test the correct configuration of Vulkan to be compiled
with meson.

When the program is run, it will display the Vulkan validation layer names that
are supported by your system.

## Getting started

Simply clone the repo and run:
```
meson setup builddir
```  

After that, you should be able to compile it either with `meson compile` or 
directly with `ninja`.
