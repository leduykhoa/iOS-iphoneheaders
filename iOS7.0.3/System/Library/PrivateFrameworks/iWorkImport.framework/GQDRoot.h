/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQDRoot : NSObject {

	CFDictionaryRef mUidToObjectMap;
	BOOL mAppBundleColorMapLoaded;
	CFDictionaryRef mAppBundleResourceToColorMap;
	BOOL mAppBundleResourcesUrlInitialized;
	CFURLRef mAppBundleResourcesUrl;
	BOOL mIsOldAssetNameMapInitialized;
	CFDictionaryRef mOldAssetNameMap;
	int mAppBundleVersion;
	unsigned long long mDocVersion;

}
+(xmlNs*)appNamespace;
-(const char*)addIdentifiedObject:(id)arg1 fromCurrentNode:(xmlTextReaderRef)arg2 ;
-(id)objectWithXmlUid:(const char*)arg1 ;
-(BOOL)addObject:(id)arg1 withOwnedXmlUid:(const char*)arg2 ;
-(void)forgetAboutObject:(id)arg1 withXmlUid:(const char*)arg2 ;
-(void)loadAppBundleResourceToColorMap;
-(CFURLRef)appBundleResourcesUrl;
-(BOOL)appBundleCanProcessCurrentDocVersion;
-(id)colorForMissingAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 ;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 ;
-(void)initializeAppBundleResourcesUrl;
-(BOOL)readDocumentVersion:(xmlTextReaderRef)arg1 isTooNew:(BOOL*)arg2 ;
-(unsigned)documentReleaseVersion;
-(Class)classForName:(const char*)arg1 ;
-(BOOL)includeStyleWithIdentifier:(const char*)arg1 parentIdentifier:(const char*)arg2 uid:(const char*)arg3 ;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 fileExists:(BOOL*)arg3 ;
-(BOOL)readDocumentVersion:(xmlTextReaderRef)arg1 ;
-(void)dealloc;
-(id)init;
-(id)uuid;
@end

