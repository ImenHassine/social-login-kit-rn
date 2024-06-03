#include <jni.h>
#include "react-native-social-components-rn.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_socialcomponentsrn_SocialComponentsRnModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return socialcomponentsrn::multiply(a, b);
}
