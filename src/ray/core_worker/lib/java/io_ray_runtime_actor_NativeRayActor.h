// Copyright 2017 The Ray Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_ray_runtime_actor_NativeRayActor */

#ifndef _Included_io_ray_runtime_actor_NativeRayActor
#define _Included_io_ray_runtime_actor_NativeRayActor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_ray_runtime_actor_NativeRayActor
 * Method:    nativeGetLanguage
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL
Java_io_ray_runtime_actor_NativeRayActor_nativeGetLanguage(JNIEnv *, jclass, jbyteArray);

/*
 * Class:     io_ray_runtime_actor_NativeRayActor
 * Method:    nativeGetActorCreationTaskFunctionDescriptor
 * Signature: ([B)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL
Java_io_ray_runtime_actor_NativeRayActor_nativeGetActorCreationTaskFunctionDescriptor(
    JNIEnv *, jclass, jbyteArray);

/*
 * Class:     io_ray_runtime_actor_NativeRayActor
 * Method:    nativeSerialize
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_io_ray_runtime_actor_NativeRayActor_nativeSerialize(JNIEnv *, jclass, jbyteArray);

/*
 * Class:     io_ray_runtime_actor_NativeRayActor
 * Method:    nativeDeserialize
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_io_ray_runtime_actor_NativeRayActor_nativeDeserialize(JNIEnv *, jclass, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif