RegexHighlightView
==================

This project is a simple (*syntax*) highlighting `UITextView` for Cocoa and iOS. I wanted to create a simple, easy to use and extendable highlighter entirely based on regular expressions (*regex*, *regexp*). Existing projects aimed to cover a specific highlighting or purpose. I wanted to create a versatile class to be used for any purpose. 

The class uses the `CoreText` framework and `NSAttributedString` to highlight the text based on defined regular expressions. Expressions as well as colors can be defined using `NSDictionary` or *plist* files. Build-in highlighting **Themes** allow to beautifully highlight text out of the box. All XCode themes are supported:

- Basic
- Default
- Dusk
- Low Key
- Midnight
- Presentation
- Printing
- Sunset

The highlighting themes and colors can be easily changed and adapted. Define your own highlighting by defining own regular expressions. Anyways the project comes bundled with predefined highlight definitions for the following programming languages:

	actionscript, actionscript3, active4d, ada, ampl, apache,
	applescript, asm-mips, asm-x86, asp-js, asp-vb, aspdotnet-cs,
	aspdotnet-vb, awk, batch, c, cobol, coldfusion, cpp, csharp,
	csound, css, d, dylan, eiffel, erl, eztpl, fortran, freefem,
	gedcom, gnuassembler, haskell, header, html, idl, java, javafx,
	javascript, jsp, latex, lilypond, lisp, logtalk, lsl, lua, 
	matlab, mel, metapost, metaslang, mysql, nemerle, none, nrnhoc,
	objectivec, objectivecaml, ox, pascal, pdf, perl, php, plist,
	postscript, prolog, python, r, rhtml, ruby, scala, sgml, shell,
	sml, sql, standard, stata, supercollider, tcltk, torquescript,
	udo, vb, verilog, vhdl, xml

Please give support so I can continue to make RegexHighlightView even more awesome!

<a href="https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=4S886F7EHPR6Q">
<img src="https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif" border="0" name="submit" alt="PayPal - The safer, easier way to pay online!" />
</a>

Your help is much appreciated. Please send pull requests for useful additions you make or ask me what work is required.

Credits
-------

Credits go to [boos1993](https://github.com/boos1993) for his [iOS-Syntax-Highlighter](https://github.com/boos1993/iOS-Syntax-Highlighter), for the basic idea and project structure.

License
-------

It is open source and covered by a standard MIT license. That means you have to mention *Kristian Kraljic (dikrypt.com, ksquared.de)* as the original author of this code. You can purchase a Non-Attribution-License from me.

Documentation
-------------

*Sorry, I'm to lazy to create a documentation for a single class…* ~~Documentation can be [browsed online](http://kayk.github.com/RegexHighlightView) or installed in your Xcode Organizer via the [Atom Feed URL](http://kayk.github.com/RegexHighlightView/RegexHighlightView.atom).~~

Usage
-----

RegexHighlightView needs a minimum iOS deployment target of 4.3 because of:

- CoreText
- ARC

The best way to use RegexHighlightView with Xcode 4.2 is to add the source files to your Xcode project with the following steps.

1. Download RegexHighlightView as a subfolder of your project folder
2. Open the destination project and drag the folder as a subordinate item in the Project Navigator (Copy all classes and headers)
3. In your prefix.pch file add:
	
		#import "RegexHighlightView.h"

4. In your application target's Build Phases add the following framework to the Link Binary With Libraries phase (you can also do this from the Target's Summary view in the Linked Frameworks and Libraries):

		CoreText.framework

5. Go to File: Project Settings… and change the derived data location to project-relative.
6. Add the DerivedData folder to your git ignore. 
7. In your application's target Build Settings:
	- If your app does not use ARC yet (but RegexHighlightView does) then you need to add the the -fobjc-arc linker flag to the app target's "Other Linker Flags".

If you do not want to deal with Git submodules simply add RegexHighlightView to your project's git ignore file and pull updates to RegexHighlightView as its own independent Git repository. Otherwise you are free to add RegexHighlightView as a submodule.

Known Issues
------------

*None, so far… Yay!*

If you find an issue then you are welcome to fix it and contribute your fix via a GitHub pull request.