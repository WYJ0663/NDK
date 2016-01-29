#include <string.h>
#include <jni.h>
#include "com_example_hellojni_JTest.h"

JNIEXPORT jstring JNICALL Java_com_example_hellojni_JTest_getString(JNIEnv * env,
		jclass jclass) {

	return (*env)->NewStringUTF(env, "Hello  JNI  ");
}
