#include <stdio.h>
#include <assert.h>

#define OPENXR_TUTORIAL_WINDOWS
// #define OPENXR_TUTORIAL_ANDROID

#include "openxr_tutorial_loader.h"

int main() {
        XrResult result;

	openxr_load_base_procs();

        XrInstance instance;
        XrApplicationInfo application_info = {
                .apiVersion = XR_CURRENT_API_VERSION,
                .applicationName = "OpenXR Tutorial",
                .applicationVersion = 1,
                .engineName = "OpenXR Tutorial Engine",
                .engineVersion = 1,
        };
        XrInstanceCreateInfo instance_info = {
                .type = XR_TYPE_INSTANCE_CREATE_INFO,
                .applicationInfo = application_info,
        };
        result = xrCreateInstance(&instance_info, &instance);
        assert(result == XR_SUCCESS /* Failed to create instance */);

	openxr_load_instance_procs(instance);

        XrSystemId system;
        XrSystemGetInfo system_get_info = {
                .type = XR_TYPE_SYSTEM_GET_INFO,
                .formFactor = XR_FORM_FACTOR_HEAD_MOUNTED_DISPLAY,       
        };
        result = xrGetSystem(instance, &system_get_info, &system);
        assert(result == XR_SUCCESS /* Failed to get system ID */);

	xrDestroyInstance(instance);
        printf("finished successfully");
}
