#ifndef LogManagerProvider_h
#define LogManagerProvider_h

#import "ILogManager.h"
#include "ILogController.h"

#import "ILogConfiguration.h"
#import "EnumCommon.h"

#import <Foundation/Foundation.h>

#define CurrentTargetVersion 0x0100

/// <summary>
/// </summary>
@interface EVTLogManagerProvider : NSObject

/// <summary>
/// Create a new configuration object.  The SDK owns the memory.
/// Sets the configuration and then passes it to GetLogManager.
/// <returns>A configuration object.</returns>
/// </summary>
+ (nonnull id<EVTILogConfiguration>)createLogConfiguration;

/// <summary>
/// <returns>Status.</returns>
/// </summary>
+ (enum EVTStatus)discardLogManagerForApiKey:(nonnull NSString *)apiKey;

/// <summary>
/// Gets the LogManager with the current configuration.
/// The same LogManager is returned for the same apiKey specified.
/// <param name="apiKey">API Key.</param>
/// <param name="error">Out parameter to indicate any error or partial success.</param>
/// </summary>
+ (nullable id<EVTILogManager>)logManagerForApiKey:(nonnull NSString *)apiKey error:(NSError *_Nullable *_Nullable)error;

/// <summary>
/// Gets the LogManager with the current configuration.
/// The returned LogManager is has the ability to set transmission controls.
/// The same LogManager is returned for the same apiKey specified.
/// <param name="apiKey">API Key.</param>
/// <param name="error">Out parameter to indicate any error or partial success.</param>
/// </summary>
+ (nullable id<EVTILogManager>)logManagerWithControllerForApiKey:(nonnull NSString *)apiKey error:(NSError *_Nullable *_Nullable)error;

/// <summary>
/// Gets the LogManager.  The passed in configuration is used to
/// initialize the telemetry channel, if it hasn't been initialized.
/// If the telemetry channel was already initialized then the passed in
/// configuration is ignored.
/// The returned LogManager is has the ability to set transmission controls.
/// The same ILogManager is returned for the same apiKey specified.
/// <param name="apiKey">API Key.</param>
/// <param name="config">Configuration settings.</param>
/// <param name="error">Out parameter to indicate any error or partial success.</param>
/// </summary>
+ (nullable id<EVTILogManager>)logManagerWithControllerForApiKey:(nonnull NSString *)apiKey configuration:(nullable id<EVTILogConfiguration>)config error:(NSError *_Nullable *_Nullable)error;

@end

#endif // LogManagerProvider_h
