/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface PaymentTransaction : SQLiteEntity
+(id)_predicateForPersistentID:(id)arg1 ;
+(id)anyInDatabase:(id)arg1 withPersistentID:(id)arg2 ;
+(void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2 ;
+(id)_propertySettersForPaymentTransaction;
+(void)truncateEntitiesForPass:(id)arg1 withNotificationServiceSource:(char)arg2 inDatabase:(id)arg3 toCount:(int)arg4 ;
+(id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2 forPassWithUniqueIdentifier:(id)arg3 ;
+(id)bestMatchWithTransactionIdentifier:(id)arg1 transactionDate:(id)arg2 transactionSources:(unsigned)arg3 forPassUniqueIdentifier:(id)arg4 inDatabase:(id)arg5 ;
+(id)insertPaymentTransaction:(id)arg1 withPaymentPass:(id)arg2 paymentApplication:(id)arg3 merchant:(id)arg4 inDatabase:(id)arg5 ;
+(id)paymentTransactionsInDatabase:(id)arg1 forPaymentPassUniqueIdentifier:(id)arg2 ;
+(id)_predicateForPaymentPass:(id)arg1 ;
+(id)_predicateForPassWithUniqueIdentifier:(id)arg1 ;
+(id)_predicateForIdentifier:(id)arg1 ;
+(id)_predicateForIncludesTransactionSource:(unsigned)arg1 ;
+(id)_predicateForDoesNotIncludeTransactionSource:(unsigned)arg1 ;
+(id)_predicateForMerchantPersistentID:(id)arg1 ;
+(id)_predicateForExclusiveTransactionSource:(unsigned)arg1 ;
+(id)_predicateForTransactionIdentifer:(id)arg1 ;
+(id)_predicateForTransactionDate:(id)arg1 withinWindow:(double)arg2 ;
+(id)_paymentTransactionsInDatabase:(id)arg1 matchingPredicate:(id)arg2 ;
+(id)_predicateForPaymentApplication:(id)arg1 ;
+(id)_predicateForMerchant:(id)arg1 ;
+(id)paymentTransactionsInDatabase:(id)arg1 forPaymentPass:(id)arg2 ;
+(id)paymentTransactionsInDatabase:(id)arg1 forPaymentApplication:(id)arg2 ;
+(id)paymentTransactionsInDatabase:(id)arg1 forMerchant:(id)arg2 ;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)databaseTable;
+(id)joinClauseForProperty:(id)arg1 ;
-(id)merchantPeristantID;
-(char)processedForMerchantCleanup;
-(void)updateProcessedForMerchantCleanup:(char)arg1 ;
-(void)updateWithTransactionSources:(unsigned)arg1 ;
-(void)updateWithPaymentTransaction:(id)arg1 merchant:(id)arg2 ;
-(id)paymentTransaction;
-(id)initWithPaymentTransaction:(id)arg1 paymentPass:(id)arg2 paymentApplication:(id)arg3 merchant:(id)arg4 inDatabase:(id)arg5 ;
-(char)deleteFromDatabase;
@end
