/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioManagedObjectWrapperProtocol.h>

@class NSManagedObject, RadioModel, NSArray, NSData, NSURL, NSString, NSDictionary, RadioArtworkCollection;

@interface RadioStation : NSObject <RadioManagedObjectWrapperProtocol> {

	char _databaseBacked;
	char _editEnabled;
	char _isExplicit;
	char _featured;
	char _gatewayVideoAdEnabled;
	char _premiumPlacement;
	char _shared;
	char _sharingEnabled;
	char _sponsored;
	char _subscribed;
	char _likesEnabled;
	char _previewOnly;
	char _skipEnabled;
	char _virtualPlayEnabled;
	NSManagedObject* _managedObject;
	RadioModel* _model;
	NSArray* _trackPlaybackDescriptorQueue;
	NSData* _adData;
	NSURL* _artworkURL;
	NSData* _artworkURLData;
	NSString* _coreSeedName;
	NSDictionary* _debugDictionary;
	NSArray* _editableFields;
	unsigned _impressionThreshold;
	NSString* _name;
	id _seedTracks;
	NSString* _shareToken;
	int _skipFrequency;
	NSString* _skipIdentifier;
	NSArray* _skipTimestamps;
	int _songMixType;
	int _sortOrder;
	NSString* _stationDescription;
	NSString* _stationHash;
	NSURL* _streamURL;
	NSURL* _streamCertificateURL;
	NSURL* _streamKeyURL;
	int _subscriberCount;
	long long _adamID;
	long long _persistentID;
	double _skipInterval;
	long long _stationID;

}

