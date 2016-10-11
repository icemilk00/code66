//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "MMDBRestore.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class NSString;

@interface MMDBRestoreViewController : MMWindowViewController <MMDBRestore, UIAlertViewDelegate, WCActionSheetDelegate>
{
}

- (void)onRestoreProgressUpdate:(float)arg1;
- (void)safeUpdateProgress:(float)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onRestore;
- (void)alertWithResult:(_Bool)arg1 error:(id)arg2;
- (void)initView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
