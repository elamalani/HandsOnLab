#ifndef ILogConfiguration_h
#define ILogConfiguration_h
//
//  Copyright (c) 2017 Microsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 @brief  [optional] The URI of the event collector.
 @details <b>Note:</b> If you don't specify a value, a default value is provided for you.
 Set with EVTLogConfiguration::setValue:forKey:
*/
extern NSString *__nonnull const EVTConfigurationCollectorUri;

/*!
 @brief [optional] Sets the minimum trace level used for trace logs.
 Set to one of the ::EVTTraceLevel enumeration values.
 Set with EVTLogConfiguration::setValue:forKey:
*/
extern NSString *__nonnull const EVTConfigurationMinimumTraceLevel;

/*!
 @brief  [optional] The maximum amount of time (in seconds) needed to upload offline events upon teardown.
 Set with EVTLogConfiguration::setValue:forKey:
*/
extern NSString *__nonnull const EVTConfigurationMaxTeardownUploadTimeInSec;

/*!
 @brief  [optional] A string that contains the fully-qualified path of the file used to cache events on the client side.
 @details Specify a cache file path to minimize the possibility of data loss. Doing so
 persists events to local file storage&mdash;so that they can then be sent in the next telemetry session.
 Set with EVTLogConfiguration::setValue:forKey:
*/
extern NSString *__nonnull const EVTConfigurationPersistenceFilePath;

/*!
 @brief  [optional] The size limit of the disk file used to cache events on the client side.
 @details Exceeding this size limit can cause events already in the file cache to be dropped when new events are created.
 Set with EVTLogConfiguration::setValue:forKey:
*/
extern NSString *__nonnull const EVTConfigurationPersistenceFileSizeLimitInBytes;

/*!
 @brief [optional] The number of retry attempts to send an event, before dropping the event.
 @details The default number of retries is 18.  The configurable range is 3-18 attempts.
 Set with EVTLogConfiguration::setValue:forKey:
*/
extern NSString *__nonnull const EVTConfigurationRetryLimit;

/*!
 @brief The EVTLogConfiguration class configures the telemetry logging system.
*/
@protocol EVTILogConfiguration <NSObject>

/*!
 @brief Creates a default instance of the EVTLogConfiguration interface.
*/
- (nullable instancetype)init;

/*!
 @brief Sets a value for the specified key.
*/
- (void)setValue:(nullable id)value forKey:(nonnull NSString *)key;

/*!
 @brief Returns the value of the specified key.
*/
- (nullable id)valueForKey:(nonnull NSString *)key;

@end

#endif // ILogConfiguration_h
