//
// Created by Administrator on 2016/10/8.
//
#include <stdio.h>
#include <jni.h>

//Java 声明函数：public native String helloworldFromC();
jstring Java_com_jni_hello_javajnifromc_MainActivity_helloworldFromC(JNIEnv* env, jobject obj){

    //返回一个java String类型的字符串
    //jstring     (*NewStringUTF)(JNIEnv*, const char*);
    return (*env)->NewStringUTF(env,"hello world from c");
}