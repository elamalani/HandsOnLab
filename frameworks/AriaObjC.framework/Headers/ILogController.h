#ifndef ILogController_h
#define ILogController_h
//
//  Copyright (c) 2017 Microsoft. All rights reserved.
//

#import "ILogger.h"
#import "EnumCommon.h"

#import <Foundation/Foundation.h>

#define EVTILogController EVTILogControllerV1

extern NSString *_Nonnull const EVTTransmitProfile_RealTime;
extern NSString *_Nonnull const EVTTransmitProfile_NearRealTime;
extern NSString *_Nonnull const EVTTransmitProfile_BestEffort;

/*!
 @brief EVTILogControllerV1
*/
@protocol EVTILogControllerV1 <NSObject>

/*!
 @brief Attempts to send any pending telemetry events that are currently cached either in memory, or on disk.
 */
- (enum EVTStatus)uploadNow;

/*!
 @brief Pauses the transmission of telemetry events to the data collector.
 @details While paused, events continue to be queued on the client side&mdash;cached either in memory or on disk.
 */
- (enum EVTStatus)pauseTransmission;

/*!
 @brief Resumes the transmission of telemetry events to the data collector.
 */
- (enum EVTStatus)resumeTransmission;

/*!
 @brief Sets the transmit profile for event transmission, given the name of a transmit profile.
 @details A transmit profile is a collection of hardware and system settings (like network connectivity, power state, etc.)
 that determines how efficiently telemetry events are transmitted.
 @param profileName A string that contains the name of the transmit profile you want to set.
 */
- (enum EVTStatus)setTransmitProfile:(nonnull NSString *)profileName;

/*!
 @brief Loads the transmit profiles specified in JSON.
 @param profilesJSON A string that contains the JSON that contains the transmit profiles.
 */
- (enum EVTStatus)loadTransmitProfiles:(nonnull NSString *)profilesJSON;

@end

#endif // ILogController_h
