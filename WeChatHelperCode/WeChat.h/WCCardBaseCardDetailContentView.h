//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMTableView, WCCardDetailContentViewLogicController;

@interface WCCardBaseCardDetailContentView : MMUIView
{
    _Bool _bIsSelectFollowContact;
    WCCardDetailContentViewLogicController *_logicController;
    MMTableView *_tableView;
}

@property(nonatomic) _Bool bIsSelectFollowContact; // @synthesize bIsSelectFollowContact=_bIsSelectFollowContact;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCCardDetailContentViewLogicController *logicController; // @synthesize logicController=_logicController;
- (void).cxx_destruct;
- (void)serviceFollowBtnPress:(id)arg1;
- (void)onPhoneBtnPress:(id)arg1;
- (void)makeCellBottomLineWithRowType:(id)arg1 withIndexPath:(id)arg2 withCell:(id)arg3 withCellContentHeight:(double)arg4;
- (void)makeGeneralCell:(id)arg1 title:(id)arg2 subTitle:(id)arg3 hasHandle:(_Bool)arg4 ShowFlag:(unsigned int)arg5;
- (void)makeGiftToFriendCell:(id)arg1;
- (void)makeCellList0Cell:(id)arg1 withIndexPath:(id)arg2;
- (void)makeViewBrandCell:(id)arg1;
- (void)makeUsedStoresCell:(id)arg1;
- (void)makeOneShopCell:(id)arg1;
- (void)makeDetailViewCell:(id)arg1;
- (void)makeUseConditionCell:(id)arg1;
- (void)makeOperateCell:(id)arg1;
- (double)calcNearbyShopCellHeight;
- (double)calcUsedConditionCellHeight;
- (double)calcDetailViewCellHeight;
- (double)calcOperationFieldCellHeight;
- (void)setMainText:(id)arg1 subText:(id)arg2;
- (struct CGRect)getHeaderViewApplyBtnFrame;
- (struct CGRect)getShareCardEnterListBtnRect;
- (void)updateCardContentWithCardDataSource:(id)arg1 isShareCardMode:(_Bool)arg2 withOneUsedStoreInfo:(id)arg3 withServiceContact:(id)arg4 withCardStatus:(int)arg5;
- (void)onNearbyShopPhoneNumClick;
- (double)getCommonCellHeight;
- (void)reloadContentData;
- (id)initConentViewWithFrame:(struct CGRect)arg1;

@end
