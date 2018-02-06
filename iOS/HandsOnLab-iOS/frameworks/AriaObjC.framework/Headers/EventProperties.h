#ifndef EventProperties_h
#define EventProperties_h

#import "EnumCommon.h"
#import "EnumDataBinding.h"

#import <Foundation/Foundation.h>

/*!
 The <b>EVTEventProperties</b> class represents an event's properties.
 */
@interface EVTEventProperties : NSObject <NSCopying>

/*!
 @brief A string that contains the name of the event. If you don't specify a name, a default name is used. E.g., for logPageView, name = "PageView".
 */
@property (nonatomic, strong, nonnull) NSString *eventName;

/*!
 @brief The priority for sending this event, as an ::EVTEventPriority enumeration value.
 */
@property (nonatomic, assign) enum EVTEventPriority eventPriority;

/*!
 @brief The persistence for saving this event, as an ::EVTEventPersistence enumeration value.
 */
@property (nonatomic, assign) enum EVTEventPersistence eventPersistence;

/*!
 @brief The latency for sending this event, as an ::EVTEventLatency enumeration value.
 */
@property (nonatomic, assign) enum EVTEventLatency eventLatency;

/*!
 Gets a dictionary that contains personal identifiable information (PII) values.
 */
@property (NS_NONATOMIC_IOSONLY, readonly, copy, nonnull) NSDictionary *piiValues;

/*!
 Gets a dictionary that contains personal identifiable information (PII) tags.
 */
@property (NS_NONATOMIC_IOSONLY, readonly, copy, nonnull) NSDictionary *piiTags;

/*!
 Gets a dictionary that contains customer content values.
 */
@property (NS_NONATOMIC_IOSONLY, readonly, copy, nonnull) NSDictionary *customerContentValues;

/*!
 Gets a dictionary that contains customer content tags.
 */
@property (NS_NONATOMIC_IOSONLY, readonly, copy, nonnull) NSDictionary *customerContentTags;

- (nonnull NSDictionary *)propertiesForCategory:(enum EVTDataCategory)category;
- (nonnull NSDictionary *)piiValuesForCategory:(enum EVTDataCategory)category;
- (nonnull NSDictionary *)piiTagsForCategory:(enum EVTDataCategory)category;
- (nonnull NSDictionary *)customerContentValuesForCategory:(enum EVTDataCategory)category;
- (nonnull NSDictionary *)customerContentTagsForCategory:(enum EVTDataCategory)category;
- (nonnull NSDictionary *)stringPropertiesForCategory:(enum EVTDataCategory)category;
- (nonnull NSDictionary *)boolPropertiesForCategory:(enum EVTDataCategory)category;
- (nonnull NSDictionary *)datePropertiesForCategory:(enum EVTDataCategory)category;
- (nonnull NSDictionary *)longPropertiesForCategory:(enum EVTDataCategory)category;
- (nonnull NSDictionary *)doublePropertiesForCategory:(enum EVTDataCategory)category;
- (nonnull NSDictionary *)UUIDPropertiesForCategory:(enum EVTDataCategory)category;

/*!
 @brief Constructs an EVTEventProperties object, taking an event name.
 @param name A string that contains the name of the event.
 @return An instance of the EVTEventProperties interface.
 */
- (nullable instancetype)initWithName:(nonnull NSString *)name NS_DESIGNATED_INITIALIZER;
- (nullable instancetype)init;
- (void)dealloc;

/*! @brief Gets the record's UNIX timestamp, measured in milliseconds. */
@property (NS_NONATOMIC_IOSONLY) int64_t timestamp;

/*!
 @brief Sets a string property for an event.
 @param value A string that contains the property value.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setStringValue:(nonnull NSString *)value forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string property for an event.
 @param value A string that contains the property value.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setStringValue:(nonnull NSString *)value category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string property for an event, and tags it with a Personal Identifiable Information (PII) kind.
 @param value A string that contains the property value.
 @param piiKind The kind of Personal Identifiable Information (PII), as one of the ::EVTPropertyValueKind enumeration values.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setStringValue:(nonnull NSString *)value kind:(enum EVTPropertyValueKind)piiKind forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string property for an event, and tags it with a Personal Identifiable Information (PII) kind.
 @param value A string that contains the property value.
 @param piiKind The kind of Personal Identifiable Information (PII), as one of the ::EVTPropertyValueKind enumeration values.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setStringValue:(nonnull NSString *)value kind:(enum EVTPropertyValueKind)piiKind category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a boolean property for an event.
 @param value The property's boolean value.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setBoolValue:(BOOL)value forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a boolean property for an event.
 @param value The property's boolean value.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setBoolValue:(BOOL)value category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a date property for an event.
 @param value The property's date value.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setDateValue:(nonnull NSDate *)value forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a date property for an event.
 @param value The property's date value.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setDateValue:(nonnull NSDate *)value category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a double property for an event.
 @param value The property's double value.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setDoubleValue:(double)value forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a double property for an event.
 @param value The property's double value.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setDoubleValue:(double)value category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a long property for an event.
 @param value The property's long value.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setLongValue:(int64_t)value forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a long property for an event.
 @param value The property's long value.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setLongValue:(int64_t)value category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a UUID (Universally Unique ID) property for an event.
 @param value The property's UUID value.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setUUIDValue:(nonnull NSUUID *)value forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a UUID (Universally Unique ID) property for an event.
 @param value The property's UUID value.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setUUIDValue:(nonnull NSUUID *)value category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string array property for an event.
 @param stringArrayValue The property's string array value.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setStringArrayValue:(nonnull NSArray *)stringArrayValue forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string array property for an event.
 @param stringArrayValue The property's string array value.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setStringArrayValue:(nonnull NSArray *)stringArrayValue category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string array property for an event.
 @param boolArrayValue The property's boolean array value.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setBoolArrayValue:(nonnull NSArray *)boolArrayValue forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string array property for an event.
 @param boolArrayValue The property's boolean array value.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setBoolArrayValue:(nonnull NSArray *)boolArrayValue category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string array property for an event.
 @param dateArrayValue The property's date array value.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setDateArrayValue:(nonnull NSArray *)dateArrayValue forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string array property for an event.
 @param dateArrayValue The property's date array value.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setDateArrayValue:(nonnull NSArray *)dateArrayValue category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string array property for an event.
 @param longArrayValue The property's long array value.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setLongArrayValue:(nonnull NSArray *)longArrayValue forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string array property for an event.
 @param longArrayValue The property's long array value.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setLongArrayValue:(nonnull NSArray *)longArrayValue category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string array property for an event.
 @param doubleArrayValue The property's double array value.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setDoubleArrayValue:(nonnull NSArray *)doubleArrayValue forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string array property for an event.
 @param doubleArrayValue The property's double array value.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setDoubleArrayValue:(nonnull NSArray *)doubleArrayValue category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string array property for an event.
 @param uuidArrayValue The property's uuid array value.
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setUUIDArrayValue:(nonnull NSArray *)uuidArrayValue forProperty:(nonnull NSString *)prop;

/*!
 @brief Sets a string array property for an event.
 @param uuidArrayValue The property's uuid array value.
 @param category The type of data category
 @param prop A string that contains the name of the property.
 */
- (enum EVTStatus)setUUIDArrayValue:(nonnull NSArray *)uuidArrayValue category:(enum EVTDataCategory)category forProperty:(nonnull NSString *)prop;

- (id _Nonnull)copyWithZone:(nullable NSZone *)zone;

@end

#endif // EventProperties_h
