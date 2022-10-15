# What?

This is an example folder for https://www.youtube.com/watch?v=p7Bi-mOyelM

Using CLion 2022.2.4 with Docker Desktop 4.12.0 (85629)

## What was working
* use Dockerfile to create an image
* compile the source in the docker container image
  * using llvm/llvm++
* run the code inside the container image 
* run gdb debugger inside the container image and using UI features as
  * breakpoint, make UI wait for my decision
  * set trace point with stack trace (very cool)
* using ninja (instead of cmake)

### Lanugage model
* language hints: both, iostream and sys/utsname.h get resolved and can be clicked!
* using target_compile_definitions(docker_test PUBLIC BAR=1) the IDE showed which defines were set per target

## What was not working yet

* coverage with gcov does not work yet, IDE shows:
  `OCI runtime exec failed: exec failed: unable to start container process: exec: "/usr/bin/llvm-cov": stat /usr/bin/llvm-cov: no such file or directory: unknown Configure`

## What I was not trying yet

* use a library coming with alpine, i.e. curl-dev
* valgrind profiling, looking at kcachegrind

# Dockerfile

    docker  build -t clion/alpine:1.0 -f .\Dockerfile .

# License

this is public domain, use for whaterver you want
