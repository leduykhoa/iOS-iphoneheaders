/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectModel, NSDictionary, NSMappingModel, NSManagedObjectContext, NSMigrationContext, NSError;

@interface NSMigrationManager : NSObject {

	NSManagedObjectModel* _sourceModel;
	NSDictionary* _sourceEntitiesByVersionHash;
	NSManagedObjectModel* _destinationModel;
	NSDictionary* _destinationEntitiesByVersionHash;
	NSMappingModel* _mappingModel;
	NSManagedObjectContext* _sourceManagedObjectContext;
	NSManagedObjectContext* _destinationManagedObjectContext;
	NSMigrationContext* _migrationContext;
	NSDictionary* _userInfo;
	struct {
		unsigned _migrationWasCancelled : 1;
		unsigned _usesStoreSpecificMigrationManager : 1;
		unsigned _reservedMigrationManager : 30;
	}  _migrationManagerFlags;
	NSError* _migrationCancellationError;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;

}
+(int)migrationDebugLevel;
+(BOOL)_performSanityCheckForMapping:(id)arg1 fromSourceModel:(id)arg2 toDestinationModel:(id)arg3 ;
+(void)setMigrationDebugLevel:(int)arg1 ;
-(id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 ;
-(id)destinationContext;
-(id)_migrationContext;
-(void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3 ;
-(id)sourceInstancesForEntityMappingNamed:(id)arg1 destinationInstances:(id)arg2 ;
-(id)destinationEntityForEntityMapping:(id)arg1 ;
-(id)currentEntityMapping;
-(id)currentPropertyMapping;
-(void)_doCleanupOnFailure:(id)arg1 ;
-(BOOL)usesStoreSpecificMigrationManager;
-(id)sourceModel;
-(id)destinationModel;
-(BOOL)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8 ;
-(BOOL)_migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8 ;
-(id)_mappingNamed:(id)arg1 ;
-(id)sourceEntityForEntityMapping:(id)arg1 ;
-(id)mappingModel;
-(id)sourceContext;
-(id)destinationInstancesForEntityMappingNamed:(id)arg1 sourceInstances:(id)arg2 ;
-(id)destinationInstancesForSourceRelationshipNamed:(id)arg1 sourceInstances:(id)arg2 ;
-(float)migrationProgress;
-(void)cancelMigrationWithError:(id)arg1 ;
-(void)setUsesStoreSpecificMigrationManager:(BOOL)arg1 ;
-(id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2 includesSubentities:(BOOL)arg3 ;
-(id)_evaluateSourceExpressionForMapping:(id)arg1 entityPolicy:(id)arg2 ;
-(BOOL)_doFirstPassForMapping:(id)arg1 error:(id*)arg2 ;
-(BOOL)_doSecondPassForMapping:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateAllObjectsAfterMigration:(id*)arg1 ;
-(BOOL)_doThirdPassForMapping:(id)arg1 error:(id*)arg2 ;
-(id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2 ;
-(void)dealloc;
-(id)userInfo;
-(void)reset;
-(void)setUserInfo:(id)arg1 ;
@end

