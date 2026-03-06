// 函数名称: sub_5838b0
// 虚拟地址: 0x5838b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5838b0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6984e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_dc = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_cc
    int32_t eax_3
    long double result_1
    result_1, eax_3 = sub_40a930(&var_cc)
    long double result = result_1
    void var_8c
    __builtin_memcpy(&var_8c, eax_3, 0x40)
    char** esi_1 = data_27c048c
    
    if (esi_1 == 0)
        esi_1 = sub_50a390(esi_1 + 0x1d)
    else if (esi_1[1] != 0x1d)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_18 = esi_1
    
    if (*esi_1 == 0)
        sub_5094d0(esi_1, 0, 1)
    
    esi_1[7] = &esi_1[7][1]
    int32_t var_8_1 = 0
    **esi_1
    int32_t* eax_6 = sub_514bb0()
    int32_t var_8_2 = 0xffffffff
    esi_1[7] = &esi_1[7][0xffffffff]
    void* eax_7 = data_27e7fd0
    long double x87_r5 = float.t(0)
    long double result_4 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(float.t(*(eax_7 + 0x14)))) - x87_r5))
    long double result_3 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(float.t(*(eax_7 + 0x18)))) - x87_r5))
    result_3 - result_4
    eax_7.w = (result_3 < result_4 ? 1 : 0) << 8 | (is_unordered.t(result_3, result_4) ? 1 : 0) << 0xa
        | (result_3 == result_4 ? 1 : 0) << 0xe | 0x2800
    
    if ((eax_7:1.b & 0x41) != 0)
        result = result_3
    else
        result_4 = result_3
    
    long double x87_r6_7 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(result_4))))
    long double x87_r5_2 = fconvert.t(0.80000001192092896)
    float var_2c_1 = fconvert.s(fconvert.t(fconvert.s(x87_r6_7)) * x87_r5_2)
    float var_28_1 = fconvert.s(x87_r5_2 * fconvert.t(fconvert.s(x87_r6_7)))
    long double x87_r6_12 = float.t(0)
    float var_24 = fconvert.s(x87_r6_12)
    float var_1c_2 = fconvert.s(fconvert.t(var_2c_1))
    float var_30 = fconvert.s(x87_r6_12)
    float var_34 = var_24
    float var_28_2 = fconvert.s(fconvert.t(var_28_1))
    float eax_10 = data_27e7fe0
    float var_2c_2 = var_1c_2
    int32_t ecx_3
    long double result_2
    
    if (*(eax_10 i+ 0x38) == 0)
        result_2, ecx_3 = sub_4d9830(eax_10, &data_be4aac, nullptr, &data_84076c, &var_34, eax_6)
        result = result_2
    else
        eax_10, ecx_3 = sub_4d9650(eax_10, eax_10 i+ 0x28, &data_84076c, &var_24, &var_34)
        
        if (eax_10.b != 0)
            void var_48
            result_2, ecx_3 = sub_4d9830(eax_10, &data_be4aac, nullptr, &var_24, &var_48, eax_6)
            result = result_2
    int32_t var_e0_3 = ecx_3
    float var_e0_4 = fconvert.s(float.t(1))
    sub_4f9fe0(data_27c0490, &var_8c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
