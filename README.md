# libnss-maria

[![Build Status](https://travis-ci.org/istana/libnss-maria.svg?branch=master)](https://travis-ci.org/istana/libnss-maria)

Replacement for old libnss-mysql as naming service library.


For test:

```
apt-get install cmake libssl-dev libc6-dev zlib1g-dev libconfig-dev libmysqlclient-dev
```

build

```
mkdir Debug
cmake -D CMAKE_BUILD_TYPE=Debug ..
make VERBOSE=1
```

release build (optimizations, warnings treated as errors)

```
mkdir Release
cmake -D CMAKE_BUILD_TYPE=Release ..
make VERBOSE=1
```


https://mariadb.com/kb/en/mariadb/mariadb-connector-c/

The MariaDB Connector/C is used to connect applications developed in C/C++ to MariaDB and MySQL databases. MySQL Connector/C is LGPL licensed.

Prior to version 2.1 the name for the library was MariaDB Client library for C.

## Why weird configuration format?

I've chosen libconfig, because:

- JSON hasn't multiline strings
- cannot found well maintained INI parser for linux, not sure about multiline strings
- libyaml is event based and I don't really understand it. Also YAML depends on indentation (or braces).
- libconfig is used by nginx, so it is not a big unknown. It has multiline strings and is multiplatform (BSD, ...)

## Run tests

`make tests`

but to see the output from unit testing library (to see what failed):

`ctest --verbose`

## TODO

- support for unix socket


## Author + License

Written by Ivan Stana, 2015-2016. Released under these licenses: GNU GPL v3, LGPL v3 and MIT
