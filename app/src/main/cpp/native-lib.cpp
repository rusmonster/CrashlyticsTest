#include <jni.h>
#include <string>

#include "module.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_crashlyticstest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT void JNICALL
Java_com_example_crashlyticstest_MainActivity_crashFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    assert( false );
}

extern "C" JNIEXPORT void JNICALL
Java_com_example_crashlyticstest_MainActivity_crashFromJNI2(
        JNIEnv *env,
        jobject /* this */) {
    myassert();
}
