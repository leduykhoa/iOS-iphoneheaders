/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSURL, NSMutableData, NSURLConnection, NSString, NSData, GEOSimpleTileRequester;

@interface _GEOTileDownloadOp : NSObject <NSURLConnectionDelegate> {

	NSURL* _url;
	bool _requireWiFi;
	NSMutableData* _data;
	NSURLConnection* _conn;
	GEOTileKey _key;
	bool _finished;
	NSString* _editionHeader;
	unsigned _tileEdition;
	NSString* _userAgent;
	NSData* _auditToken;
	bool _useCookies;
	_GEOTileDownloadOp* _baseTile;
	_GEOTileDownloadOp* _localizationTile;
	unsigned long long _contentLength;
	GEOSimpleTileRequester* _delegate;
	bool _gotData;
	int _attempts;
	double _startTime;
	double _timeout;

}

@property (nonatomic,retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) bool requireWiFi;                                   //@synthesize requireWiFi=_requireWiFi - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                               //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURLConnection * conn;                             //@synthesize conn=_conn - In the implementation block
@property (nonatomic,retain) NSString * editionHeader;                           //@synthesize editionHeader=_editionHeader - In the implementation block
@property (nonatomic,retain) NSString * userAgent;                               //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSData * auditToken;                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) bool useCookies;                                    //@synthesize useCookies=_useCookies - In the implementation block
@property (nonatomic,retain) _GEOTileDownloadOp * baseTile;                      //@synthesize baseTile=_baseTile - In the implementation block
@property (nonatomic,retain) _GEOTileDownloadOp * localizationTile;              //@synthesize localizationTile=_localizationTile - In the implementation block
@property (assign) GEOTileKey key;                                               //@synthesize key=_key - In the implementation block
@property (assign) unsigned tileEdition;                                         //@synthesize tileEdition=_tileEdition - In the implementation block
@property (nonatomic,readonly) unsigned long long contentLength;                 //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,readonly) bool finished;                                    //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) double timeout;                                     //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) GEOSimpleTileRequester * delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(bool)finished;
-(unsigned long long)contentLength;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)cancel;
-(void)start;
-(GEOTileKey)key;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setKey:(GEOTileKey)arg1 ;
-(id)auditToken;
-(void)setUserAgent:(id)arg1 ;
-(void)setBaseTile:(id)arg1 ;
-(void)setLocalizationTile:(id)arg1 ;
-(id)baseTile;
-(id)localizationTile;
-(unsigned)tileEdition;
-(void)setRequireWiFi:(bool)arg1 ;
-(id)editionHeader;
-(void)setEditionHeader:(id)arg1 ;
-(void)setAuditToken:(id)arg1 ;
-(void)setUseCookies:(bool)arg1 ;
-(bool)useCookies;
-(void)setConn:(id)arg1 ;
-(double)elapsed;
-(id)conn;
-(void)setTileEdition:(unsigned)arg1 ;
-(bool)requireWiFi;
-(id)userAgent;
@end
