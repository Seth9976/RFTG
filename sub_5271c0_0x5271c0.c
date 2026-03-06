// 函数名称: sub_5271c0
// 虚拟地址: 0x5271c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_5271c0(int32_t arg1, int32_t arg2, int32_t arg3, float arg4, int32_t arg5, int32_t arg6, float arg7, int32_t arg8, int32_t arg9, float arg10, char* arg11, int32_t* arg12)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6929c9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_18 = arg3
    __chkstk(0x1404)
    int32_t eax_2 = __security_cookie ^ &var_18
    int32_t __saved_edi
    int32_t var_28 = __security_cookie ^ &__saved_edi
    int32_t arg_13f0
    fsbase->NtTib.ExceptionList = &arg_13f0
    void* (__fastcall* var_2c)(int32_t* arg1) = sub_527340
    int32_t var_10_1 = arg6
    *(arg4 i+ 0x5c) = arg8
    *(arg4 i+ 0x1454) = arg5
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = sub_5a7116(&var_c, 0x14, 0xff, sub_527330)
    int32_t arg_13f8 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = *(arg4 i+ 0x1450)
    ExceptionList = nullptr
    char* esi
    
    if (ExceptionList_1 == 0)
        ExceptionList_2 = arg12
        esi = arg11
        ExceptionList = ExceptionList_2
    else if (arg12 != 0)
        int32_t* var_2c_1 = arg12
        esi = &var_c
        struct _EXCEPTION_REGISTRATION_RECORD** var_30_1 = &ExceptionList
        int32_t* edx_2 = sub_5266a0(arg11, arg12, &data_5a7160, &var_c)
        int32_t* ecx_1 = *(arg4 i+ 0x1450)
        int32_t* var_2c_2 = ecx_1
        struct _EXCEPTION_REGISTRATION_RECORD** var_30_2 = &ExceptionList
        ExceptionList_2 = sub_5266a0(arg4 i+ 0x64, edx_2, ecx_1, &var_c)
    else
        esi = arg4 i+ 0x64
        ExceptionList = ExceptionList_1
    
    int32_t* ExceptionList_3 = ExceptionList
    *(arg4 i+ 4)
    int32_t* ExceptionList_4 = ExceptionList_3
    char* var_30_3 = esi
    int32_t var_30_4 = sub_5256b0(*arg4, arg4, ExceptionList_3, ExceptionList_2)
    int32_t eax_11
    int32_t edx_3
    int80_t result
    result, eax_11, edx_3 = sub_527110(arg4, fconvert.s(fconvert.t(arg7)), arg9)
    float var_2c_4 = fconvert.s(fconvert.t(arg10))
    sub_526930(eax_11, edx_3, arg4, esi, ExceptionList)
    arg_13f8 = 0xffffffff
    sub_5a71d9(&var_c, 0x14, 0xff, sub_527340)
    fsbase->NtTib.ExceptionList = arg_13f0
    sub_5a6aba(eax_2 ^ &var_18)
    return result
}
