/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLAbstractObject.h>

@class CPLPlatformObject, NSProgress, NSString, CPLLibraryManager;

@interface CPLChangeSession : NSObject <CPLAbstractObject> {

	CPLPlatformObject* _platformObject;
	NSProgress* _sessionProgress;
	NSString* _sessionIdentifier;
	CPLLibraryManager* _libraryManager;
	unsigned _state;

}

@property (nonatomic,readonly) NSProgress * sessionProgress;                    //@synthesize sessionProgress=_sessionProgress - In the implementation block
@property (nonatomic,readonly) NSString * sessionIdentifier;                    //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) CPLLibraryManager * libraryManager;              //@synthesize libraryManager=_libraryManager - In the implementation block
@property (assign,nonatomic) unsigned state;                                    //@synthesize state=_state - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;              //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
+(id)stateDescriptionForState:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)state;
-(NSString *)sessionIdentifier;
-(void)setState:(unsigned)arg1 ;
-(void)resume;
-(void)pause;
-(CPLPlatformObject *)platformObject;
-(id)_sessionLogDomain;
-(CPLLibraryManager *)libraryManager;
-(void)tearDownWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithLibraryManager:(id)arg1 ;
-(void)beginSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSProgress *)sessionProgress;
-(void)finalizeWithCompletionHandler:(/*^block*/id)arg1 ;
@end

