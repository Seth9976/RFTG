// 函数名称: sub_42faf0
// 虚拟地址: 0x42faf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_42faf0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69232c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_104 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = 6
    
    if (arg5 == 1)
        eax_3 = 7
    
    int32_t var_60 = 2
    int32_t var_64 = eax_3
    int32_t var_58 = eax_3
    
    if (arg2 s> eax_3 * 2)
        var_58 = arg2 - eax_3
    
    int32_t eax_4
    
    if (arg3 s>= eax_3)
        arg3 -= eax_3
        eax_4 = 1
    else
        int32_t edx_3
        edx_3.b = arg2 s<= eax_3
        eax_4 = edx_3
    
    int32_t var_6c = arg3
    int32_t var_68 = eax_4
    
    if ((data_3165750 & 1) == 0)
        data_3165750.d |= 1
        int32_t var_8_1 = 0
        data_316574c = sub_4f5220(data_307c530, "rgn_playerTableau")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165750 & 2) == 0)
        data_3165750.d |= 2
        int32_t var_8_3 = 1
        data_3165748 = sub_4f5220(data_307c104, "img_cardSaved")
        int32_t var_8_4 = 0xffffffff
    
    void var_b4
    int32_t eax_8
    int80_t st0
    st0, eax_8 = sub_40a930(&var_b4)
    float var_54
    __builtin_memcpy(&var_54, eax_8, 0x40)
    long double x87_r6 = fconvert.t(var_54)
    float var_50
    long double x87_r5 = fconvert.t(var_50)
    long double x87_r6_3 = fconvert.t(fconvert.s(x87_r6 * x87_r6 + x87_r5 * x87_r5))
    long double temp0 = fconvert.t(10000000f)
    x87_r6_3 - temp0
    eax_8.w = (x87_r6_3 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, temp0) ? 1 : 0) << 0xa
        | (x87_r6_3 == temp0 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        sub_4c5870("SqrLen(t.offset) < 10000000", &data_83f3d3, "..\code\RFTGClient.cpp", 0x226d, 
            "PlayerTableauSaveCardRect")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* var_110 = &var_64
    void var_f4
    int32_t eax_11
    int32_t edx_4
    int80_t result
    result, eax_11, edx_4 = sub_4f66d0(&var_f4, data_307c530, data_316574c, &var_6c, 
        fconvert.s(float.t(1)), &var_64, &var_58)
    __builtin_memcpy(&var_54, eax_11, 0x40)
    int32_t* eax_13 = sub_4f5350(data_3165748, edx_4, data_307c104, &var_54)
    *arg4 = *eax_13
    arg4[1] = eax_13[1]
    int32_t eax_14 = eax_13[3]
    arg4[2] = eax_13[2]
    arg4[3] = eax_14
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
