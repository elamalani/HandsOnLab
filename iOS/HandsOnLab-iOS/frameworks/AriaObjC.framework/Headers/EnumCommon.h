#ifndef EnumCommon_h
#define EnumCommon_h

// Copyright (c) 2017 Microsoft. All rights reserved.

/// <summary>
/// The EVTStatus enumeration contains a set of status code.
/// </summary>
enum EVTStatus
{
    EVTStatus_InvalidParameter = -5,     /**< Invalid parameter. */
    EVTStatus_UnknownTargetVersion = -4, /**< Invalid target version. */
    EVTStatus_IllegalState = -3,         /**< Illegal state. */
    EVTStatus_NotSupported = -2,         /**< Not supported. */
    EVTStatus_Fail = -1,                 /**< General failure. */
    EVTStatus_OK = 0,                    /**< Success. */
    EVTStatus_AlreadyStarted = 1,        /**< Already started. */
    EVTStatus_NoOp = 2,                  /**< No action performed. */
};

/*!
 @enum EVTTraceLevel
 @brief The <b>EVTTraceLevel</b> enumeration contains a set of values that indicate the debug trace level.
 @details  A lower trace level includes trace messages for all trace levels above it.
 For example, EVTTraceLevelDebug includes all trace messages.
 EVTTraceLevelError displays only <i>Error</i> and only <i>Fatal</i> trace messages.
 */
enum EVTTraceLevel
{
    EVTTraceLevelDebug = 0, /**< Debug. */
    EVTTraceLevelTrace = 1, /**< Trace. */
    EVTTraceLevelInfo = 2,  /**< Info. */
    EVTTraceLevelWarn = 3,  /**< Warn. */
    EVTTraceLevelError = 4, /**< Error. */
    EVTTraceLevelFatal = 5, /**< Fatal. */
    EVTTraceLevelNone = 6,  /**< Turn off all trace messages. */
};

/*!
 @enum EVTEventPriority
 @brief The <b>EVTEventPriority</b> enumeration contains a set of values that specify event priority.
 */
enum EVTEventPriority
{
    EVTEventPriorityUnspecified = -1, /**< The event priority is not specified. */
    EVTEventPriorityOff = 0,          /**< Do not send the event. */
    EVTEventPriorityLow = 1,          /**< Send the event with <i>low</i> priority. */
    EVTEventPriorityNormal = 2,       /**< Send the event with <i>normal</i> priority. */
    EVTEventPriorityHigh = 3,         /**< Send the event with <i>high</i> priority. */
    EVTEventPriorityImmediate = 4     /**< Send the event as soon as possible. */
};

/*!
 @enum EVTEventPersistence
 @brief The <b>EVTEventPersistence</b> enumeration contains a set of values that specify event persistence.
 */
enum EVTEventPersistence
{
    EVTEventPersistenceNormal = 1,   /**< Drop the event if storage needed. */
    EVTEventPersistenceCritical = 2, /**< Only drop if there are no lower persistence events. */
};

/*!
 @enum EVTEventLatency
 @brief The <b>EVTEventLatency</b> enumeration contains a set of values that specify event Latency.
 */
enum EVTEventLatency
{
    EVTEventLatencyUnspecified = -1, /**< The event latency is not specified. */
    EVTEventLatencyNormal = 1,       /**< Send the event <i>normal</i> latency. */
    EVTEventLatencyCostDeferred = 2, /**< Send the event with <i>cost deferred</i> latency. */
    EVTEventLatencyRealTime = 3,     /**< Send the event with <i>real time</i> latency. */
};

/*!
 * @enum EVTPropertyValueKind
 * @brief A set of values that indicate the kind of property value
 */
enum EVTPropertyValueKind
{
    EVTPropertyValueKindPiiKindNone = 0,               /**< Pii None */
    EVTPropertyValueKindPiiKindDistinguishedName = 1,  /**< Pii Distinguished name */
    EVTPropertyValueKindPiiKindGenericData = 2,        /**< Pii Generic data */
    EVTPropertyValueKindPiiKindIPv4Address = 3,        /**< Pii IPv4 Internet address */
    EVTPropertyValueKindPiiKindIPv6Address = 4,        /**< Pii IPv6 Internet address */
    EVTPropertyValueKindPiiKindMailSubject = 5,        /**< Pii Mail subject */
    EVTPropertyValueKindPiiKindPhoneNumber = 6,        /**< Pii Phone number */
    EVTPropertyValueKindPiiKindQueryString = 7,        /**< Pii Query string */
    EVTPropertyValueKindPiiKindSipAddress = 8,         /**< Pii SIP address */
    EVTPropertyValueKindPiiKindSmtpAddress = 9,        /**< Pii SMTP address */
    EVTPropertyValueKindPiiKindIdentity = 10,          /**< Pii Identify */
    EVTPropertyValueKindPiiKindUri = 11,               /**< Pii URI */
    EVTPropertyValueKindPiiKindFqdn = 12,              /**< Pii Fully qualified domain name */
    EVTPropertyValueKindPiiKindIPV4AddressLegacy = 13, /**< Pii Legacy IPv4 Internet address */

    EVTPropertyValueKindCustomerContentKindGenericContent = 32, /**< Customer Content Generic content kind */
};

#endif // EnumCommon.h

