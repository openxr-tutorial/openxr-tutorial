
#ifdef OPENXR_TUTORIAL_WINDOWS
#define XR_USE_PLATFORM_WIN32
#endif

#ifdef OPENXR_TUTORIAL_ANDROID
#define XR_USE_PLATFORM_ANDROID
#endif

#define XR_NO_PROTOTYPES
#include "openxr/openxr.h"

XRAPI_ATTR XrResult XRAPI_CALL xrGetInstanceProcAddr(XrInstance instance, const char* name, PFN_xrVoidFunction* function);

PFN_xrEnumerateApiLayerProperties fn_xrEnumerateApiLayerProperties;
#define xrEnumerateApiLayerProperties fn_xrEnumerateApiLayerProperties
PFN_xrEnumerateInstanceExtensionProperties fn_xrEnumerateInstanceExtensionProperties;
#define xrEnumerateInstanceExtensionProperties fn_xrEnumerateInstanceExtensionProperties
PFN_xrCreateInstance fn_xrCreateInstance;
#define xrCreateInstance fn_xrCreateInstance
PFN_xrDestroyInstance fn_xrDestroyInstance;
#define xrDestroyInstance fn_xrDestroyInstance
PFN_xrGetInstanceProperties fn_xrGetInstanceProperties;
#define xrGetInstanceProperties fn_xrGetInstanceProperties
PFN_xrPollEvent fn_xrPollEvent;
#define xrPollEvent fn_xrPollEvent
PFN_xrResultToString fn_xrResultToString;
#define xrResultToString fn_xrResultToString
PFN_xrStructureTypeToString fn_xrStructureTypeToString;
#define xrStructureTypeToString fn_xrStructureTypeToString
PFN_xrGetSystem fn_xrGetSystem;
#define xrGetSystem fn_xrGetSystem
PFN_xrGetSystemProperties fn_xrGetSystemProperties;
#define xrGetSystemProperties fn_xrGetSystemProperties
PFN_xrEnumerateEnvironmentBlendModes fn_xrEnumerateEnvironmentBlendModes;
#define xrEnumerateEnvironmentBlendModes fn_xrEnumerateEnvironmentBlendModes
PFN_xrCreateSession fn_xrCreateSession;
#define xrCreateSession fn_xrCreateSession
PFN_xrDestroySession fn_xrDestroySession;
#define xrDestroySession fn_xrDestroySession
PFN_xrEnumerateReferenceSpaces fn_xrEnumerateReferenceSpaces;
#define xrEnumerateReferenceSpaces fn_xrEnumerateReferenceSpaces
PFN_xrCreateReferenceSpace fn_xrCreateReferenceSpace;
#define xrCreateReferenceSpace fn_xrCreateReferenceSpace
PFN_xrGetReferenceSpaceBoundsRect fn_xrGetReferenceSpaceBoundsRect;
#define xrGetReferenceSpaceBoundsRect fn_xrGetReferenceSpaceBoundsRect
PFN_xrCreateActionSpace fn_xrCreateActionSpace;
#define xrCreateActionSpace fn_xrCreateActionSpace
PFN_xrLocateSpace fn_xrLocateSpace;
#define xrLocateSpace fn_xrLocateSpace
PFN_xrDestroySpace fn_xrDestroySpace;
#define xrDestroySpace fn_xrDestroySpace
PFN_xrEnumerateViewConfigurations fn_xrEnumerateViewConfigurations;
#define xrEnumerateViewConfigurations fn_xrEnumerateViewConfigurations
PFN_xrGetViewConfigurationProperties fn_xrGetViewConfigurationProperties;
#define xrGetViewConfigurationProperties fn_xrGetViewConfigurationProperties
PFN_xrEnumerateViewConfigurationViews fn_xrEnumerateViewConfigurationViews;
#define xrEnumerateViewConfigurationViews fn_xrEnumerateViewConfigurationViews
PFN_xrEnumerateSwapchainFormats fn_xrEnumerateSwapchainFormats;
#define xrEnumerateSwapchainFormats fn_xrEnumerateSwapchainFormats
PFN_xrCreateSwapchain fn_xrCreateSwapchain;
#define xrCreateSwapchain fn_xrCreateSwapchain
PFN_xrDestroySwapchain fn_xrDestroySwapchain;
#define xrDestroySwapchain fn_xrDestroySwapchain
PFN_xrEnumerateSwapchainImages fn_xrEnumerateSwapchainImages;
#define xrEnumerateSwapchainImages fn_xrEnumerateSwapchainImages
PFN_xrAcquireSwapchainImage fn_xrAcquireSwapchainImage;
#define xrAcquireSwapchainImage fn_xrAcquireSwapchainImage
PFN_xrWaitSwapchainImage fn_xrWaitSwapchainImage;
#define xrWaitSwapchainImage fn_xrWaitSwapchainImage
PFN_xrReleaseSwapchainImage fn_xrReleaseSwapchainImage;
#define xrReleaseSwapchainImage fn_xrReleaseSwapchainImage
PFN_xrBeginSession fn_xrBeginSession;
#define xrBeginSession fn_xrBeginSession
PFN_xrEndSession fn_xrEndSession;
#define xrEndSession fn_xrEndSession
PFN_xrRequestExitSession fn_xrRequestExitSession;
#define xrRequestExitSession fn_xrRequestExitSession
PFN_xrWaitFrame fn_xrWaitFrame;
#define xrWaitFrame fn_xrWaitFrame
PFN_xrBeginFrame fn_xrBeginFrame;
#define xrBeginFrame fn_xrBeginFrame
PFN_xrEndFrame fn_xrEndFrame;
#define xrEndFrame fn_xrEndFrame
PFN_xrLocateViews fn_xrLocateViews;
#define xrLocateViews fn_xrLocateViews
PFN_xrStringToPath fn_xrStringToPath;
#define xrStringToPath fn_xrStringToPath
PFN_xrPathToString fn_xrPathToString;
#define xrPathToString fn_xrPathToString
PFN_xrCreateActionSet fn_xrCreateActionSet;
#define xrCreateActionSet fn_xrCreateActionSet
PFN_xrDestroyActionSet fn_xrDestroyActionSet;
#define xrDestroyActionSet fn_xrDestroyActionSet
PFN_xrCreateAction fn_xrCreateAction;
#define xrCreateAction fn_xrCreateAction
PFN_xrDestroyAction fn_xrDestroyAction;
#define xrDestroyAction fn_xrDestroyAction
PFN_xrSuggestInteractionProfileBindings fn_xrSuggestInteractionProfileBindings;
#define xrSuggestInteractionProfileBindings fn_xrSuggestInteractionProfileBindings
PFN_xrAttachSessionActionSets fn_xrAttachSessionActionSets;
#define xrAttachSessionActionSets fn_xrAttachSessionActionSets
PFN_xrGetCurrentInteractionProfile fn_xrGetCurrentInteractionProfile;
#define xrGetCurrentInteractionProfile fn_xrGetCurrentInteractionProfile
PFN_xrGetActionStateBoolean fn_xrGetActionStateBoolean;
#define xrGetActionStateBoolean fn_xrGetActionStateBoolean
PFN_xrGetActionStateFloat fn_xrGetActionStateFloat;
#define xrGetActionStateFloat fn_xrGetActionStateFloat
PFN_xrGetActionStateVector2f fn_xrGetActionStateVector2f;
#define xrGetActionStateVector2f fn_xrGetActionStateVector2f
PFN_xrGetActionStatePose fn_xrGetActionStatePose;
#define xrGetActionStatePose fn_xrGetActionStatePose
PFN_xrSyncActions fn_xrSyncActions;
#define xrSyncActions fn_xrSyncActions
PFN_xrEnumerateBoundSourcesForAction fn_xrEnumerateBoundSourcesForAction;
#define xrEnumerateBoundSourcesForAction fn_xrEnumerateBoundSourcesForAction
PFN_xrGetInputSourceLocalizedName fn_xrGetInputSourceLocalizedName;
#define xrGetInputSourceLocalizedName fn_xrGetInputSourceLocalizedName
PFN_xrApplyHapticFeedback fn_xrApplyHapticFeedback;
#define xrApplyHapticFeedback fn_xrApplyHapticFeedback
PFN_xrStopHapticFeedback fn_xrStopHapticFeedback;
#define xrStopHapticFeedback fn_xrStopHapticFeedback

