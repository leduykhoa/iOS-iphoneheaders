/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@class NSURLRequest;

@interface AsyncRequestBlockOperation : NSBlockOperation {

	NSURLRequest* _request;

}

@property (nonatomic,retain) NSURLRequest * request;              //@synthesize request=_request - In the implementation block
-(NSURLRequest *)request;
-(void)setRequest:(NSURLRequest *)arg1 ;
@end

