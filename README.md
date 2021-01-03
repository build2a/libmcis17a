# libmcis17a

C++ modules library for CIS-17A.

## How to Build

```powershell
# configure
> bdep init --wipe -C ../libmcis17a-debug `@debug cc `
    "config.cxx=cl /MDd" `
    "config.cc.coptions=/Od /Zi /EHsc /translateInclude" `
    config.cc.loptions=/DEBUG

# build
> bdep test
```
