//
//  RegexHighlightView.h
//  iOS Syntax Highlighter
//
//  Created by Kristian Kraljic on 30/8/12.
//  Copyright (c) 2012 Kristian Kraljic (dikrypt.com, ksquared.de). All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person 
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or
//  sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>

FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypeText;
FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypeBackground;
FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypeComment;
FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypeDocumentationComment;
FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypeString;
FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypeCharacter;
FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypeNumber;
FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypeKeyword;
FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypePreprocessor;
FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypeURL;
FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypeAttribute;
FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypeProject;
FOUNDATION_EXPORT NSString *const kRegexHighlightViewTypeOther;

typedef enum {
    kRegexHighlightViewThemeBasic,
    kRegexHighlightViewThemeDefault,
    kRegexHighlightViewThemeDusk,
    kRegexHighlightViewThemeLowKey,
    kRegexHighlightViewThemeMidnight,
    kRegexHighlightViewThemePresentation,
    kRegexHighlightViewThemePrinting,
    kRegexHighlightViewThemeSunset
} RegexHighlightViewTheme;

@interface RegexHighlightView : UITextView

@property(nonatomic) NSDictionary *highlightColor;
@property(nonatomic) NSDictionary *highlightDefinition;

-(void)setHighlightDefinition:(NSDictionary*)highlightDefinition;
-(void)setHighlightDefinitionWithContentsOfFile:(NSString*)path;

-(void)setHighlightTheme:(RegexHighlightViewTheme)theme;
+(NSDictionary*)highlightTheme:(RegexHighlightViewTheme)theme;

@end