# FBReader OS X port #

### Mac OS X port of [FBReader](http://fbreader.org) — e-book reader for Unix/Windows computers. ###
_### Main features: ###
  * Supported formats are
    * fb2 e-book format (style attributes are not supported yet).
    * HTML format (tables are not supported).
    * CHM format (tables are not supported).
    * plucker format (tables are not supported).
    * Palmdoc (aportis doc).
    * zTxt (Weasel format).
    * TCR (psion text) format.
    * RTF format (stylesheets and tables are not supported).
    * OEB format (css and tables are not supported).
    * OpenReader format (css and tables are not supported).
    * Non-DRM'ed mobipocket format (tables are not supported).
    * lain text format.
  * Direct reading from tar, zip, gzip and bzip2 archives. (Multiple books in one archive are supported.)
  * Automatic library building.
  * Automatic language and character encoding detection is supported.
  * Automatically generated contents table.
  * Embedded images support.
  * Footnotes/hyperlinks support.
  * Position indicator.
  * Keeps the last open book and the last read positions for all opened books between runs.
  * List of last opened books.
  * Automatic hyphenations. Liang's algorithm is used. The same algorithm is used in TeX, and TeX hyphenation patterns are used in FBReader. Patterns for Czech, English, Esperanto, Finnish, French, German, Italian, Norwegian, Portuguese, Russian, Spanish, Swedish and Ukrainian are included in the current version.
  * Text search.
  * Full-screen mode.
  * Screen rotation by 90, 180 and 270 degrees._

### Changes in latest _**0.10.X**_ series: ###
  * Network libraries integration has been added. FBReader can search and download books from Feedbooks.com and LitRes libraries. We plan to add more libraries in future releases. Short guide for this new feature is available online. **Privacy notice** : FBReader does not send any information to libraries without user request (and never sends any information about user's library or other user's information).
  * Partial CSS support for epub files has been added. CSS support in html and fb2 is coming soon.
  * Epub and Mobipocket book formats support has been substantially improved.
  * Library view usability has been improved: you can now organize the tree either by author or by tag.
  * You can now select a word by double-click and a paragraph by triple-click.
  * Right-to-left languages and bidirectional texts support has been added (GNU FriBidi library is used).
  * Support for Arabic, Hebrew, Greek and Turkish has been added.
  * Czech localization has been added (many thanks to Lubomír Čevela).
  * FBReader now has a new set of icons.
  * It's now possible to use OS scrollbar for navigating through the text (this is now default and if you would like to continue using old variant, you can change it in the preferences dialog.)
  * Various bugs have been fixed.

_Currently FBreader oficially not supported on **Mac OS X**._

_I hope this project can help to fix this mistake ;)_

You can find latest build on [Downloads](http://code.google.com/p/fbreaderosx/downloads) page.

If you interest on compilation process read [Compilation HowTo](http://code.google.com/p/fbreaderosx/wiki/Compiling).

Also see [KnownBugs](http://code.google.com/p/fbreaderosx/wiki/KnownBugs).

_**Cheers Stas.**_
[Gobunov.Ru](http://gobunov.ru)

