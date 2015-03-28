# Compilation #

To compile you should place source of fribidi and liblinebreak on the same level as FBReader source:

```
cd /Users/user/src
svn checkout http://fbreaderosx.googlecode.com/svn/trunk/ fbreaderosx
tar xvzf fribidi-0.10.9.tar.gz
tar xvzf liblinebreak-1.1.tar.gz
```

configure and make in each of library sources directory:

```
cd fribidi-0.10.9
configure
make

cd ..

cd liblinebreak-1.1
configure
make
```

and then make in fbreader source directory:

```
cd fbreaderosx
make
```

to create FBReader.app you should make install in fbreader directory:

```
make install
```

make install creates FBRader.app in fbreeaderosx source directory, you can launch it:

```
open FBReader.app
```