//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IClearDataMgrExt.h"
#import "IScanAppSpaceSizeServiceExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSString;

@interface WCStorageUsageViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IClearDataMgrExt, IScanAppSpaceSizeServiceExt>
{
    MMTableView *_tableView;
    _Bool _bScanFinish;
    _Bool _bLoadFinish;
    unsigned long long _clearSize;
    NSString *navigationReturnButtonTitle;
}

@property(retain, nonatomic) NSString *navigationReturnButtonTitle; // @synthesize navigationReturnButtonTitle;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (unsigned long long)getDeviceStorageSize;
- (id)getWeChatUsageSize;
- (id)getUsageSize;
- (id)getFreeSize;
- (void)onCleanedCacheSize:(unsigned long long)arg1;
- (void)onLoadDataFinished;
- (void)onScanTaskFinished;
- (void)onReturn;
- (void)onClickWeChatUsage;
- (void)onClickDeviceUsage;
- (void)reloadWeChatUsageSection;
- (void)makeWeChatSectionCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)makeDeviceSectionCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)initData;
- (void)initView;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

