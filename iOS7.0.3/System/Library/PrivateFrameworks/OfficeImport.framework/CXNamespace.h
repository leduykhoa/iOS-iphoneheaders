/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CXNamespace : NSObject {

	const char* mUri;
	xmlDoc* mDocument;
	xmlNs* mDocumentNamespace;

}
+(BOOL)isPrefixSupportedFromNodeContext:(xmlNode*)arg1 prefix:(const char*)arg2 ;
+(void)registerNamespace:(id)arg1 ;
+(BOOL)isNamespaceSupported:(const char*)arg1 ;
+(BOOL)isPrefixSupportedFromStream:(xmlTextReaderRef)arg1 prefix:(const char*)arg2 ;
+(void)clearRegisteredNamespaces;
-(BOOL)containsNode:(xmlNode*)arg1 ;
-(BOOL)containsAttribute:(xmlAttr*)arg1 ;
-(const char*)uri;
-(id)initWithUri:(const char*)arg1 ;
-(id)initUnsupportedNsWithUri:(const char*)arg1 ;
@end

