/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupVerificationMethodTableController : NSObject <UITableViewDataSource, UITableViewDelegate> {
    unsigned int  _selectedIndex;
    NSArray * _verificationChannels;
    PKPaymentVerificationController * _verificationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *verificationChannels;
@property (nonatomic, readonly) PKPaymentVerificationController *verificationController;

- (void).cxx_destruct;
- (id)_detailTextLabelForChannel:(id)arg1;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)initWithVerificationController:(id)arg1;
- (id)newVerificationRequest;
- (int)numberOfSectionsInTableView:(id)arg1;
- (unsigned int)selectedIndex;
- (void)setSelectedIndex:(unsigned int)arg1;
- (void)setVerificationChannels:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)verificationChannels;
- (id)verificationController;

@end