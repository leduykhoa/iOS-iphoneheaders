/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MBContainer.h>

@class NSDictionary, NSArray, NSString;

@interface MBApp : MBContainer {

	NSDictionary* _entitlements;
	NSArray* _groups;
	NSArray* _plugins;

}

@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,retain) NSString * bundleDir; 
@property (nonatomic,retain) NSDictionary * entitlements;              //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,retain) NSArray * groups;                         //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSArray * plugins;                        //@synthesize plugins=_plugins - In the implementation block
@property (nonatomic,readonly) NSArray * containers; 
@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (nonatomic,readonly) BOOL isSystemApp; 
+(id)appWithPropertyList:(id)arg1 ;
+(id)appWithBundleID:(id)arg1 ;
+(id)safeHarborWithPath:(id)arg1 ;
-(void)setGroups:(NSArray *)arg1 ;
-(NSArray *)groups;
-(void)setPlugins:(NSArray *)arg1 ;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(id)domain;
-(NSString *)bundleID;
-(NSDictionary *)entitlements;
-(NSString *)bundleVersion;
-(BOOL)isPlaceholder;
-(id)_resourceRelativePathsToBackupAndRestoreForRootDir:(id)arg1 relativePath:(id)arg2 ;
-(NSString *)bundleDir;
-(id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)arg1 ;
-(void)setBundleDir:(NSString *)arg1 ;
-(BOOL)isSystemApp;
-(id)placeholderDomainWithCache:(id)arg1 ;
-(NSArray *)containers;
-(NSArray *)plugins;
@end
