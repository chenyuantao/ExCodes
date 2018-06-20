//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class GetContactLogic, NSLock, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, WCContactDB;

@interface ContactStorage : MMService <MMService>
{
    WCContactDB *m_contactDB;
    unsigned int m_uLoadedType;
    GetContactLogic *_getContactLogic;
    GetContactLogic *_getStrangerLogic;
    NSLock *m_lock;
    NSMutableDictionary *m_dictContacts;
    BOOL m_hasClearData;
    BOOL _hasGetContactForAllFavContactsDone;
    NSObject<OS_dispatch_queue> *_getContactOnStartANewChatQueue;
}

+ (void)DeleteContactDatabase;
@property(nonatomic) BOOL hasGetContactForAllFavContactsDone; // @synthesize hasGetContactForAllFavContactsDone=_hasGetContactForAllFavContactsDone;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *getContactOnStartANewChatQueue; // @synthesize getContactOnStartANewChatQueue=_getContactOnStartANewChatQueue;
- (void).cxx_destruct;
- (void)_GetContactForAllFavContacts;
- (void)GetContactOnStartChatWithContact:(id)arg1;
- (id)GetAllFriendContacts;
- (void)SearchContactWithKeyword:(id)arg1;
- (BOOL)DeleteContactByUI:(id)arg1 ListType:(unsigned int)arg2;
- (BOOL)ModifyChatStatusNotifyOpen:(BOOL)arg1 withUserName:(id)arg2 syncToServer:(BOOL)arg3;
- (BOOL)ModifyIsFav:(BOOL)arg1 withUserName:(id)arg2;
- (BOOL)modifyContactTypeWithFlag:(unsigned int)arg1 setOpen:(BOOL)arg2 userName:(id)arg3 syncToServer:(BOOL)arg4;
- (BOOL)ModifyIsTop:(BOOL)arg1 withUserName:(id)arg2 syncToServer:(BOOL)arg3;
- (BOOL)ModifyRemarkWithUserName:(id)arg1 remark:(id)arg2 syncToServer:(BOOL)arg3;
- (BOOL)ModifyRemarkWithUserName:(id)arg1 remark:(id)arg2;
- (BOOL)ModifyCardDescriptionWithUserName:(id)arg1 cardDescription:(id)arg2;
- (unsigned int)GetFavContactsCount;
- (BOOL)updateContact:(id)arg1 withTagList:(id)arg2;
- (BOOL)UpdateLocalizedContact:(id)arg1;
- (id)GetAllFavContacts;
- (id)GetContactList:(unsigned int)arg1 ContactType:(unsigned int)arg2;
- (id)GetContactWithUserName:(id)arg1 updateIfNeeded:(BOOL)arg2;
- (id)GetContactsWithUserNames:(id)arg1;
- (id)GetContact:(id)arg1;
- (id)GetSelfContact;
- (BOOL)IsFriendContact:(id)arg1;
- (BOOL)IsContactExistInCache:(id)arg1;
- (BOOL)IsContactExist:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (void)notifyDeleteContactsOnMainThread:(id)arg1;
- (void)notifyDeleleteContactOnMainThread:(id)arg1;
- (void)notifyModifyContactsOnMainThread:(id)arg1;
- (void)notifyModifyStrangerContactsOnMainThread:(id)arg1;
- (void)notifyModifyContactOnMainThread:(id)arg1;
- (id)genTencentNewsContact;
- (void)addTencentNewsPluginContact;
- (void)addLocalHardCodeContact;
- (id)genContactDataFromModContact:(id)arg1;
- (BOOL)deleteContactInLocal:(id)arg1;
- (BOOL)loadContactsWithType:(unsigned int)arg1;
- (void)removeContactCache:(id)arg1;
- (void)setContactsCache:(id)arg1;
- (void)setContactCache:(id)arg1;
- (unsigned long long)contactCacheCount;
- (id)allKeysOfContactCache;
- (id)getContactCache:(id)arg1;
- (BOOL)deleteContactByServer:(id)arg1;
- (id)getContactFromModContact:(id)arg1;
- (void)UpdateNormalContactFromSvr:(id)arg1;
- (BOOL)GetStrangerContactsFromSvr:(id)arg1;
- (BOOL)GetNormalContactsFromSvr:(id)arg1;
- (BOOL)ModifyAntispamTicket:(id)arg1 antispamTicket:(id)arg2;
- (BOOL)ModifyImgStatus:(id)arg1 imgStatus:(id)arg2;
- (BOOL)DeleteContactOnDelCmd:(id)arg1;
- (void)OnHandleStrangerContacts_ThreadWith:(id)arg1 AndAntispamTicketList:(id)arg2;
- (void)OnModContacts_Thread:(id)arg1;
- (void)onModifySelfContact:(id)arg1;
- (BOOL)updateBrandContact:(id)arg1;
- (id)GenBrandHolderContact;
- (id)GetAllBrandContacts;
- (BOOL)addOpLog_ModifyBrandContact:(id)arg1 sync:(BOOL)arg2;
- (BOOL)isSkipContact:(id)arg1;
- (BOOL)addOpLog_DeleteChatContact:(id)arg1 sync:(BOOL)arg2;
- (BOOL)addOpLog_ModifyContact:(id)arg1 sync:(BOOL)arg2;
- (BOOL)addOpLog_ModifyContact:(id)arg1 addScene:(unsigned int)arg2 sync:(BOOL)arg3;
- (BOOL)addOpLog_ModifyContact:(id)arg1 withCardDescription:(id)arg2 sync:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