void openxr_load_base_procs() {
        PFN_xrVoidFunction out_function;
	xrGetInstanceProcAddr(NULL, "xrCreateInstance", &out_function);
	xrCreateInstance = (PFN_xrCreateInstance)out_function;
        xrGetInstanceProcAddr(NULL, "xrEnumerateApiLayerProperties", &out_function);
	xrEnumerateApiLayerProperties = (PFN_xrEnumerateApiLayerProperties)out_function;
	xrGetInstanceProcAddr(NULL, "xrEnumerateInstanceExtensionProperties", &out_function);
	xrEnumerateInstanceExtensionProperties = (PFN_xrEnumerateInstanceExtensionProperties)out_function;
}

void openxr_load_instance_procs(XrInstance instance) {
        PFN_xrVoidFunction out_function;
        xrGetInstanceProcAddr(instance, "xrGetSystem", &out_function);
        xrGetSystem = (PFN_xrGetSystem)out_function;
        xrGetInstanceProcAddr(instance, "xrGetSystemProperties", &out_function);
        xrGetSystemProperties = (PFN_xrGetSystemProperties)out_function;
	xrGetInstanceProcAddr(instance, "xrDestroyInstance", &out_function);
	xrDestroyInstance = (PFN_xrDestroyInstance)out_function;
	xrGetInstanceProcAddr(instance, "xrResultToString", &out_function);
	xrResultToString = (PFN_xrResultToString)out_function;
	xrGetInstanceProcAddr(instance, "xrStructureTypeToString", &out_function);
	xrStructureTypeToString = (PFN_xrStructureTypeToString)out_function;
	xrGetInstanceProcAddr(instance, "xrGetInstanceProperties", &out_function);
	xrGetInstanceProperties = (PFN_xrGetInstanceProperties)out_function;
	xrGetInstanceProcAddr(instance, "xrCreateSession", &out_function);
	xrCreateSession = (PFN_xrCreateSession)out_function;
	xrGetInstanceProcAddr(instance, "xrDestroySession", &out_function);
	xrDestroySession = (PFN_xrDestroySession)out_function;
	xrGetInstanceProcAddr(instance, "xrDestroySpace", &out_function);
	xrDestroySpace = (PFN_xrDestroySpace)out_function;
	xrGetInstanceProcAddr(instance, "xrEnumerateSwapchainFormats", &out_function);
	xrEnumerateSwapchainFormats = (PFN_xrEnumerateSwapchainFormats)out_function;
	xrGetInstanceProcAddr(instance, "xrCreateSwapchain", &out_function);
	xrCreateSwapchain = (PFN_xrCreateSwapchain)out_function;
	xrGetInstanceProcAddr(instance, "xrDestroySwapchain", &out_function);
	xrDestroySwapchain = (PFN_xrDestroySwapchain)out_function;
	xrGetInstanceProcAddr(instance, "xrEnumerateSwapchainImages", &out_function);
	xrEnumerateSwapchainImages = (PFN_xrEnumerateSwapchainImages)out_function;
	xrGetInstanceProcAddr(instance, "xrAcquireSwapchainImage", &out_function);
	xrAcquireSwapchainImage = (PFN_xrAcquireSwapchainImage)out_function;
	xrGetInstanceProcAddr(instance, "xrWaitSwapchainImage", &out_function);
	xrWaitSwapchainImage = (PFN_xrWaitSwapchainImage)out_function;
	xrGetInstanceProcAddr(instance, "xrReleaseSwapchainImage", &out_function);
	xrReleaseSwapchainImage = (PFN_xrReleaseSwapchainImage)out_function;
	xrGetInstanceProcAddr(instance, "xrBeginSession", &out_function);
	xrBeginSession = (PFN_xrBeginSession)out_function;
	xrGetInstanceProcAddr(instance, "xrEndSession", &out_function);
	xrEndSession = (PFN_xrEndSession)out_function;
	xrGetInstanceProcAddr(instance, "xrRequestExitSession", &out_function);
	xrRequestExitSession = (PFN_xrRequestExitSession)out_function;
	xrGetInstanceProcAddr(instance, "xrEnumerateReferenceSpaces", &out_function);
	xrEnumerateReferenceSpaces = (PFN_xrEnumerateReferenceSpaces)out_function;
	xrGetInstanceProcAddr(instance, "xrCreateReferenceSpace", &out_function);
	xrCreateReferenceSpace = (PFN_xrCreateReferenceSpace)out_function;
	xrGetInstanceProcAddr(instance, "xrCreateActionSpace", &out_function);
	xrCreateActionSpace = (PFN_xrCreateActionSpace)out_function;
	xrGetInstanceProcAddr(instance, "xrLocateSpace", &out_function);
	xrLocateSpace = (PFN_xrLocateSpace)out_function;
	xrGetInstanceProcAddr(instance, "xrEnumerateViewConfigurations", &out_function);
	xrEnumerateViewConfigurations = (PFN_xrEnumerateViewConfigurations)out_function;
	xrGetInstanceProcAddr(instance, "xrEnumerateEnvironmentBlendModes", &out_function);
	xrEnumerateEnvironmentBlendModes = (PFN_xrEnumerateEnvironmentBlendModes)out_function;
	xrGetInstanceProcAddr(instance, "xrGetViewConfigurationProperties", &out_function);
	xrGetViewConfigurationProperties = (PFN_xrGetViewConfigurationProperties)out_function;
	xrGetInstanceProcAddr(instance, "xrEnumerateViewConfigurationViews", &out_function);
	xrEnumerateViewConfigurationViews = (PFN_xrEnumerateViewConfigurationViews)out_function;
	xrGetInstanceProcAddr(instance, "xrBeginFrame", &out_function);
	xrBeginFrame = (PFN_xrBeginFrame)out_function;
	xrGetInstanceProcAddr(instance, "xrLocateViews", &out_function);
	xrLocateViews = (PFN_xrLocateViews)out_function;
	xrGetInstanceProcAddr(instance, "xrEndFrame", &out_function);
	xrEndFrame = (PFN_xrEndFrame)out_function;
	xrGetInstanceProcAddr(instance, "xrWaitFrame", &out_function);
	xrWaitFrame = (PFN_xrWaitFrame)out_function;
	xrGetInstanceProcAddr(instance, "xrApplyHapticFeedback", &out_function);
	xrApplyHapticFeedback = (PFN_xrApplyHapticFeedback)out_function;
	xrGetInstanceProcAddr(instance, "xrStopHapticFeedback", &out_function);
	xrStopHapticFeedback = (PFN_xrStopHapticFeedback)out_function;
	xrGetInstanceProcAddr(instance, "xrPollEvent", &out_function);
	xrPollEvent = (PFN_xrPollEvent)out_function;
	xrGetInstanceProcAddr(instance, "xrStringToPath", &out_function);
	xrStringToPath = (PFN_xrStringToPath)out_function;
	xrGetInstanceProcAddr(instance, "xrPathToString", &out_function);
	xrPathToString = (PFN_xrPathToString)out_function;
	xrGetInstanceProcAddr(instance, "xrGetReferenceSpaceBoundsRect", &out_function);
	xrGetReferenceSpaceBoundsRect = (PFN_xrGetReferenceSpaceBoundsRect)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetAndroidApplicationThreadKHR", &out_function);
	// xrSetAndroidApplicationThreadKHR = (PFN_xrSetAndroidApplicationThreadKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateSwapchainAndroidSurfaceKHR", &out_function);
	// xrCreateSwapchainAndroidSurfaceKHR = (PFN_xrCreateSwapchainAndroidSurfaceKHR)out_function;
	xrGetInstanceProcAddr(instance, "xrGetActionStateBoolean", &out_function);
	xrGetActionStateBoolean = (PFN_xrGetActionStateBoolean)out_function;
	xrGetInstanceProcAddr(instance, "xrGetActionStateFloat", &out_function);
	xrGetActionStateFloat = (PFN_xrGetActionStateFloat)out_function;
	xrGetInstanceProcAddr(instance, "xrGetActionStateVector2f", &out_function);
	xrGetActionStateVector2f = (PFN_xrGetActionStateVector2f)out_function;
	xrGetInstanceProcAddr(instance, "xrGetActionStatePose", &out_function);
	xrGetActionStatePose = (PFN_xrGetActionStatePose)out_function;
	xrGetInstanceProcAddr(instance, "xrCreateActionSet", &out_function);
	xrCreateActionSet = (PFN_xrCreateActionSet)out_function;
	xrGetInstanceProcAddr(instance, "xrDestroyActionSet", &out_function);
	xrDestroyActionSet = (PFN_xrDestroyActionSet)out_function;
	xrGetInstanceProcAddr(instance, "xrCreateAction", &out_function);
	xrCreateAction = (PFN_xrCreateAction)out_function;
	xrGetInstanceProcAddr(instance, "xrDestroyAction", &out_function);
	xrDestroyAction = (PFN_xrDestroyAction)out_function;
	xrGetInstanceProcAddr(instance, "xrSuggestInteractionProfileBindings", &out_function);
	xrSuggestInteractionProfileBindings = (PFN_xrSuggestInteractionProfileBindings)out_function;
	xrGetInstanceProcAddr(instance, "xrAttachSessionActionSets", &out_function);
	xrAttachSessionActionSets = (PFN_xrAttachSessionActionSets)out_function;
	xrGetInstanceProcAddr(instance, "xrGetCurrentInteractionProfile", &out_function);
	xrGetCurrentInteractionProfile = (PFN_xrGetCurrentInteractionProfile)out_function;
	xrGetInstanceProcAddr(instance, "xrSyncActions", &out_function);
	xrSyncActions = (PFN_xrSyncActions)out_function;
	xrGetInstanceProcAddr(instance, "xrEnumerateBoundSourcesForAction", &out_function);
	xrEnumerateBoundSourcesForAction = (PFN_xrEnumerateBoundSourcesForAction)out_function;
	xrGetInstanceProcAddr(instance, "xrGetInputSourceLocalizedName", &out_function);
	xrGetInputSourceLocalizedName = (PFN_xrGetInputSourceLocalizedName)out_function;
	xrGetInstanceProcAddr(instance, "xrGetVulkanInstanceExtensionsKHR", &out_function);
	// xrGetVulkanInstanceExtensionsKHR = (PFN_xrGetVulkanInstanceExtensionsKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetVulkanDeviceExtensionsKHR", &out_function);
	// xrGetVulkanDeviceExtensionsKHR = (PFN_xrGetVulkanDeviceExtensionsKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetVulkanGraphicsDeviceKHR", &out_function);
	// xrGetVulkanGraphicsDeviceKHR = (PFN_xrGetVulkanGraphicsDeviceKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetOpenGLGraphicsRequirementsKHR", &out_function);
	// xrGetOpenGLGraphicsRequirementsKHR = (PFN_xrGetOpenGLGraphicsRequirementsKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetOpenGLESGraphicsRequirementsKHR", &out_function);
	// xrGetOpenGLESGraphicsRequirementsKHR = (PFN_xrGetOpenGLESGraphicsRequirementsKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetVulkanGraphicsRequirementsKHR", &out_function);
	// xrGetVulkanGraphicsRequirementsKHR = (PFN_xrGetVulkanGraphicsRequirementsKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetD3D11GraphicsRequirementsKHR", &out_function);
	// xrGetD3D11GraphicsRequirementsKHR = (PFN_xrGetD3D11GraphicsRequirementsKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetD3D12GraphicsRequirementsKHR", &out_function);
	// xrGetD3D12GraphicsRequirementsKHR = (PFN_xrGetD3D12GraphicsRequirementsKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrPerfSettingsSetPerformanceLevelEXT", &out_function);
	// xrPerfSettingsSetPerformanceLevelEXT = (PFN_xrPerfSettingsSetPerformanceLevelEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrThermalGetTemperatureTrendEXT", &out_function);
	// xrThermalGetTemperatureTrendEXT = (PFN_xrThermalGetTemperatureTrendEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetDebugUtilsObjectNameEXT", &out_function);
	// xrSetDebugUtilsObjectNameEXT = (PFN_xrSetDebugUtilsObjectNameEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateDebugUtilsMessengerEXT", &out_function);
	// xrCreateDebugUtilsMessengerEXT = (PFN_xrCreateDebugUtilsMessengerEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroyDebugUtilsMessengerEXT", &out_function);
	// xrDestroyDebugUtilsMessengerEXT = (PFN_xrDestroyDebugUtilsMessengerEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrSubmitDebugUtilsMessageEXT", &out_function);
	// xrSubmitDebugUtilsMessageEXT = (PFN_xrSubmitDebugUtilsMessageEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrSessionBeginDebugUtilsLabelRegionEXT", &out_function);
	// xrSessionBeginDebugUtilsLabelRegionEXT = (PFN_xrSessionBeginDebugUtilsLabelRegionEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrSessionEndDebugUtilsLabelRegionEXT", &out_function);
	// xrSessionEndDebugUtilsLabelRegionEXT = (PFN_xrSessionEndDebugUtilsLabelRegionEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrSessionInsertDebugUtilsLabelEXT", &out_function);
	// xrSessionInsertDebugUtilsLabelEXT = (PFN_xrSessionInsertDebugUtilsLabelEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrConvertTimeToWin32PerformanceCounterKHR", &out_function);
	// xrConvertTimeToWin32PerformanceCounterKHR = (PFN_xrConvertTimeToWin32PerformanceCounterKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrConvertWin32PerformanceCounterToTimeKHR", &out_function);
	// xrConvertWin32PerformanceCounterToTimeKHR = (PFN_xrConvertWin32PerformanceCounterToTimeKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateVulkanInstanceKHR", &out_function);
	// xrCreateVulkanInstanceKHR = (PFN_xrCreateVulkanInstanceKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateVulkanDeviceKHR", &out_function);
	// xrCreateVulkanDeviceKHR = (PFN_xrCreateVulkanDeviceKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetVulkanGraphicsDevice2KHR", &out_function);
	// xrGetVulkanGraphicsDevice2KHR = (PFN_xrGetVulkanGraphicsDevice2KHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetVulkanGraphicsRequirements2KHR", &out_function);
	// xrGetVulkanGraphicsRequirements2KHR = (PFN_xrGetVulkanGraphicsRequirements2KHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrConvertTimeToTimespecTimeKHR", &out_function);
	// xrConvertTimeToTimespecTimeKHR = (PFN_xrConvertTimeToTimespecTimeKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrConvertTimespecTimeToTimeKHR", &out_function);
	// xrConvertTimespecTimeToTimeKHR = (PFN_xrConvertTimespecTimeToTimeKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetVisibilityMaskKHR", &out_function);
	// xrGetVisibilityMaskKHR = (PFN_xrGetVisibilityMaskKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateSpatialAnchorMSFT", &out_function);
	// xrCreateSpatialAnchorMSFT = (PFN_xrCreateSpatialAnchorMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateSpatialAnchorSpaceMSFT", &out_function);
	// xrCreateSpatialAnchorSpaceMSFT = (PFN_xrCreateSpatialAnchorSpaceMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroySpatialAnchorMSFT", &out_function);
	// xrDestroySpatialAnchorMSFT = (PFN_xrDestroySpatialAnchorMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetInputDeviceActiveEXT", &out_function);
	// xrSetInputDeviceActiveEXT = (PFN_xrSetInputDeviceActiveEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetInputDeviceStateBoolEXT", &out_function);
	// xrSetInputDeviceStateBoolEXT = (PFN_xrSetInputDeviceStateBoolEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetInputDeviceStateFloatEXT", &out_function);
	// xrSetInputDeviceStateFloatEXT = (PFN_xrSetInputDeviceStateFloatEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetInputDeviceStateVector2fEXT", &out_function);
	// xrSetInputDeviceStateVector2fEXT = (PFN_xrSetInputDeviceStateVector2fEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetInputDeviceLocationEXT", &out_function);
	// xrSetInputDeviceLocationEXT = (PFN_xrSetInputDeviceLocationEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrInitializeLoaderKHR", &out_function);
	// xrInitializeLoaderKHR = (PFN_xrInitializeLoaderKHR)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateSpatialGraphNodeSpaceMSFT", &out_function);
	// xrCreateSpatialGraphNodeSpaceMSFT = (PFN_xrCreateSpatialGraphNodeSpaceMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrTryCreateSpatialGraphStaticNodeBindingMSFT", &out_function);
	// xrTryCreateSpatialGraphStaticNodeBindingMSFT = (PFN_xrTryCreateSpatialGraphStaticNodeBindingMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroySpatialGraphNodeBindingMSFT", &out_function);
	// xrDestroySpatialGraphNodeBindingMSFT = (PFN_xrDestroySpatialGraphNodeBindingMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSpatialGraphNodeBindingPropertiesMSFT", &out_function);
	// xrGetSpatialGraphNodeBindingPropertiesMSFT = (PFN_xrGetSpatialGraphNodeBindingPropertiesMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateHandTrackerEXT", &out_function);
	// xrCreateHandTrackerEXT = (PFN_xrCreateHandTrackerEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroyHandTrackerEXT", &out_function);
	// xrDestroyHandTrackerEXT = (PFN_xrDestroyHandTrackerEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrLocateHandJointsEXT", &out_function);
	// xrLocateHandJointsEXT = (PFN_xrLocateHandJointsEXT)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateHandMeshSpaceMSFT", &out_function);
	// xrCreateHandMeshSpaceMSFT = (PFN_xrCreateHandMeshSpaceMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrUpdateHandMeshMSFT", &out_function);
	// xrUpdateHandMeshMSFT = (PFN_xrUpdateHandMeshMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetControllerModelKeyMSFT", &out_function);
	// xrGetControllerModelKeyMSFT = (PFN_xrGetControllerModelKeyMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrLoadControllerModelMSFT", &out_function);
	// xrLoadControllerModelMSFT = (PFN_xrLoadControllerModelMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetControllerModelPropertiesMSFT", &out_function);
	// xrGetControllerModelPropertiesMSFT = (PFN_xrGetControllerModelPropertiesMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetControllerModelStateMSFT", &out_function);
	// xrGetControllerModelStateMSFT = (PFN_xrGetControllerModelStateMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrEnumerateSceneComputeFeaturesMSFT", &out_function);
	// xrEnumerateSceneComputeFeaturesMSFT = (PFN_xrEnumerateSceneComputeFeaturesMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateSceneObserverMSFT", &out_function);
	// xrCreateSceneObserverMSFT = (PFN_xrCreateSceneObserverMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroySceneObserverMSFT", &out_function);
	// xrDestroySceneObserverMSFT = (PFN_xrDestroySceneObserverMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateSceneMSFT", &out_function);
	// xrCreateSceneMSFT = (PFN_xrCreateSceneMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroySceneMSFT", &out_function);
	// xrDestroySceneMSFT = (PFN_xrDestroySceneMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrComputeNewSceneMSFT", &out_function);
	// xrComputeNewSceneMSFT = (PFN_xrComputeNewSceneMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSceneComputeStateMSFT", &out_function);
	// xrGetSceneComputeStateMSFT = (PFN_xrGetSceneComputeStateMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSceneComponentsMSFT", &out_function);
	// xrGetSceneComponentsMSFT = (PFN_xrGetSceneComponentsMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrLocateSceneComponentsMSFT", &out_function);
	// xrLocateSceneComponentsMSFT = (PFN_xrLocateSceneComponentsMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSceneMeshBuffersMSFT", &out_function);
	// xrGetSceneMeshBuffersMSFT = (PFN_xrGetSceneMeshBuffersMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrDeserializeSceneMSFT", &out_function);
	// xrDeserializeSceneMSFT = (PFN_xrDeserializeSceneMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSerializedSceneFragmentDataMSFT", &out_function);
	// xrGetSerializedSceneFragmentDataMSFT = (PFN_xrGetSerializedSceneFragmentDataMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrEnumerateDisplayRefreshRatesFB", &out_function);
	// xrEnumerateDisplayRefreshRatesFB = (PFN_xrEnumerateDisplayRefreshRatesFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetDisplayRefreshRateFB", &out_function);
	// xrGetDisplayRefreshRateFB = (PFN_xrGetDisplayRefreshRateFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrRequestDisplayRefreshRateFB", &out_function);
	// xrRequestDisplayRefreshRateFB = (PFN_xrRequestDisplayRefreshRateFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateSpatialAnchorFromPerceptionAnchorMSFT", &out_function);
	// xrCreateSpatialAnchorFromPerceptionAnchorMSFT = (PFN_xrCreateSpatialAnchorFromPerceptionAnchorMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrTryGetPerceptionAnchorFromSpatialAnchorMSFT", &out_function);
	// xrTryGetPerceptionAnchorFromSpatialAnchorMSFT = (PFN_xrTryGetPerceptionAnchorFromSpatialAnchorMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrUpdateSwapchainFB", &out_function);
	// xrUpdateSwapchainFB = (PFN_xrUpdateSwapchainFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSwapchainStateFB", &out_function);
	// xrGetSwapchainStateFB = (PFN_xrGetSwapchainStateFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrEnumerateColorSpacesFB", &out_function);
	// xrEnumerateColorSpacesFB = (PFN_xrEnumerateColorSpacesFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetColorSpaceFB", &out_function);
	// xrSetColorSpaceFB = (PFN_xrSetColorSpaceFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateFoveationProfileFB", &out_function);
	// xrCreateFoveationProfileFB = (PFN_xrCreateFoveationProfileFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroyFoveationProfileFB", &out_function);
	// xrDestroyFoveationProfileFB = (PFN_xrDestroyFoveationProfileFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetHandMeshFB", &out_function);
	// xrGetHandMeshFB = (PFN_xrGetHandMeshFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrEnumerateRenderModelPathsFB", &out_function);
	// xrEnumerateRenderModelPathsFB = (PFN_xrEnumerateRenderModelPathsFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetRenderModelPropertiesFB", &out_function);
	// xrGetRenderModelPropertiesFB = (PFN_xrGetRenderModelPropertiesFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrLoadRenderModelFB", &out_function);
	// xrLoadRenderModelFB = (PFN_xrLoadRenderModelFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrQuerySystemTrackedKeyboardFB", &out_function);
	// xrQuerySystemTrackedKeyboardFB = (PFN_xrQuerySystemTrackedKeyboardFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateKeyboardSpaceFB", &out_function);
	// xrCreateKeyboardSpaceFB = (PFN_xrCreateKeyboardSpaceFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetEnvironmentDepthEstimationVARJO", &out_function);
	// xrSetEnvironmentDepthEstimationVARJO = (PFN_xrSetEnvironmentDepthEstimationVARJO)out_function;
	// xrGetInstanceProcAddr(instance, "xrEnumerateReprojectionModesMSFT", &out_function);
	// xrEnumerateReprojectionModesMSFT = (PFN_xrEnumerateReprojectionModesMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetAudioOutputDeviceGuidOculus", &out_function);
	// xrGetAudioOutputDeviceGuidOculus = (PFN_xrGetAudioOutputDeviceGuidOculus)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetAudioInputDeviceGuidOculus", &out_function);
	// xrGetAudioInputDeviceGuidOculus = (PFN_xrGetAudioInputDeviceGuidOculus)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateSpatialAnchorFB", &out_function);
	// xrCreateSpatialAnchorFB = (PFN_xrCreateSpatialAnchorFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSpaceUuidFB", &out_function);
	// xrGetSpaceUuidFB = (PFN_xrGetSpaceUuidFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrEnumerateSpaceSupportedComponentsFB", &out_function);
	// xrEnumerateSpaceSupportedComponentsFB = (PFN_xrEnumerateSpaceSupportedComponentsFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetSpaceComponentStatusFB", &out_function);
	// xrSetSpaceComponentStatusFB = (PFN_xrSetSpaceComponentStatusFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSpaceComponentStatusFB", &out_function);
	// xrGetSpaceComponentStatusFB = (PFN_xrGetSpaceComponentStatusFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateTriangleMeshFB", &out_function);
	// xrCreateTriangleMeshFB = (PFN_xrCreateTriangleMeshFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroyTriangleMeshFB", &out_function);
	// xrDestroyTriangleMeshFB = (PFN_xrDestroyTriangleMeshFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrTriangleMeshGetVertexBufferFB", &out_function);
	// xrTriangleMeshGetVertexBufferFB = (PFN_xrTriangleMeshGetVertexBufferFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrTriangleMeshGetIndexBufferFB", &out_function);
	// xrTriangleMeshGetIndexBufferFB = (PFN_xrTriangleMeshGetIndexBufferFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrTriangleMeshBeginUpdateFB", &out_function);
	// xrTriangleMeshBeginUpdateFB = (PFN_xrTriangleMeshBeginUpdateFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrTriangleMeshEndUpdateFB", &out_function);
	// xrTriangleMeshEndUpdateFB = (PFN_xrTriangleMeshEndUpdateFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrTriangleMeshBeginVertexBufferUpdateFB", &out_function);
	// xrTriangleMeshBeginVertexBufferUpdateFB = (PFN_xrTriangleMeshBeginVertexBufferUpdateFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrTriangleMeshEndVertexBufferUpdateFB", &out_function);
	// xrTriangleMeshEndVertexBufferUpdateFB = (PFN_xrTriangleMeshEndVertexBufferUpdateFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreatePassthroughFB", &out_function);
	// xrCreatePassthroughFB = (PFN_xrCreatePassthroughFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroyPassthroughFB", &out_function);
	// xrDestroyPassthroughFB = (PFN_xrDestroyPassthroughFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrPassthroughStartFB", &out_function);
	// xrPassthroughStartFB = (PFN_xrPassthroughStartFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrPassthroughPauseFB", &out_function);
	// xrPassthroughPauseFB = (PFN_xrPassthroughPauseFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreatePassthroughLayerFB", &out_function);
	// xrCreatePassthroughLayerFB = (PFN_xrCreatePassthroughLayerFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroyPassthroughLayerFB", &out_function);
	// xrDestroyPassthroughLayerFB = (PFN_xrDestroyPassthroughLayerFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrPassthroughLayerPauseFB", &out_function);
	// xrPassthroughLayerPauseFB = (PFN_xrPassthroughLayerPauseFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrPassthroughLayerResumeFB", &out_function);
	// xrPassthroughLayerResumeFB = (PFN_xrPassthroughLayerResumeFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrPassthroughLayerSetStyleFB", &out_function);
	// xrPassthroughLayerSetStyleFB = (PFN_xrPassthroughLayerSetStyleFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateGeometryInstanceFB", &out_function);
	// xrCreateGeometryInstanceFB = (PFN_xrCreateGeometryInstanceFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroyGeometryInstanceFB", &out_function);
	// xrDestroyGeometryInstanceFB = (PFN_xrDestroyGeometryInstanceFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGeometryInstanceSetTransformFB", &out_function);
	// xrGeometryInstanceSetTransformFB = (PFN_xrGeometryInstanceSetTransformFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrQuerySpacesFB", &out_function);
	// xrQuerySpacesFB = (PFN_xrQuerySpacesFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrRetrieveSpaceQueryResultsFB", &out_function);
	// xrRetrieveSpaceQueryResultsFB = (PFN_xrRetrieveSpaceQueryResultsFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrSaveSpaceFB", &out_function);
	// xrSaveSpaceFB = (PFN_xrSaveSpaceFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrEraseSpaceFB", &out_function);
	// xrEraseSpaceFB = (PFN_xrEraseSpaceFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSpaceContainerFB", &out_function);
	// xrGetSpaceContainerFB = (PFN_xrGetSpaceContainerFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSpaceBoundingBox2DFB", &out_function);
	// xrGetSpaceBoundingBox2DFB = (PFN_xrGetSpaceBoundingBox2DFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSpaceBoundingBox3DFB", &out_function);
	// xrGetSpaceBoundingBox3DFB = (PFN_xrGetSpaceBoundingBox3DFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSpaceSemanticLabelsFB", &out_function);
	// xrGetSpaceSemanticLabelsFB = (PFN_xrGetSpaceSemanticLabelsFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSpaceBoundary2DFB", &out_function);
	// xrGetSpaceBoundary2DFB = (PFN_xrGetSpaceBoundary2DFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetSpaceRoomLayoutFB", &out_function);
	// xrGetSpaceRoomLayoutFB = (PFN_xrGetSpaceRoomLayoutFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrPassthroughLayerSetKeyboardHandsIntensityFB", &out_function);
	// xrPassthroughLayerSetKeyboardHandsIntensityFB = (PFN_xrPassthroughLayerSetKeyboardHandsIntensityFB)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateSpatialAnchorStoreConnectionMSFT", &out_function);
	// xrCreateSpatialAnchorStoreConnectionMSFT = (PFN_xrCreateSpatialAnchorStoreConnectionMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroySpatialAnchorStoreConnectionMSFT", &out_function);
	// xrDestroySpatialAnchorStoreConnectionMSFT = (PFN_xrDestroySpatialAnchorStoreConnectionMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrPersistSpatialAnchorMSFT", &out_function);
	// xrPersistSpatialAnchorMSFT = (PFN_xrPersistSpatialAnchorMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrEnumeratePersistedSpatialAnchorNamesMSFT", &out_function);
	// xrEnumeratePersistedSpatialAnchorNamesMSFT = (PFN_xrEnumeratePersistedSpatialAnchorNamesMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateSpatialAnchorFromPersistedNameMSFT", &out_function);
	// xrCreateSpatialAnchorFromPersistedNameMSFT = (PFN_xrCreateSpatialAnchorFromPersistedNameMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrUnpersistSpatialAnchorMSFT", &out_function);
	// xrUnpersistSpatialAnchorMSFT = (PFN_xrUnpersistSpatialAnchorMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrClearSpatialAnchorStoreMSFT", &out_function);
	// xrClearSpatialAnchorStoreMSFT = (PFN_xrClearSpatialAnchorStoreMSFT)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateFacialTrackerHTC", &out_function);
	// xrCreateFacialTrackerHTC = (PFN_xrCreateFacialTrackerHTC)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroyFacialTrackerHTC", &out_function);
	// xrDestroyFacialTrackerHTC = (PFN_xrDestroyFacialTrackerHTC)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetFacialExpressionsHTC", &out_function);
	// xrGetFacialExpressionsHTC = (PFN_xrGetFacialExpressionsHTC)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreatePassthroughHTC", &out_function);
	// xrCreatePassthroughHTC = (PFN_xrCreatePassthroughHTC)out_function;
	// xrGetInstanceProcAddr(instance, "xrDestroyPassthroughHTC", &out_function);
	// xrDestroyPassthroughHTC = (PFN_xrDestroyPassthroughHTC)out_function;
	// xrGetInstanceProcAddr(instance, "xrEnumerateViveTrackerPathsHTCX", &out_function);
	// xrEnumerateViveTrackerPathsHTCX = (PFN_xrEnumerateViveTrackerPathsHTCX)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetMarkerTrackingVARJO", &out_function);
	// xrSetMarkerTrackingVARJO = (PFN_xrSetMarkerTrackingVARJO)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetMarkerTrackingTimeoutVARJO", &out_function);
	// xrSetMarkerTrackingTimeoutVARJO = (PFN_xrSetMarkerTrackingTimeoutVARJO)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetMarkerTrackingPredictionVARJO", &out_function);
	// xrSetMarkerTrackingPredictionVARJO = (PFN_xrSetMarkerTrackingPredictionVARJO)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetMarkerSizeVARJO", &out_function);
	// xrGetMarkerSizeVARJO = (PFN_xrGetMarkerSizeVARJO)out_function;
	// xrGetInstanceProcAddr(instance, "xrCreateMarkerSpaceVARJO", &out_function);
	// xrCreateMarkerSpaceVARJO = (PFN_xrCreateMarkerSpaceVARJO)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetDigitalLensControlALMALENCE", &out_function);
	// xrSetDigitalLensControlALMALENCE = (PFN_xrSetDigitalLensControlALMALENCE)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetViewOffsetVARJO", &out_function);
	// xrSetViewOffsetVARJO = (PFN_xrSetViewOffsetVARJO)out_function;
	// xrGetInstanceProcAddr(instance, "xrEnumeratePerformanceMetricsCounterPathsMETA", &out_function);
	// xrEnumeratePerformanceMetricsCounterPathsMETA = (PFN_xrEnumeratePerformanceMetricsCounterPathsMETA)out_function;
	// xrGetInstanceProcAddr(instance, "xrSetPerformanceMetricsStateMETA", &out_function);
	// xrSetPerformanceMetricsStateMETA = (PFN_xrSetPerformanceMetricsStateMETA)out_function;
	// xrGetInstanceProcAddr(instance, "xrGetPerformanceMetricsStateMETA", &out_function);
	// xrGetPerformanceMetricsStateMETA = (PFN_xrGetPerformanceMetricsStateMETA)out_function;
	// xrGetInstanceProcAddr(instance, "xrQueryPerformanceMetricsCounterMETA", &out_function);
	// xrQueryPerformanceMetricsCounterMETA = (PFN_xrQueryPerformanceMetricsCounterMETA)out_function;
	// xrGetInstanceProcAddr(instance, "xrApplyFoveationHTC", &out_function);
	// xrApplyFoveationHTC = (PFN_xrApplyFoveationHTC)out_function;
}