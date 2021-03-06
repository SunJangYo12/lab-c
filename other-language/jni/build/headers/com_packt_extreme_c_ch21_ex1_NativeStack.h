/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_packt_extreme_c_ch21_ex1_NativeStack */

#ifndef _Included_com_packt_extreme_c_ch21_ex1_NativeStack
#define _Included_com_packt_extreme_c_ch21_ex1_NativeStack
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_packt_extreme_c_ch21_ex1_NativeStack
 * Method:    newStack
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_packt_extreme_1c_ch21_ex1_NativeStack_newStack
  (JNIEnv *, jclass);

/*
 * Class:     com_packt_extreme_c_ch21_ex1_NativeStack
 * Method:    deleteStack
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_packt_extreme_1c_ch21_ex1_NativeStack_deleteStack
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_packt_extreme_c_ch21_ex1_NativeStack
 * Method:    ctor
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_packt_extreme_1c_ch21_ex1_NativeStack_ctor
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_packt_extreme_c_ch21_ex1_NativeStack
 * Method:    dtor
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_packt_extreme_1c_ch21_ex1_NativeStack_dtor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_packt_extreme_c_ch21_ex1_NativeStack
 * Method:    size
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_packt_extreme_1c_ch21_ex1_NativeStack_size
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_packt_extreme_c_ch21_ex1_NativeStack
 * Method:    push
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_com_packt_extreme_1c_ch21_ex1_NativeStack_push
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     com_packt_extreme_c_ch21_ex1_NativeStack
 * Method:    pop
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_packt_extreme_1c_ch21_ex1_NativeStack_pop
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_packt_extreme_c_ch21_ex1_NativeStack
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_packt_extreme_1c_ch21_ex1_NativeStack_clear
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
