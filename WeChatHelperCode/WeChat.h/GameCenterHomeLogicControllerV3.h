//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IGameCenterExt.h"
#import "IGameCenterMsgNotifyExt.h"

@class GameCenterHomeData, GameCenterIndexTopBanner, GameCenterNotifyContent, NSMutableArray, NSMutableSet, NSString;

@interface GameCenterHomeLogicControllerV3 : MMObject <IGameCenterMsgNotifyExt, IGameCenterExt>
{
    GameCenterHomeData *_homeData;
    NSMutableArray *_sectionList;
    NSMutableArray *_rowListOfSectionMe;
    GameCenterIndexTopBanner *_topBanner;
    _Bool _fromFindFriendEntry;
    GameCenterNotifyContent *_gameCenterBubble;
    NSMutableSet *_msgCenterRedDotSet;
    GameCenterNotifyContent *_giftRedDot;
    CDUnknownBlockType _onRedDotChangedBlock;
    CDUnknownBlockType _requestHomePageDataCompleteBlock;
}

@property(copy, nonatomic) CDUnknownBlockType requestHomePageDataCompleteBlock; // @synthesize requestHomePageDataCompleteBlock=_requestHomePageDataCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType onRedDotChangedBlock; // @synthesize onRedDotChangedBlock=_onRedDotChangedBlock;
@property(retain, nonatomic) GameCenterNotifyContent *giftRedDot; // @synthesize giftRedDot=_giftRedDot;
@property(retain, nonatomic) NSMutableSet *msgCenterRedDotSet; // @synthesize msgCenterRedDotSet=_msgCenterRedDotSet;
@property(retain, nonatomic) GameCenterNotifyContent *gameCenterBubble; // @synthesize gameCenterBubble=_gameCenterBubble;
@property(nonatomic) _Bool fromFindFriendEntry; // @synthesize fromFindFriendEntry=_fromFindFriendEntry;
- (void).cxx_destruct;
- (id)getMsgCenterViewController;
- (void)onGameCenterDeleteOneMsg:(unsigned int)arg1;
- (void)onGameCenterDeleteAllMsg;
- (void)onGameCenterClearAllRedDot;
- (id)installedMore;
- (id)installedTitle;
- (id)installedGames;
- (id)classifyUrl;
- (id)searchPlaceholder;
- (_Bool)isShowSearchEntry;
- (id)hotAdList;
- (id)recentMoreData;
- (_Bool)hasRecentMoreCell;
- (id)libraryEntranceTitle;
- (_Bool)shouldShowFeedBackEntrance;
- (_Bool)shouldShowBubble;
- (id)myProfileJumpUrl;
- (id)msgCenterJumpUrl;
- (id)giftURL;
- (id)libraryURL;
- (id)welcomeMessage;
- (id)welcomeMoreUrl;
- (long long)getPromotedGameIdxFromTableRowIdx:(long long)arg1;
- (id)promotedGameAtIndex:(long long)arg1;
- (id)promotedGames;
- (id)recentGameAtIndex:(long long)arg1;
- (id)recentGames;
- (id)homeBottomImageUrl;
- (id)feedBackEntrace;
- (id)getGameIndexTopBanner;
- (id)userActionItems;
- (id)todayGameRecommend;
- (id)topRecommendBanner;
- (id)recentPlayInfo;
- (id)launchPrivilegeJumpUrl;
- (id)launchPrivilegeTitle;
- (_Bool)fetchNewHomeData;
- (id)titleOfSectionType:(unsigned long long)arg1;
- (unsigned long long)typeOfRow:(id)arg1;
- (unsigned long long)typeOfSection:(long long)arg1;
- (void)reloadRows;
- (void)reloadSections;
- (void)onFetchGameCenterHomeData:(id)arg1 error:(long long)arg2 FromHomeCgi:(_Bool)arg3;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)requestHomePageData:(CDUnknownBlockType)arg1 fromLocalCache:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