@property (assign,nonatomic) long long stationID;                                                    //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                                                   //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long persistentID;                                                 //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) long long adamID;                                                       //@synthesize adamID=_adamID - In the implementation block
@property (assign,nonatomic) int sortOrder;                                                          //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * stationDescription;                                            //@synthesize stationDescription=_stationDescription - In the implementation block
@property (nonatomic,readonly) RadioArtworkCollection * artworkCollection; 
@property (nonatomic,copy) NSURL * artworkURL;                                                       //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy) NSString * coreSeedName;                                                  //@synthesize coreSeedName=_coreSeedName - In the implementation block
@property (assign,getter=isPreviewOnly,nonatomic) char previewOnly;                                  //@synthesize previewOnly=_previewOnly - In the implementation block
@property (nonatomic,retain) id seedTracks;                                                          //@synthesize seedTracks=_seedTracks - In the implementation block
@property (assign,nonatomic) int songMixType;                                                        //@synthesize songMixType=_songMixType - In the implementation block
@property (assign,nonatomic) char editEnabled;                                                       //@synthesize editEnabled=_editEnabled - In the implementation block
@property (nonatomic,retain) NSArray * editableFields;                                               //@synthesize editableFields=_editableFields - In the implementation block
@property (assign,nonatomic) char isExplicit;                                                        //@synthesize isExplicit=_isExplicit - In the implementation block
@property (assign,nonatomic) char likesEnabled;                                                      //@synthesize likesEnabled=_likesEnabled - In the implementation block
@property (assign,nonatomic) char skipEnabled;                                                       //@synthesize skipEnabled=_skipEnabled - In the implementation block
@property (assign,nonatomic) int skipFrequency;                                                      //@synthesize skipFrequency=_skipFrequency - In the implementation block
@property (nonatomic,copy) NSString * skipIdentifier;                                                //@synthesize skipIdentifier=_skipIdentifier - In the implementation block
@property (assign,nonatomic) double skipInterval;                                                    //@synthesize skipInterval=_skipInterval - In the implementation block
@property (nonatomic,copy) NSArray * skipTimestamps;                                                 //@synthesize skipTimestamps=_skipTimestamps - In the implementation block
@property (nonatomic,copy) NSArray * trackPlaybackDescriptorQueue;                                   //@synthesize trackPlaybackDescriptorQueue=_trackPlaybackDescriptorQueue - In the implementation block
@property (assign,nonatomic) char virtualPlayEnabled;                                                //@synthesize virtualPlayEnabled=_virtualPlayEnabled - In the implementation block
@property (assign,getter=isFeatured,nonatomic) char featured;                                        //@synthesize featured=_featured - In the implementation block
@property (assign,getter=isGatewayVideoAdEnabled,nonatomic) char gatewayVideoAdEnabled;              //@synthesize gatewayVideoAdEnabled=_gatewayVideoAdEnabled - In the implementation block
@property (assign,getter=isSponsored,nonatomic) char sponsored;                                      //@synthesize sponsored=_sponsored - In the implementation block
@property (nonatomic,retain) NSData * adData;                                                        //@synthesize adData=_adData - In the implementation block
@property (assign,nonatomic) unsigned impressionThreshold;                                           //@synthesize impressionThreshold=_impressionThreshold - In the implementation block
@property (assign,getter=isPremiumPlacement,nonatomic) char premiumPlacement;                        //@synthesize premiumPlacement=_premiumPlacement - In the implementation block
@property (getter=isPreview,nonatomic,readonly) char preview; 
@property (nonatomic,retain) NSURL * streamURL;                                                      //@synthesize streamURL=_streamURL - In the implementation block
@property (nonatomic,retain) NSURL * streamCertificateURL;                                           //@synthesize streamCertificateURL=_streamCertificateURL - In the implementation block
@property (nonatomic,retain) NSURL * streamKeyURL;                                                   //@synthesize streamKeyURL=_streamKeyURL - In the implementation block
@property (assign,getter=isSharingEnabled,nonatomic) char sharingEnabled;                            //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (assign,getter=isShared,nonatomic) char shared;                                            //@synthesize shared=_shared - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) char subscribed;                                    //@synthesize subscribed=_subscribed - In the implementation block
@property (assign,nonatomic) int subscriberCount;                                                    //@synthesize subscriberCount=_subscriberCount - In the implementation block
@property (nonatomic,copy) NSString * shareToken;                                                    //@synthesize shareToken=_shareToken - In the implementation block
@property (nonatomic,copy) NSDictionary * debugDictionary;                                           //@synthesize debugDictionary=_debugDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * feedbackDictionaryRepresentation; 
@property (nonatomic,copy) NSData * artworkURLData;                                                  //@synthesize artworkURLData=_artworkURLData - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDatabaseBacked,nonatomic,readonly) char databaseBacked;                          //@synthesize databaseBacked=_databaseBacked - In the implementation block
@property (nonatomic,readonly) NSManagedObject * managedObject;                                      //@synthesize managedObject=_managedObject - In the implementation block
@property (nonatomic,readonly) RadioModel * model;                                                   //@synthesize model=_model - In the implementation block
-(char)isSubscribed;
-(void)setSubscribed:(char)arg1 ;
-(char)isShared;
-(NSString *)stationHash;
-(long long)stationID;
-(void)setPersistentID:(long long)arg1 ;
-(NSString *)stationDescription;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(RadioModel *)model;
-(NSDictionary *)dictionaryRepresentation;
-(void)setShared:(char)arg1 ;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(NSURL *)artworkURL;
-(long long)persistentID;
-(NSManagedObject *)managedObject;
-(NSDictionary *)debugDictionary;
-(char)isFeatured;
-(char)isSponsored;
-(NSData *)artworkURLData;
-(char)editEnabled;
-(char)isGatewayVideoAdEnabled;
-(char)isPremiumPlacement;
-(NSString *)shareToken;
-(NSString *)skipIdentifier;
-(char)virtualPlayEnabled;
-(id)seedTracks;
-(void)setAdData:(NSData *)arg1 ;
-(void)setArtworkURLData:(NSData *)arg1 ;
-(void)setCoreSeedName:(NSString *)arg1 ;
-(void)setDebugDictionary:(NSDictionary *)arg1 ;
-(void)setEditEnabled:(char)arg1 ;
-(void)setEditableFields:(NSArray *)arg1 ;
-(void)setFeatured:(char)arg1 ;
-(void)setGatewayVideoAdEnabled:(char)arg1 ;
-(void)setImpressionThreshold:(unsigned)arg1 ;
-(void)setIsExplicit:(char)arg1 ;
-(void)setLikesEnabled:(char)arg1 ;
-(void)setPremiumPlacement:(char)arg1 ;
-(void)setPreviewOnly:(char)arg1 ;
-(void)setSeedTracks:(id)arg1 ;
-(void)setSharingEnabled:(char)arg1 ;
-(void)setShareToken:(NSString *)arg1 ;
-(void)setSkipEnabled:(char)arg1 ;
-(void)setSkipFrequency:(int)arg1 ;
-(void)setSkipIdentifier:(NSString *)arg1 ;
-(void)setSkipInterval:(double)arg1 ;
-(void)setSkipTimestamps:(NSArray *)arg1 ;
-(void)setSponsored:(char)arg1 ;
-(void)setStationDescription:(NSString *)arg1 ;
-(void)setStreamURL:(NSURL *)arg1 ;
-(void)setStreamCertificateURL:(NSURL *)arg1 ;
-(void)setStreamKeyURL:(NSURL *)arg1 ;
-(void)setSubscriberCount:(int)arg1 ;
-(void)setVirtualPlayEnabled:(char)arg1 ;
-(NSArray *)skipTimestamps;
-(NSURL *)streamURL;
-(NSURL *)streamCertificateURL;
-(NSURL *)streamKeyURL;
-(void)_radioModelWasDeletedNotification:(id)arg1 ;
-(char)isDatabaseBacked;
-(id)initWithModel:(id)arg1 managedObject:(id)arg2 ;
-(id)artworkURLForSize:(CGSize)arg1 expectedSize:(CGSize*)arg2 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(RadioArtworkCollection *)artworkCollection;
-(NSString *)coreSeedName;
-(NSArray *)editableFields;
-(char)isSharingEnabled;
-(char)likesEnabled;
-(int)subscriberCount;
-(char)isExplicit;
-(char)skipEnabled;
-(int)skipFrequency;
-(double)skipInterval;
-(NSData *)adData;
-(void)setTrackPlaybackDescriptorQueue:(NSArray *)arg1 ;
-(NSArray *)trackPlaybackDescriptorQueue;
-(char)isPreviewOnly;
-(void)setSongMixType:(int)arg1 ;
-(int)songMixType;
-(NSDictionary *)feedbackDictionaryRepresentation;
-(char)isPreview;
-(unsigned)impressionThreshold;
-(long long)adamID;
-(void)setAdamID:(long long)arg1 ;
@end

