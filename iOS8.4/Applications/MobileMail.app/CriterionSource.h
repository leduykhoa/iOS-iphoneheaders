/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/GenericSource.h>

@protocol MiniMallSource;
@class MFMessageCriterion, NSMutableArray, MFSparseMutable64IndexSet, NSArray;

@interface CriterionSource : GenericSource {

	id<MiniMallSource> _source;
	MFMessageCriterion* _criterion;
	NSMutableArray* _messageInfos;
	NSMutableArray* _conversations;
	CFDictionaryRef _conversationTopMessageInfos;
	MFSparseMutable64IndexSet* _conversationHashes;
	unsigned _failedToLoadOlderMessages : 1;
	NSArray* _observationTokens;

}

@property (nonatomic,retain) MFMessageCriterion * criterion; 
+(Class)classForSourceType:(unsigned)arg1 ;
-(char)representsMailboxUid:(id)arg1 ;
-(int)correspondingType;
-(char)supportsSearch;
-(id)mailboxUids;
-(void)setLastViewedMessage:(id)arg1 ;
-(char)supportsDeleteAll;
-(char)deleteMovesToTrash;
-(char)supportsMoveAll;
-(char)supportsMarkAll;
-(id)accountForAutoFetch;
-(char)shouldShowUnreadCount;
-(char)shouldCompactOnFetch;
-(id)lastViewedMessage;
-(id)messageForMessageID:(id)arg1 ;
-(id)uniqueIDForStorage;
-(char)representsMailboxID:(unsigned)arg1 ;
-(void)reloadPreferences;
-(void)setProtectedDataAvailable:(char)arg1 ;
-(void)_messagesCompacted:(id)arg1 ;
-(void)_conversationHasMerged:(id)arg1 ;
-(void)_sourceDidReload:(id)arg1 ;
-(unsigned)currentFetchWindow;
-(int)fetchMobileSynchronously:(unsigned)arg1 preservingUID:(id)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 ;
-(id)oldestKnownMessage;
-(id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(char)arg2 ;
-(id)cachedMessageForMessageInfo:(id)arg1 ;
-(id)bulletinsContext;
-(unsigned)remoteMessageCount;
-(void)markAllMessagesAsDeletedOrArchived:(unsigned)arg1 withObserver:(id)arg2 ;
-(void)moveAllMessagesWithObserver:(id)arg1 toMailbox:(id)arg2 ;
-(char)needsFetch;
-(char)shouldThreadConversations;
-(char)shouldArchiveByDefaultForMessageInfos:(id)arg1 ;
-(char)deleteMovesToTrashForMessageInfos:(id)arg1 ;
-(char)supportsArchivingForMessageInfos:(id)arg1 ;
-(id)_conversations;
-(void)_forwardNotification:(id)arg1 ;
-(id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 ;
-(int)fetchNumOlderMessages:(unsigned)arg1 preservingUID:(id)arg2 ;
-(id)remoteIDsUsingSearchContext:(id)arg1 limit:(unsigned)arg2 error:(id*)arg3 ;
-(id)equivalentCriterion;
-(char)supportsFlagging;
-(char)shouldIncludeWholeThreads;
-(char)shouldPlayNewMailSound;
-(char)canLoadOlderMessages;
-(void)_loadMessages;
-(void)_handleSourceNotification:(id)arg1 ;
-(id)initWithSource:(id)arg1 criterion:(id)arg2 ;
-(id)loadMoreServerCriterion;
-(id)_filterMessage:(id)arg1 ;
-(void)_nts_insertMessageInfos:(id)arg1 addedMessages:(id)arg2 ;
-(CFDictionaryRef)_copyConversationTopMessageInfosForMessageInfos:(id)arg1 ;
-(id)_copyConversationHashesForMessageInfos:(id)arg1 ;
-(void)_nts_replaceIfNecessaryConversationTopMessageInfo:(id)arg1 ;
-(id)_copyCriterionForConversations:(id)arg1 ;
-(char)isSearchingLocalStore;
-(unsigned)messageCount;
-(void)dealloc;
-(unsigned)type;
-(char)isProtectedDataAvailable;
-(void)close;
-(void)applyChanges;
-(void)open;
-(void)flushCaches;
-(void)registerForNotifications;
-(id)diagnosticDescription;
-(id)lastViewedMessageDate;
-(char)supportsArchiving;
-(char)shouldArchiveByDefault;
-(char)shouldGrowFetchWindow;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(char)canFetchSearchResults;
-(int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(MFMessageCriterion *)criterion;
-(void)setCriterion:(MFMessageCriterion *)arg1 ;
-(id)mailboxName;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(long long)oldestKnownConversation;
-(id)initWithSource:(id)arg1 ;
@end
