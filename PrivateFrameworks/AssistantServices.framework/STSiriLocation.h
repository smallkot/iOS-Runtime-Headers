/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface STSiriLocation : NSObject <AFTranscriptionType> {
    NSURL * _addressBookID;
    NSString * _addressLabel;
    NSString * _contactName;
    NSData * _geoResult;
    int  _resultType;
}

@property (nonatomic, copy) NSURL *addressBookID;
@property (nonatomic, copy) NSString *addressLabel;
@property (nonatomic, copy) NSString *contactName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *geoResult;
@property (readonly) unsigned int hash;
@property (nonatomic) int resultType;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addressBookID;
- (id)addressLabel;
- (id)contactName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)geoResult;
- (id)initWithCoder:(id)arg1;
- (int)resultType;
- (void)setAddressBookID:(id)arg1;
- (void)setAddressLabel:(id)arg1;
- (void)setContactName:(id)arg1;
- (void)setGeoResult:(id)arg1;
- (void)setResultType:(int)arg1;

@end
