/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSPasteboardWriting, NSPasteboardReading> {
}

+ (id)_web_stringRepresentationForBytes:(long long)arg1;
+ (const unsigned long long*)availableStringEncodings;
+ (id)stringWithContentsOfURL:(id)arg1;
+ (id)stringWithContentsOfFile:(id)arg1;
+ (id)stringWithFormat:(id)arg1 locale:(id)arg2;
+ (id)_scriptStringWithTabCount:(unsigned long long)arg1;
+ (id)_scriptStringWithPropertyAccess:(unsigned long long)arg1;
+ (id)_scriptingTextWithDescriptor:(id)arg1;
+ (id)localizedNameOfStringEncoding:(unsigned long long)arg1;
+ (id)stringWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
+ (id)pathWithComponents:(id)arg1;
+ (id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)stringWithCString:(const char *)arg1;
+ (id)stringWithCString:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
+ (id)localizedStringWithFormat:(id)arg1;
+ (id)stringWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
+ (id)stringWithUTF8String:(const char *)arg1;
+ (unsigned long long)defaultCStringEncoding;
+ (id)stringWithString:(id)arg1;
+ (id)stringWithFormat:(id)arg1;
+ (void)initialize;
+ (id)string;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (double)defaultBaselineOffsetForFont:(id)arg1;
+ (unsigned long long)defaultAttachmentScaling;
+ (void)setDefaultAttachmentScaling:(unsigned long long)arg1;
+ (void)setHyphenationFactor:(float)arg1;
+ (BOOL)showsControlCharacters;
+ (void)setShowsControlCharacters:(BOOL)arg1;
+ (BOOL)showsInvisibleCharacters;
+ (void)setShowsInvisibleCharacters:(BOOL)arg1;
+ (BOOL)usesScreenFonts;
+ (double)defaultLineHeightForFont:(id)arg1;
+ (void)setUsesScreenFonts:(BOOL)arg1;
+ (void)setTypesetterBehavior:(long long)arg1;
+ (void)setUsesFontLeading:(BOOL)arg1;
+ (BOOL)usesFontLeading;
+ (float)hyphenationFactor;
+ (long long)typesetterBehavior;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)stringWithInkEventQueueOptions:(unsigned int)arg1;
+ (id)stringWithDispatchCommand:(unsigned int)arg1;
+ (id)stringWithInkEventDisposition:(unsigned int)arg1;
+ (id)stringWithCarbonEventKind:(unsigned int)arg1;
+ (id)stringWithCarbonEventClass:(unsigned int)arg1;
+ (id)stringWithDispatchCommandUnCached:(unsigned int)arg1;
+ (id)stringWithButtonDown:(BOOL)arg1;
+ (id)stringWithEventSubType:(int)arg1;
+ (id)stringWithInkCDFlag:(unsigned int)arg1;
+ (id)stringWithInkFlags:(unsigned int)arg1;
+ (id)stringWithInkModifiers:(unsigned int)arg1;
+ (id)stringWithInkTermType:(unsigned char)arg1;
+ (id)stringWithEventType:(unsigned long long)arg1;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })significantText;
- (void)enumerateLinguisticTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 usingBlock:(id)arg5;
- (id)linguisticTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 tokenRanges:(id*)arg5;
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;
- (id)_web_HTTPStyleLanguageCode;
- (id)stringMarkingUpcaseTransitionsWithDelimiter2:(id)arg1;
- (id)urlPathRelativeToPath:(id)arg1;
- (BOOL)_web_isJavaScriptURL;
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;
- (id)_web_fileNameFromContentDispositionHeader_nowarn;
- (id)_web_characterSetFromContentTypeHeader_nowarn;
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;
- (id)_web_parseAsKeyValuePair_nowarn;
- (id)_web_splitAtNonDateCommas_nowarn;
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)arg1;
- (unsigned int)_web_extractFourCharCode;
- (id)_web_stringByCollapsingNonPrintingCharacters;
- (id)_web_URLFragment;
- (BOOL)_web_isFileURL;
- (BOOL)_web_looksLikeAbsoluteURL;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLHost;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLUserPasswordHostPort;
- (id)_web_fixedCarbonPOSIXPath;
- (id)_web_stringByExpandingTildeInPath;
- (id)_web_domainFromHost;
- (BOOL)_web_domainMatches:(id)arg1;
- (BOOL)_web_hasCaseInsensitivePrefix:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLScheme_nowarn;
- (id)_web_stringByTrimmingWhitespace;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLResourceSpecifier_nowarn;
- (long long)_web_countOfString:(id)arg1;
- (BOOL)_web_hasCountryCodeTLD;
- (BOOL)_web_looksLikeIPAddress;
- (unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (id)_copyFormatStringWithConfiguration:(id)arg1;
- (id)formatConfiguration;
- (id)propertyListFromStringsFileFormat;
- (id)initWithFormat:(id)arg1 locale:(id)arg2;
- (id)initWithData:(id)arg1 usedEncoding:(unsigned long long*)arg2;
- (id)stringByFoldingWithOptions:(unsigned long long)arg1 locale:(id)arg2;
- (long long)localizedCompare:(id)arg1;
- (id)_stringRepresentation;
- (id)_initWithBytesOfUnknownEncoding:(char *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 usedEncoding:(unsigned long long*)arg4;
- (id)_initWithDataOfUnknownEncoding:(id)arg1;
- (void)_getBlockStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 stopAtLineSeparators:(BOOL)arg5;
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)_flushRegularExpressionCaches;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfRegularExpressionPattern:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
- (BOOL)matchesPattern:(id)arg1;
- (BOOL)matchesPattern:(id)arg1 caseInsensitive:(BOOL)arg2;
- (BOOL)_matchesCharacter:(unsigned short)arg1;
- (id)_getBracketedStringFromBuffer:(struct _NSStringBuffer { unsigned long long x1; unsigned long long x2; id x3; unsigned long long x4; unsigned long long x5; unsigned short x6[32]; unsigned short x7; unsigned short x8; }*)arg1 string:(id)arg2;
- (BOOL)isCaseInsensitiveLike:(id)arg1;
- (BOOL)isLike:(id)arg1;
- (id)_scriptingTextDescriptor;
- (int)_scriptingAlternativeValueRankWithDescriptor:(id)arg1;
- (id)stringByConvertingURLToPath;
- (id)stringByConvertingPathToURL;
- (unsigned long long)completePathIntoString:(id*)arg1 caseSensitive:(BOOL)arg2 matchesIntoArray:(id*)arg3 filterTypes:(id)arg4;
- (id)__oldnf_componentsSeparatedBySet:(id)arg1;
- (BOOL)__oldnf_containsChar:(BOOL)arg1;
- (BOOL)__oldnf_containsCharFromSet:(id)arg1;
- (id)__oldnf_stringWithSeparator:(unsigned short)arg1 atFrequency:(long long)arg2;
- (void)__oldnf_copyToUnicharBuffer:(unsigned short**)arg1 saveLength:(long long*)arg2;
- (BOOL)__oldnf_containsString:(id)arg1;
- (BOOL)_web_isCaseInsensitiveEqualToString:(id)arg1;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; }[1])arg3;
- (id)__escapeString5991;
- (id)_web_filenameByFixingIllegalCharacters;
- (void)getCString:(char *)arg1;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (BOOL)_getBytesAsData:(id*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (id)_getCharactersAsStringInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)quotedStringRepresentation;
- (BOOL)_allowsDirectEncoding;
- (const char *)lossyCString;
- (unsigned long long)cStringLength;
- (id)precomposedStringWithCompatibilityMapping;
- (id)decomposedStringWithCompatibilityMapping;
- (BOOL)_getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned int)arg3;
- (unsigned int)_fastestEncodingInCFStringEncoding;
- (unsigned int)_smallestEncodingInCFStringEncoding;
- (unsigned char)_encodingCantBeStoredInEightBitCFString;
- (unsigned long long)smallestEncoding;
- (unsigned long long)fastestEncoding;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1;
- (id)_stringByStandardizingPathUsingCache:(BOOL)arg1;
- (id)_createSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (BOOL)_isCString;
- (BOOL)scriptingContains:(id)arg1;
- (BOOL)scriptingEndsWith:(id)arg1;
- (BOOL)scriptingBeginsWith:(id)arg1;
- (BOOL)scriptingIsGreaterThan:(id)arg1;
- (BOOL)scriptingIsGreaterThanOrEqualTo:(id)arg1;
- (BOOL)scriptingIsLessThan:(id)arg1;
- (BOOL)scriptingIsLessThanOrEqualTo:(id)arg1;
- (BOOL)scriptingIsEqualTo:(id)arg1;
- (BOOL)isNSString__;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (id)stringByRemovingPercentEscapes;
- (const char *)cString;
- (id)standardizedURLPath;
- (id)stringByAddingPercentEscapes;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)stringByReplacingCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (id)initWithUTF8String:(const char *)arg1;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 zone:(struct _NSZone { }*)arg2;
- (id)initWithCString:(const char *)arg1;
- (long long)localizedStandardCompare:(id)arg1;
- (void)enumerateLinesUsingBlock:(id)arg1;
- (id)componentsSeparatedByCharactersInSet:(id)arg1;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (void)getCharacters:(unsigned short*)arg1;
- (id)capitalizedStringWithLocale:(id)arg1;
- (id)lowercaseStringWithLocale:(id)arg1;
- (id)uppercaseStringWithLocale:(id)arg1;
- (BOOL)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfComposedCharacterSequencesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)displayableString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lineRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)decomposedStringWithCanonicalMapping;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (id)stringsByAppendingPaths:(id)arg1;
- (id)commonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (id)propertyList;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
- (BOOL)getBytes:(char *)arg1 maxLength:(unsigned long long)arg2 filledLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 allowLossyConversion:(BOOL)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (BOOL)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (id)stringByPaddingToLength:(unsigned long long)arg1 withString:(id)arg2 startingAtIndex:(unsigned long long)arg3;
- (id)capitalizedString;
- (void)enumerateSubstringsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id)arg3;
- (id)stringByTrimmingCharactersInSet:(id)arg1;
- (unsigned long long)_cfTypeID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (BOOL)isAbsolutePath;
- (id)stringByExpandingTildeInPath;
- (id)pathComponents;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)lastPathComponent;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2;
- (id)stringByStandardizingPath;
- (id)stringByDeletingLastPathComponent;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;
- (id)stringByDeletingPathExtension;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)arg1;
- (Class)classForCoder;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfComposedCharacterSequenceAtIndex:(unsigned long long)arg1;
- (id)initWithFormat:(id)arg1;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4;
- (id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)componentsSeparatedByString:(id)arg1;
- (id)uppercaseString;
- (int)intValue;
- (id)substringFromIndex:(unsigned long long)arg1;
- (void)getLineStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(BOOL)arg2;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)stringByResolvingSymlinksInPath;
- (id)lowercaseString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (BOOL)getExternalRepresentation:(id*)arg1 extendedAttributes:(id*)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned long long)arg4 error:(id*)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterFromSet:(id)arg1;
- (void)getParagraphStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)pathExtension;
- (long long)compare:(id)arg1;
- (const char *)fileSystemRepresentation;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)longLongValue;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)hasSuffix:(id)arg1;
- (id)stringByAppendingPathComponent:(id)arg1;
- (const char *)UTF8String;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (float)floatValue;
- (id)initWithFormat:(id)arg1 arguments:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; }[1])arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)substringToIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringByAppendingString:(id)arg1;
- (id)stringByAppendingFormat:(id)arg1;
- (BOOL)hasPrefix:(id)arg1;
- (unsigned long long)hash;
- (BOOL)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)initWithString:(id)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (id)substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)integerValue;
- (BOOL)boolValue;
- (double)doubleValue;
- (const unsigned short*)_fastCharacterContents;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2;
- (id)precomposedStringWithCanonicalMapping;
- (long long)_caseInsensitiveNumericCompare:(id)arg1;
- (id)CI_lineWrappedStringWithIndent:(unsigned int)arg1;
- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;
- (long long)_NSNavShortVersionCompare:(id)arg1;
- (long long)_NSNavFilePropertyCompareCaseInsenstive:(id)arg1;
- (long long)_NSNavFilePropertyCompare:(id)arg1;
- (long long)_NSNavDisplayNameCompare:(id)arg1 caseSensitive:(BOOL)arg2;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 withAttributes:(id)arg2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAttributes:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeWithAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeWithSize:(struct CGSize { double x1; double x2; })arg1 attributes:(id)arg2;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 attributes:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2 attributes:(id)arg3;
- (id)stringWithoutAmpersand;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfGraphicalSegmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)_endOfParagraphAtIndex:(unsigned long long)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;

@end
