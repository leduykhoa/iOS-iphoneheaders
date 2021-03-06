/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:57 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/DownloadError.h>
#import <itunesstored/NSCopying.h>

@interface DownloadNetworkConstraintError : DownloadError <NSCopying> {

	char _canDownloadInITunes;
	long long _sizeLimit;

}

@property (assign,nonatomic) char canDownloadInITunes;                    //@synthesize canDownloadInITunes=_canDownloadInITunes - In the implementation block
@property (assign,nonatomic) long long constrainedSizeLimit;              //@synthesize sizeLimit=_sizeLimit - In the implementation block
-(char)canCoalesceWithError:(id)arg1 ;
-(char)isValidError;
-(long long)constrainedSizeLimit;
-(char)canDownloadInITunes;
-(id)_specificStringWithLocalizedKeyBase:(id)arg1 ;
-(id)_genericStringWithLocalizedKeyBase:(id)arg1 ;
-(void)setCanDownloadInITunes:(char)arg1 ;
-(void)setConstrainedSizeLimit:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyUserNotification;
@end

