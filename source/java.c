#include <falso_jni/FalsoJNI.h>
#include <falso_jni/FalsoJNI_Impl.h>
#include <falso_jni/FalsoJNI_Logger.h>
#include <string.h>
#include <stdlib.h>

#define JNI_STR(str) jni->NewStringUTF(&jni, str)

/*
 * JNI Method Stubs
 */

static void methodVoid_stub(jmethodID id, va_list args) {}

static jobject methodObject_getResourceDir(jmethodID id, va_list args) {
    return JNI_STR(DATA_PATH);
}

static jobject methodObject_getMainObb(jmethodID id, va_list args) {
    return JNI_STR(DATA_PATH "main.obb");
}

static jobject methodObject_getPatchObb(jmethodID id, va_list args) {
    return JNI_STR(DATA_PATH "patch.obb");
}

static jobject methodObject_getAppName(jmethodID id, va_list args) {
    return JNI_STR("All is Lost");
}

static jobject methodObject_getAppId(jmethodID id, va_list args) {
    return JNI_STR("com.foursakenmedia.spacerunner");
}

static jobject methodObject_getAppVersion(jmethodID id, va_list args) {
    return JNI_STR("1.0");
}

static jobject methodObject_getOSVersion(jmethodID id, va_list args) {
    return JNI_STR("4.4");
}

static jobject methodObject_getMachineName(jmethodID id, va_list args) {
    return JNI_STR("PS Vita");
}

static jobject methodObject_getUniqueId(jmethodID id, va_list args) {
    return JNI_STR("vita-00000000");
}

static jobject methodObject_getCloudDateString(jmethodID id, va_list args) {
    return JNI_STR("");
}

static jobject methodObject_startLocalMatchRoom(jmethodID id, va_list args) {
    return JNI_STR("");
}

static jobject methodObject_findWifiServers(jmethodID id, va_list args) {
    return JNI_STR("");
}

static jobject methodObject_getGameControllerIds(jmethodID id, va_list args) {
    return NULL;
}

static jboolean methodBoolean_false(jmethodID id, va_list args) {
    return JNI_FALSE;
}

static jint methodInt_getRAM(jmethodID id, va_list args) {
    return 256;
}

static jdouble methodDouble_getCloudDate(jmethodID id, va_list args) {
    return 0.0;
}

/*
 * JNI Methods
 */

NameToMethodID nameToMethodId[] = {
    { 100, "showKeyboard", METHOD_TYPE_VOID },
    { 101, "vibrate", METHOD_TYPE_VOID },
    { 102, "showAppInAppStore", METHOD_TYPE_VOID },
    { 103, "requestProducts", METHOD_TYPE_VOID },
    { 104, "makePurchase", METHOD_TYPE_VOID },
    { 105, "restorePurchases", METHOD_TYPE_VOID },
    { 106, "launchURL", METHOD_TYPE_VOID },
    { 107, "networkRequest", METHOD_TYPE_VOID },
    { 108, "googlePlayLogIn", METHOD_TYPE_VOID },
    { 109, "googlePlayLogOut", METHOD_TYPE_VOID },
    { 110, "saveToCloud", METHOD_TYPE_VOID },
    { 111, "loadFromCloud", METHOD_TYPE_VOID },
    { 112, "showAchievements", METHOD_TYPE_VOID },
    { 113, "reportAchievement", METHOD_TYPE_VOID },
    { 114, "showLeaderboard", METHOD_TYPE_VOID },
    { 115, "reportScore", METHOD_TYPE_VOID },
    { 116, "authenticate", METHOD_TYPE_VOID },
    { 117, "syncLocalPlayer", METHOD_TYPE_VOID },
    { 118, "automatch", METHOD_TYPE_VOID },
    { 119, "endMatch", METHOD_TYPE_VOID },
    { 120, "sendMatchData", METHOD_TYPE_VOID },
    { 121, "sendMatchDataSpecific", METHOD_TYPE_VOID },
    { 122, "joinInvitationMatch", METHOD_TYPE_VOID },
    { 123, "disconnectLocalPlayerFromOthers", METHOD_TYPE_VOID },
    { 124, "connectToWifiServer", METHOD_TYPE_VOID },
    { 125, "cancelLocalMatchConnectionResumeSearch", METHOD_TYPE_VOID },
    { 126, "finishLocalMatchmaking", METHOD_TYPE_VOID },
    { 127, "stopBroadcastingHostedGroup", METHOD_TYPE_VOID },
    { 128, "resumeBroadcastingHostedGroup", METHOD_TYPE_VOID },
    { 129, "chartboostSetAutoCacheAds", METHOD_TYPE_VOID },
    { 130, "chartboostSetShouldRequestInterstitialsInFirstSession", METHOD_TYPE_VOID },
    { 131, "chartboostCacheInterstitial", METHOD_TYPE_VOID },
    { 132, "chartboostShowInterstitial", METHOD_TYPE_VOID },
    { 133, "chartboostCacheRewardedVideo", METHOD_TYPE_VOID },
    { 134, "chartboostShowRewardedVideo", METHOD_TYPE_VOID },

    { 200, "getResourceDir", METHOD_TYPE_OBJECT },
    { 201, "getMainObb", METHOD_TYPE_OBJECT },
    { 202, "getPatchObb", METHOD_TYPE_OBJECT },
    { 203, "getAppName", METHOD_TYPE_OBJECT },
    { 204, "getAppId", METHOD_TYPE_OBJECT },
    { 205, "getAppVersion", METHOD_TYPE_OBJECT },
    { 206, "getOSVersion", METHOD_TYPE_OBJECT },
    { 207, "getMachineName", METHOD_TYPE_OBJECT },
    { 208, "getUniqueId", METHOD_TYPE_OBJECT },
    { 209, "getCloudDateString", METHOD_TYPE_OBJECT },
    { 210, "startLocalMatchRoom", METHOD_TYPE_OBJECT },
    { 211, "findWifiServers", METHOD_TYPE_OBJECT },
    { 212, "getGameControllerIds", METHOD_TYPE_OBJECT },

    { 300, "isTablet", METHOD_TYPE_BOOLEAN },
    { 301, "isNetworkAvailable", METHOD_TYPE_BOOLEAN },
    { 302, "isWifiAvailable", METHOD_TYPE_BOOLEAN },
    { 303, "isWifiP2pAvailable", METHOD_TYPE_BOOLEAN },
    { 304, "waitingForMoreMatchPlayers", METHOD_TYPE_BOOLEAN },
    { 305, "chartboostHasInterstitial", METHOD_TYPE_BOOLEAN },
    { 306, "chartboostHasRewardedVideo", METHOD_TYPE_BOOLEAN },

    { 400, "getRAM", METHOD_TYPE_INT },

    { 500, "getCloudDate", METHOD_TYPE_DOUBLE },
};

