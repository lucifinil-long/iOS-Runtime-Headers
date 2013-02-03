/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonTableViewDataSource, NSString, ABModel, UIViewController, <ABPersonNameDisplayChangeDelegate>;

@interface ABPersonViewControllerHelper : NSObject <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonTableViewDataSourceDelegate, ABPropertyPickerViewControllerDelegate, ABPropertyEditorViewControllerDelegate, UIActionSheetDelegate> {
    id _actionSheetDelegate;
    void *_addressBook;
    BOOL _allowsAddingToAddressBook;
    BOOL _animatedRight;
    BOOL _automaticallySetEditing;
    id _deletionDelegate;
    void *_displayedPerson;
    id _imagePicker;
    BOOL _isLocation;
    NSInteger _lastKnownOrientation;
    ABModel *_model;
    <ABPersonNameDisplayChangeDelegate> *_nameDisplayChangeDelegate;
    ABPersonTableViewDataSource *_personTableViewDataSource;
    NSString *_shareMessageBody;
    BOOL _shareMessageBodyIsHTML;
    NSString *_shareMessageSubject;
    BOOL _shouldAddToAddressBookWhenPropertyIsSaved;
    BOOL _showsCancelButton;
    struct __CFDictionary { } *_valueByProperty;
    UIViewController *_viewController;
}

@property(copy) NSString *shareMessageSubject; /* unknown property attribute: V_shareMessageSubject */
@property(copy) NSString *shareMessageBody; /* unknown property attribute: V_shareMessageBody */
@property BOOL shareMessageBodyIsHTML; /* unknown property attribute: V_shareMessageBodyIsHTML */
@property <ABPersonNameDisplayChangeDelegate> *nameDisplayChangeDelegate; /* unknown property attribute: V_nameDisplayChangeDelegate */
@property(retain) ABModel *model; /* unknown property attribute: V_model */
@property BOOL isLocation; /* unknown property attribute: V_isLocation */
@property BOOL shouldAddToAddressBookWhenPropertyIsSaved; /* unknown property attribute: V_shouldAddToAddressBookWhenPropertyIsSaved */
@property BOOL showsCancelButton; /* unknown property attribute: V_showsCancelButton */
@property BOOL allowsAddingToAddressBook; /* unknown property attribute: V_allowsAddingToAddressBook */
@property BOOL automaticallySetEditing; /* unknown property attribute: V_automaticallySetEditing */
@property void *addressBook;
@property(copy) NSString *alternateName;
@property(readonly) NSString *attribution;
@property void *displayedPerson;
@property(copy) NSString *message;
@property(copy) NSString *messageDetail;
@property(retain) UIFont *messageDetailFont;
@property(retain) UIFont *messageFont;
@property(retain) UIView *personHeaderView;
@property(readonly) ABPersonTableViewDataSource *personTableViewDataSource;
@property(readonly) UIViewController *viewController;
@property(readonly) UIView *viewForActionSheet;
@property BOOL allowsActions;
@property BOOL allowsAddToFavorites;
@property BOOL allowsCardEditing;
@property BOOL allowsRingtone;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsSharing;
@property(getter=isAttributionEnabled,readonly) BOOL attributionEnabled;
@property(getter=isPartiallyFilled,readonly) BOOL partiallyFilled;

- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(NSInteger)arg5 withActionGrouping:(NSInteger)arg6 ordering:(NSInteger)arg7;
- (void)addPersonToAddressBookIfNeeded;
- (void*)addressBook;
- (BOOL)allowsActions;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsAddingToAddressBook;
- (BOOL)allowsCardEditing;
- (BOOL)allowsRingtone;
- (BOOL)allowsSendingTextMessage;
- (BOOL)allowsSharing;
- (id)alternateName;
- (id)attribution;
- (BOOL)automaticallySetEditing;
- (void)cancel:(id)arg1;
- (id)cardController;
- (void)dealloc;
- (void)deleteSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)dismissModalViewControllerForMail:(id)arg1;
- (void*)displayedPerson;
- (void)getVCardData:(id*)arg1 fileName:(id*)arg2;
- (BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(NSInteger)arg4 actionGrouping:(NSInteger)arg5 ordering:(NSInteger)arg6;
- (void)imagePicker:(id)arg1 pickedPhoto:(id)arg2;
- (void)imagePicker:(id)arg1 presentActionSheet:(id)arg2;
- (void)imagePickerWillBeRemoved:(id)arg1;
- (void)imagePickerWillBeShown:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (BOOL)isAttributionEnabled;
- (BOOL)isLocation;
- (BOOL)isPartiallyFilled;
- (BOOL)loadChatKitAndReturnBundle:(id*)arg1;
- (BOOL)loadFrameworkAtPath:(id)arg1 andStoreHandle:(void**)arg2 bundle:(id*)arg3;
- (BOOL)loadMessageUIAndReturnBundle:(id*)arg1;
- (void)loadUnknownViewWithPerson:(void*)arg1 allowActions:(BOOL)arg2;
- (void)loadViewWithDisplayedProperties:(struct __CFArray { }*)arg1 person:(void*)arg2 allowDeletion:(BOOL)arg3 allowActions:(BOOL)arg4;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(NSInteger)arg2 error:(id)arg3;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (id)model;
- (id)nameDisplayChangeDelegate;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldDismissAfterInsertEditorConfirmed:(BOOL)arg2 withPerson:(void*)arg3;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowCardForPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(NSInteger*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)perfomActionAtIndex:(NSInteger)arg1 forPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3 property:(NSInteger)arg4;
- (void)perfomActionAtIndex:(NSInteger)arg1 forPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (id)personHeaderView;
- (id)personImageView;
- (void)personTableViewDataSource:(id)arg1 selectedAddOptionalProperties:(struct __CFArray { }*)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 selectedAddValueInPropertyGroup:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedDeletePerson:(void*)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(BOOL)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedNameForEditing:(BOOL)arg2;
- (BOOL)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(BOOL)arg5;
- (void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 selectedSetRingtoneForEditing:(BOOL)arg2;
- (BOOL)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;
- (id)personTableViewDataSource;
- (void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;
- (id)personViewDelegate;
- (id)prepareViewWithDisplayedProperties:(struct __CFArray { }*)arg1 person:(void*)arg2 allowActions:(BOOL)arg3;
- (void)presentAddToContactsSheetIfNeeded:(id)arg1;
- (void)presentNewContactViewControllerForAddToContacts:(id)arg1;
- (void)presentPeoplePickerNavigationControllerForAddToContacts:(id)arg1;
- (void)presentShareContactViewController:(id)arg1;
- (void)propertyEditorViewController:(id)arg1 confirmed:(BOOL)arg2 afterEditingProperty:(NSInteger)arg3;
- (void)propertyEditorViewController:(id)arg1 confirmedAfterEditingName:(BOOL)arg2;
- (void)propertyPicker:(id)arg1 selectedProperty:(NSInteger)arg2;
- (void)pushPropertyEditorForProperty:(NSInteger)arg1 identifier:(NSInteger)arg2;
- (void)pushViewController:(id)arg1;
- (void)reloadData;
- (void)reloadImageData;
- (void)remove;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(NSInteger)arg3 withActionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5;
- (void)removeRecord:(void*)arg1;
- (void)ringtonePicker:(id)arg1 selectedRingtoneWithIdentifier:(id)arg2;
- (void*)selectedPerson;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setAllowsCardEditing:(BOOL)arg1;
- (void)setAllowsRingtone:(BOOL)arg1;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setAutomaticallySetEditing:(BOOL)arg1;
- (void)setDates:(id)arg1 withMessageFormat:(id)arg2;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 important:(BOOL)arg3;
- (void)setIsLocation:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setNameDisplayChangeDelegate:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPrimaryProperty:(NSInteger)arg1 countryCode:(id)arg2;
- (void)setShareMessageBody:(id)arg1;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShouldAddToAddressBookWhenPropertyIsSaved:(BOOL)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (void)setStringValue:(id)arg1 forProperty:(NSInteger)arg2;
- (void)shareActionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)shareContact:(id)arg1;
- (void)shareContactByEmail:(id)arg1;
- (void)shareContactByTextMessage:(id)arg1;
- (id)shareMessageBody;
- (BOOL)shareMessageBodyIsHTML;
- (id)shareMessageSubject;
- (BOOL)shouldAddToAddressBookWhenPropertyIsSaved;
- (BOOL)shouldShowAddToExistingContact;
- (void)showImageMenu;
- (void)showRingtonePicker;
- (BOOL)showsCancelButton;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tearDownImagePickerController;
- (id)unknownPersonViewDelegate;
- (id)vCardFileName;
- (id)viewController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (id)viewForActionSheet;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
