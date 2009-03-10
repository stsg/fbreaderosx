ROOTDIR = $(CURDIR)/../..
include $(ROOTDIR)/makefiles/config.mk

TARGET = FBReader

#SHARE_FBREADER = $(DESTDIR)$(SHAREDIR)/FBReader
SHARE_FBREADER = $(ROOTDIR)/FBReader.app/Contents/Resources/FBReader

install:
	@install -d $(ROOTDIR)/FBReader.app/Contents/Frameworks
	@install -d $(ROOTDIR)/FBReader.app/Contents/Frameworks/plugins
	@install -d $(ROOTDIR)/FBReader.app/Contents/Frameworks/plugins/accessible
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
	#	Qt libraries
	cp -R /Library/Frameworks/QtCore.framework $(ROOTDIR)/FBReader.app/Contents/Frameworks
	cp -R /Library/Frameworks/QtGui.framework $(ROOTDIR)/FBReader.app/Contents/Frameworks
	cp -R /Library/Frameworks/Qt3Support.framework $(ROOTDIR)/FBReader.app/Contents/Frameworks
	cp -R /Library/Frameworks/QtNetwork.framework $(ROOTDIR)/FBReader.app/Contents/Frameworks
	cp -R /Library/Frameworks/QtSql.framework $(ROOTDIR)/FBReader.app/Contents/Frameworks
	cp -R /Library/Frameworks/QtSvg.framework $(ROOTDIR)/FBReader.app/Contents/Frameworks
	cp -R /Library/Frameworks/QtXml.framework $(ROOTDIR)/FBReader.app/Contents/Frameworks
	cp -R /Developer/Applications/Qt/plugins/accessible $(ROOTDIR)/FBReader.app/Contents/Frameworks/plugins
	cp /Developer/Applications/Qt/plugins/accessible/libqtaccessiblewidgets.dylib $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/accessible
	cp -R /Developer/Applications/Qt/plugins/imageformats $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins
	#	change links
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/MacOS/FBReader
	install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui $(ROOTDIR)/FBreader.app/Contents/MacOS/FBReader

	install_name_tool -id @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/QtCore.framework/Versions/4/QtCore

	install_name_tool -id @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui $(ROOTDIR)/FBreader.app/Contents/Frameworks/QtGui.framework/Versions/4/QtGui
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/QtGui.framework/Versions/4/QtGui

	install_name_tool -id @executable_path/../Frameworks/QtSql.framework/Versions/4/QtSql $(ROOTDIR)/FBreader.app/Contents/Frameworks/QtSql.framework/Versions/4/QtSql
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/QtSql.framework/Versions/4/QtSql

	install_name_tool -id @executable_path/../Frameworks/QtSvg.framework/Versions/4/QtSvg $(ROOTDIR)/FBreader.app/Contents/Frameworks/QtSvg.framework/Versions/4/QtSvg
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/QtSvg.framework/Versions/4/QtSvg
	install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui $(ROOTDIR)/FBreader.app/Contents/Frameworks/QtSvg.framework/Versions/4/QtSvg 

	install_name_tool -id @executable_path/../Frameworks/QtXml.framework/Versions/4/QtXml $(ROOTDIR)/FBreader.app/Contents/Frameworks/QtXml.framework/Versions/4/QtXml
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/QtXml.framework/Versions/4/QtXml
    
	install_name_tool -id @executable_path/../Frameworks/Qt3Support.framework/Versions/4/Qt3Support $(ROOTDIR)/FBreader.app/Contents/Frameworks/Qt3Support.framework/Versions/4/Qt3Support
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/Qt3Support.framework/Versions/4/Qt3Support
	install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui $(ROOTDIR)/FBreader.app/Contents/Frameworks/Qt3Support.framework/Versions/4/Qt3Support 
	install_name_tool -change QtSql.framework/Versions/4/QtSql @executable_path/../Frameworks/QtSql.framework/Versions/4/QtSql $(ROOTDIR)/FBreader.app/Contents/Frameworks/Qt3Support.framework/Versions/4/Qt3Support 
	install_name_tool -change QtXml.framework/Versions/4/QtXml @executable_path/../Frameworks/QtXml.framework/Versions/4/QtXml $(ROOTDIR)/FBreader.app/Contents/Frameworks/Qt3Support.framework/Versions/4/Qt3Support
	install_name_tool -change QtNetwork.framework/Versions/4/QtNetwork @executable_path/../Frameworks/QtNetwork.framework/Versions/4/QtNetwork $(ROOTDIR)/FBreader.app/Contents/Frameworks/Qt3Support.framework/Versions/4/Qt3Support
    
	install_name_tool -id @executable_path/../Frameworks/QtNetwork.framework/Versions/4/QtNetwork $(ROOTDIR)/FBreader.app/Contents/Frameworks/QtNetwork.framework/Versions/4/QtNetwork
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/QtNetwork.framework/Versions/4/QtNetwork
    
	install_name_tool -id @executable_path/../Frameworks/plugins/accessible/libqtaccessiblecompatwidgets.dylib $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/accessible/libqtaccessiblecompatwidgets.dylib
	install_name_tool -change Qt3Support.framework/Versions/4/Qt3Support @executable_path/../Frameworks/Qt3Support.framework/Versions/4/Qt3Support $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/accessible/libqtaccessiblecompatwidgets.dylib
	install_name_tool -change QtSql.framework/Versions/4/QtSql @executable_path/../Frameworks/QtSql.framework/Versions/4/QtSql $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/accessible/libqtaccessiblecompatwidgets.dylib
	install_name_tool -change QtXml.framework/Versions/4/QtXml @executable_path/../Frameworks/QtXml.framework/Versions/4/QtXml $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/accessible/libqtaccessiblecompatwidgets.dylib
	install_name_tool -change QtNetwork.framework/Versions/4/QtNetwork @executable_path/../Frameworks/QtNetwork.framework/Versions/4/QtNetwork $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/accessible/libqtaccessiblecompatwidgets.dylib
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/accessible/libqtaccessiblecompatwidgets.dylib
	install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/accessible/libqtaccessiblecompatwidgets.dylib
    
	install_name_tool -id @executable_path/../Frameworks/plugins/accessible/libqtaccessiblewidgets.dylib $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/accessible/libqtaccessiblewidgets.dylib
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/accessible/libqtaccessiblewidgets.dylib
	install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/accessible/libqtaccessiblewidgets.dylib
    
	install_name_tool -id @executable_path/../Frameworks/plugins/imageformats/libqgif.dylib $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqgif.dylib
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqgif.dylib
	install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqgif.dylib
    
	install_name_tool -id @executable_path/../Frameworks/plugins/imageformats/libqico.dylib $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqico.dylib
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqico.dylib
	install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqico.dylib
    
	install_name_tool -id @executable_path/../Frameworks/plugins/imageformats/libqjpeg.dylib $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqjpeg.dylib
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqjpeg.dylib
	install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqjpeg.dylib
    
	install_name_tool -id @executable_path/../Frameworks/plugins/imageformats/libqmng.dylib $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqmng.dylib
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqmng.dylib
	install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqmng.dylib
    
	install_name_tool -id @executable_path/../Frameworks/plugins/imageformats/libqsvg.dylib $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqsvg.dylib
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqsvg.dylib
	install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqsvg.dylib
	install_name_tool -change QtSvg.framework/Versions/4/QtSvg @executable_path/../Frameworks/QtSvg.framework/Versions/4/QtSvg $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqsvg.dylib
	install_name_tool -change QtXml.framework/Versions/4/QtXml @executable_path/../Frameworks/QtXml.framework/Versions/4/QtXml $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqsvg.dylib
    
	install_name_tool -id @executable_path/../Frameworks/plugins/imageformats/libqtiff.dylib $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqtiff.dylib
	install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqtiff.dylib
	install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui $(ROOTDIR)/FBreader.app/Contents/Frameworks/plugins/imageformats/libqtiff.dylib
	
#
	@install -m 0644 $(ROOTDIR)/../fribidi-0.10.9/.libs/libfribidi.0.0.0.dylib $(ROOTDIR)/FBReader.app/Contents/Frameworks/libfribidi.0.dylib
	@install -m 0644 $(ROOTDIR)/../liblinebreak-1.1/.libs/liblinebreak.1.dylib $(ROOTDIR)/FBReader.app/Contents/Frameworks/liblinebreak.1.dylib
	install_name_tool -change /usr/local/lib/libfribidi.0.dylib @executable_path/../Frameworks/libfribidi.0.dylib $(ROOTDIR)/FBReader.app/Contents/MacOS/FBReader
	install_name_tool -change /usr/local/lib/liblinebreak.1.dylib @executable_path/../Frameworks/liblinebreak.1.dylib $(ROOTDIR)/FBReader.app/Contents/MacOS/FBReader
	
clean:
