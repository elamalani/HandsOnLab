#ifndef ISemanticContext_h
#define ISemanticContext_h

// Copyright (c) 2017 Microsoft. All rights reserved.

#import "EnumCommon.h"
#import <Foundation/Foundation.h>

/*!
 @brief The EVTISemanticContext class represents a semantic context.
*/
@protocol EVTISemanticContext <NSObject>

/*!
 @brief Sets the application identifier context information for the telemetry event.
 @param anId A string that uniquely identifies the user-facing application from which this event originates.
 */
- (enum EVTStatus)setAppId:(nonnull NSString *)anId;

/*!
 @brief Sets the application version context information for the telemetry event.
 @param appVersion A string that contains the version of the application, retrieved programmatically.
 <b>Note:</b> The application version is both application-specific and platform-specific.
 */
- (enum EVTStatus)setAppVersion:(nonnull NSString *)appVersion;

/*!
 @brief Sets the network provider context information for the telemetry event.
 @details <b>Note:</b> You can set this value at the LogManager level only.
 Setting it via the object obtained from ILogger produces a <i>no-op</i>.
 @param networkProvider The provider used to connect to the current network, retrieved programmatically where possible.
 This information is both application-specific and platform-specific.
 */
- (enum EVTStatus)setNetworkProvider:(nonnull NSString *)networkProvider;

/*!
 @brief Sets the user ID context information for the telemetry event, and tags it as PII (Personal Identifiable Information).
 @param userId A string that uniquely identifies the user in the application-specific user namespace.
 @param propKind The kind of PII.
 The default value is <i>PIIKind_Identify</i>.
 To denote this user as non-PII, set this value to <i>PiiKind_None</i>.
 */
- (enum EVTStatus)setUserId:(nonnull NSString *)userId kind:(enum EVTPropertyValueKind)propKind;

/*!
 @brief Sets the user Microsoft Account ID context information for the telemetry event.
 @param userMsaId A string that contains the MSA ID that identifies the user in the application-specific user namespace.
 */
- (enum EVTStatus)setUserMsaId:(nonnull NSString *)userMsaId;

/*!
 @brief Sets the user ID context information for the telemetry event.
 @param userId A string that uniquely identifies the user in the application-specific user namespace.
 */
- (enum EVTStatus)setUserId:(nonnull NSString *)userId;

/*!
 @brief Sets the user advertising ID context information for the telemetry event.
 @param userAdvertisingId A string that contains the user advertising ID of the user in an application-specific user namespace.
 */
- (enum EVTStatus)setUserAdvertisingId:(nonnull NSString *)userAdvertisingId;

/*!
 @brief Sets the user spoken language context information for the telemetry event.
 @param userLanguage A string that contains the name of the user's spoken language in [IETF language tag format](https://www.ietf.org/rfc/rfc4646.txt).
 */
- (enum EVTStatus)setUserLanguage:(nonnull NSString *)userLanguage;

/*!
 @brief Sets the user's time zone context information for the telemetry event.
 @details Time zone is a time value - offset from Coordinated Universal Time (UTC).
 For example, for a device in Washington, the value might be -08:00.
 You get this value programmatically from the user's device, from Date/Calendar objects in various languages.
 @param userTimeZone A string that contains the user's time zone relative to UTC, in [ISO 8601 time zone format](https://www.iso.org/iso-8601-date-and-time-format.html).
 */
- (enum EVTStatus)setUserTimeZone:(nonnull NSString *)userTimeZone;

/*!
 @brief Sets the application spoken/written language information for the telemetry event.
 @param appLanguage A string that contains the spoken/written language used in the application.
 */
- (enum EVTStatus)setAppLanguage:(nonnull NSString *)appLanguage;

@end

#endif /*! ISemanticContext_h */