MethodsBoolean methodsBoolean[] = {
    { 300, methodBoolean_false },
    { 301, methodBoolean_false },
    { 302, methodBoolean_false },
    { 303, methodBoolean_false },
    { 304, methodBoolean_false },
    { 305, methodBoolean_false },
    { 306, methodBoolean_false },
};
MethodsByte methodsByte[] = {};
MethodsChar methodsChar[] = {};
MethodsDouble methodsDouble[] = {
    { 500, methodDouble_getCloudDate },
};
MethodsFloat methodsFloat[] = {};
MethodsInt methodsInt[] = {
    { 400, methodInt_getRAM },
};
MethodsLong methodsLong[] = {};
MethodsObject methodsObject[] = {
    { 200, methodObject_getResourceDir },
    { 201, methodObject_getMainObb },
    { 202, methodObject_getPatchObb },
    { 203, methodObject_getAppName },
    { 204, methodObject_getAppId },
    { 205, methodObject_getAppVersion },
    { 206, methodObject_getOSVersion },
    { 207, methodObject_getMachineName },
    { 208, methodObject_getUniqueId },
    { 209, methodObject_getCloudDateString },
    { 210, methodObject_startLocalMatchRoom },
    { 211, methodObject_findWifiServers },
    { 212, methodObject_getGameControllerIds },
};
MethodsShort methodsShort[] = {};
MethodsVoid methodsVoid[] = {
    { 100, methodVoid_stub },
    { 101, methodVoid_stub },
    { 102, methodVoid_stub },
    { 103, methodVoid_stub },
    { 104, methodVoid_stub },
    { 105, methodVoid_stub },
    { 106, methodVoid_stub },
    { 107, methodVoid_stub },
    { 108, methodVoid_stub },
    { 109, methodVoid_stub },
    { 110, methodVoid_stub },
    { 111, methodVoid_stub },
    { 112, methodVoid_stub },
    { 113, methodVoid_stub },
    { 114, methodVoid_stub },
    { 115, methodVoid_stub },
    { 116, methodVoid_stub },
    { 117, methodVoid_stub },
    { 118, methodVoid_stub },
    { 119, methodVoid_stub },
    { 120, methodVoid_stub },
    { 121, methodVoid_stub },
    { 122, methodVoid_stub },
    { 123, methodVoid_stub },
    { 124, methodVoid_stub },
    { 125, methodVoid_stub },
    { 126, methodVoid_stub },
    { 127, methodVoid_stub },
    { 128, methodVoid_stub },
    { 129, methodVoid_stub },
    { 130, methodVoid_stub },
    { 131, methodVoid_stub },
    { 132, methodVoid_stub },
    { 133, methodVoid_stub },
    { 134, methodVoid_stub },
};

/*
 * JNI Fields
 */

char WINDOW_SERVICE[] = "window";

// System-wide constant that's often used to determine Android version
// https://developer.android.com/reference/android/os/Build.VERSION.html#SDK_INT
// Possible values:
// https://developer.android.com/reference/android/os/Build.VERSION_CODES
const int SDK_INT = 19; // Android 4.4 / KitKat

NameToFieldID nameToFieldId[] = {
    { 0, "WINDOW_SERVICE", FIELD_TYPE_OBJECT },
    { 1, "SDK_INT", FIELD_TYPE_INT },
};

FieldsBoolean fieldsBoolean[] = {};
FieldsByte fieldsByte[] = {};
FieldsChar fieldsChar[] = {};
FieldsDouble fieldsDouble[] = {};
FieldsFloat fieldsFloat[] = {};
FieldsInt fieldsInt[] = {
    { 1, SDK_INT },
};
FieldsObject fieldsObject[] = {
    { 0, WINDOW_SERVICE },
};
FieldsLong fieldsLong[] = {};
FieldsShort fieldsShort[] = {};

__FALSOJNI_IMPL_CONTAINER_SIZES
