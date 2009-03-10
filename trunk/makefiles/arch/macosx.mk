include $(ROOTDIR)/makefiles/arch/unix.mk

ifeq "$(INSTALLDIR)" ""
  INSTALLDIR=$(ROOTDIR)/FBReader.app/Contents/Resources
endif
IMAGEDIR = $(INSTALLDIR)/pixmaps
APPIMAGEDIR = $(INSTALLDIR)/pixmaps/%APPLICATION_NAME%

ZLSHARED = no

CC = gcc -D __MacOSX__
AR = ar rsu
LD = g++
MOC = moc

CFLAGS = -pipe -fno-exceptions -Wall -Wno-ctor-dtor-privacy -W -DLIBICONV_PLUG
LDFLAGS =
EXTERNAL_INCLUDE = -I$(ROOTDIR)/../fribidi-0.10.9 -I$(ROOTDIR)/../liblinebreak-1.1
EXTERNAL_LIBS = -L$(ROOTDIR)/../fribidi-0.10.9/.libs -L$(ROOTDIR)/../liblinebreak-1.1/.libs -liconv

UILIBS = -framework QtGui -framework QtCore -framework CoreFoundation

RM = rm -rvf
RM_QUIET = rm -rf
