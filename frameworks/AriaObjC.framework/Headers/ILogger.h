#ifndef ILogger_h
#define ILogger_h

// Copyright (c) 2017 Microsoft. All rights reserved.

#import "ISemanticContext.h"
#import "EventProperties.h"
#import "EnumCommon.h"
#import <Foundation/Foundation.h>

/*!
 @brief The <b>EVTILogger</b> protocol logs either semantic or custom telemetry events.
 */
@protocol EVTILogger <NSObject>

/*!
 @brief An EVTISemanticContext object for setting the semantic context of this logger instance.
 */
@property (NS_NONATOMIC_IOSONLY, readonly, strong, nonnull) id<EVTISemanticContext> semanticContext;

#pragma mark Basic LogEvent methods

/*!
 @brief Logs a custom event with a specified name.
 @param name A string that contains the name of the event.
 */
- (enum EVTStatus)logEventWithName:(nonnull NSString *)name;

/*!
 @brief Logs a custom event with a specified set of properties.
 @param properties The custom event properties, encapsulated within an EVTEventProperties object.
 */
- (enum EVTStatus)logEventWithEventProperties:(nonnull EVTEventProperties *)properties;

#pragma mark Set Context methods

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param value A string that contains the property value.
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name stringValue:(nonnull NSString *)value;

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param value A string that contains the value of the property.
 @param piiKind The kind of Personal Identifiable Information (PII), as one of the ::EVTPropertyValueKind enumeration values.
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name stringValue:(nonnull NSString *)value kind:(enum EVTPropertyValueKind)piiKind;

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param value A boolean that contains the property value.
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name boolValue:(BOOL)value;

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param value The date property value.
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name dateValue:(nonnull NSDate *)value;

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param value A double that contains the property value.
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name doubleValue:(double)value;

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param value A int64_t that contains the property value.
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name longValue:(int64_t)value;

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param value The UUID property value.
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name UUIDValue:(nonnull NSUUID *)value;

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param stringArrayValue An array of NSString
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name stringArrayValue:(nonnull NSArray *)stringArrayValue;

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param boolArrayValue An array of BOOL
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name boolArrayValue:(nonnull NSArray *)boolArrayValue;

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param dateArrayValue An array of NSDate
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name dateArrayValue:(nonnull NSArray *)dateArrayValue;

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param longArrayValue An array of NSNumber
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name longArrayValue:(nonnull NSArray *)longArrayValue;

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param doubleArrayValue An array of NSNumber
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name doubleArrayValue:(nonnull NSArray *)doubleArrayValue;

/*!
 @brief Adds (or overrides) a property of the context for the telemetry logging system.
 Context information applies to events generated by this ILogger instance, unless it is overwritten on a particular event property.
 @param name A string that contains the name of the property.
 @param uuidArrayValue An array of NSUUID
 */
- (enum EVTStatus)setContextWithName:(nonnull NSString *)name UUIDArrayValue:(nonnull NSArray *)uuidArrayValue;

@end

#endif // ILogger_h

