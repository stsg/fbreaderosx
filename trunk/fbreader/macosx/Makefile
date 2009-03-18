ROOTDIR = $(CURDIR)/../..
include $(ROOTDIR)/makefiles/config.mk

TARGET = FBReader

#SHARE_FBREADER = $(DESTDIR)$(SHAREDIR)/FBReader
SHARE_FBREADER = $(ROOTDIR)/FBReader.app/Contents/Resources/FBReader

install:
	@install -d $(ROOTDIR)/FBReader.app/Contents/Frameworks
	@install -d $(ROOTDIR)/FBReader.app/Contents/MacOS
	@install -d $(ROOTDIR)/FBReader.app/Contents/Resources
	@install -m 0644 Info.plist $(ROOTDIR)/FBReader.app/Contents/Info.plist
	@install -m 0644 PkgInfo $(ROOTDIR)/FBReader.app/Contents/PkgInfo
	@install -d $(SHARE_FBREADER)/default
#	
	@install -d $(DESTDIR)$(IMAGEDIR)
	@install -m 0644 ../data/icons/application/$(TARGET_ARCH).png $(DESTDIR)$(IMAGEDIR)/FBReader.png
	@install -m 0644 ../data/default/config.desktop.xml $(SHARE_FBREADER)/default/config.xml
	@install -m 0644 ../data/default/keymap.desktop.xml $(SHARE_FBREADER)/default/keymap.xml
	@install -m 0644 ../data/default/styles.desktop.xml $(SHARE_FBREADER)/default/styles.xml	
#
	@install -m 0644 $(ROOTDIR)/../fribidi-0.10.9/.libs/libfribidi.0.0.0.dylib $(ROOTDIR)/FBReader.app/Contents/Frameworks/libfribidi.0.dylib
	@install -m 0644 $(ROOTDIR)/../liblinebreak-1.1/.libs/liblinebreak.1.dylib $(ROOTDIR)/FBReader.app/Contents/Frameworks/liblinebreak.1.dylib
	install_name_tool -change /usr/local/lib/libfribidi.0.dylib @executable_path/../Frameworks/libfribidi.0.dylib $(ROOTDIR)/FBReader.app/Contents/MacOS/FBReader
	install_name_tool -change /usr/local/lib/liblinebreak.1.dylib @executable_path/../Frameworks/liblinebreak.1.dylib $(ROOTDIR)/FBReader.app/Contents/MacOS/FBReader
	macdeployqt $(ROOTDIR)/FBReader.app
	
clean:
