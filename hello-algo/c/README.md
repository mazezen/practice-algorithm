_Generate Makefile in build_

```shell
cd c

mkdir -p build

cmake -S . -B build -G "Unix Makefiles"

```

_compile_

```shell
cd build

make

```

_run_

```shell
~ ./build/chapter_computational_complexity/iteration.out
```
