#include "Native.h"

JNIEXPORT void JNICALL Java_Native_sayHello(JNIEnv *env, jclass obj) {
    printf("Hello world\n");
}

JNIEXPORT void JNICALL Java_Native_sendANum(JNIEnv *env, jclass obj, jint arg) {
    printf("Number: %d\n", arg);
}

JNIEXPORT void JNICALL Java_Native_sendAString(JNIEnv *env, jclass obj, jstring arg) {
    printf("String: %s\n", (*env)->GetStringUTFChars(env, arg, 0));
}

JNIEXPORT jint JNICALL Java_Native_getANum(JNIEnv *env, jclass obj) {
    return 10;
}

JNIEXPORT jstring JNICALL Java_Native_getAString(JNIEnv *env, jclass obj) {
    return (*env)->NewStringUTF(env, "a string");
}
