/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, TSUPathSet, NSMutableSet, TSUTemporaryDirectory;

@interface TSPDistributableFileManager : NSObject {

	NSString* _directoryPath;
	BOOL _shouldCreate;
	TSUPathSet* _claimedPaths;
	NSMutableSet* _newIdentifiers;
	NSMutableSet* _modifiedIdentifiers;
	NSMutableSet* _deletedIdentifiers;
	TSUTemporaryDirectory* _modifiedFilesDirectory;
	BOOL _isCullingDisabled;

}
-(void)setDataFromInputStream:(id)arg1 length:(long long)arg2 forIdentifier:(id)arg3 ;
-(id)addDataFromInputStream:(id)arg1 length:(long long)arg2 filenameHint:(id)arg3 ;
-(id)initWithPath:(id)arg1 shouldCreate:(BOOL)arg2 ;
-(BOOL)commitWithError:(id*)arg1 ;
-(id)_filePathForIdentifier:(id)arg1 ;
-(id)_filePathForModifiedIdentifier:(id)arg1 ;
-(id)_claimedPaths;
-(void)_writeDataFromInputStream:(id)arg1 length:(long long)arg2 toPath:(id)arg3 ;
-(id)_modifiedFilesDirectoryPath;
-(id)addDataRepresentation:(id)arg1 filenameHint:(id)arg2 ;
-(void)setDataRepresentation:(id)arg1 forIdentifier:(id)arg2 ;
-(id)representationForIdentifier:(id)arg1 ;
-(void)disableFileCulling;
-(BOOL)prepareForSaveToPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)rehomeOntoPath:(id)arg1 ;
-(void)removeIdentifier:(id)arg1 ;
-(void).cxx_destruct;
@end

