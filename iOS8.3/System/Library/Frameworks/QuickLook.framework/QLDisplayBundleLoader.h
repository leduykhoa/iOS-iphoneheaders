/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:07:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject {

	NSMutableDictionary* _displayBundlesById;

}
+(id)sharedLoader;
-(void)_lookForDisplayBundles;
-(Class)loadDisplayBundle:(id)arg1 ;
-(Class)displayBundleClassForDocumentType:(id)arg1 ;
-(id)copyDisplayBundleWithPreviewItem:(id)arg1 displayBundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
