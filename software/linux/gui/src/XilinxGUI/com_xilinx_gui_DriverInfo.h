/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_xilinx_gui_DriverInfo */

#ifndef _Included_com_xilinx_gui_DriverInfo
#define _Included_com_xilinx_gui_DriverInfo
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_xilinx_gui_DriverInfo
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_xilinx_gui_DriverInfo_init
  (JNIEnv *, jclass);

/*
 * Class:     com_xilinx_gui_DriverInfo
 * Method:    get_PCIstate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_xilinx_gui_DriverInfo_get_1PCIstate
  (JNIEnv *, jobject);

/*
 * Class:     com_xilinx_gui_DriverInfo
 * Method:    get_EngineState
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_xilinx_gui_DriverInfo_get_1EngineState
  (JNIEnv *, jobject);

/*
 * Class:     com_xilinx_gui_DriverInfo
 * Method:    get_DMAStats
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_xilinx_gui_DriverInfo_get_1DMAStats
  (JNIEnv *, jobject);

/*
 * Class:     com_xilinx_gui_DriverInfo
 * Method:    get_TRNStats
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_xilinx_gui_DriverInfo_get_1TRNStats
  (JNIEnv *, jobject);

/*
 * Class:     com_xilinx_gui_DriverInfo
 * Method:    get_SWStats
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_xilinx_gui_DriverInfo_get_1SWStats
  (JNIEnv *, jobject);

/*
 * Class:     com_xilinx_gui_DriverInfo
 * Method:    get_PowerStats
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_xilinx_gui_DriverInfo_get_1PowerStats
  (JNIEnv *, jobject);

/*
 * Class:     com_xilinx_gui_DriverInfo
 * Method:    startTest
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_xilinx_gui_DriverInfo_startTest
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_xilinx_gui_DriverInfo
 * Method:    stopTest
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_xilinx_gui_DriverInfo_stopTest
  (JNIEnv *, jobject, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif