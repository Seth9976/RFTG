// 函数名称: sub_433e40
// 虚拟地址: 0x433e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_433e40(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6939fa
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_58 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_3092a04
    char* edx
    
    if ((data_3165a20 & 1) == 0)
        data_3165a20.d |= 1
        int32_t var_8_1 = 0
        char const* const var_5c_1 = "players"
        int32_t eax_4
        eax_4, edx = sub_510710(data_307ca3c, edx)
        data_3165a1c = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165a20 & 2) == 0)
        data_3165a20.d |= 2
        int32_t var_8_3 = 1
        char const* const var_5c_2 = "uiTakeover"
        data_3165a18 = sub_510710(data_307ca78, edx)
        int32_t var_8_4 = 0xffffffff
    
    int32_t eax_7 = sub_50eb00(data_3165a1c, 0)
    
    if ((data_3165a20 & 4) == 0)
        data_3165a20.d |= 4
        int32_t var_8_5 = 2
        data_3165a14 = sub_4f5220(data_307c760, "img_Takeover")
        int32_t var_8_6 = 0xffffffff
    
    int32_t* eax_11 = *sub_466320(data_307c39c)
    long double x87_r7 = float.t(*eax_11)
    
    if (*eax_11 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_1 = float.t(eax_11[1])
    
    if (eax_11[1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    int32_t ecx_3 = data_3165a14
    float var_20 = fconvert.s(x87_r7_1)
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_11[2])))
    float var_1c = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))
    float var_18_1 = fconvert.s(x87_r7_3 * fconvert.t(var_20))
    float var_48[0x9]
    int32_t eax_14
    int80_t result
    result, eax_14 = sub_50fbc0(&var_48, eax_7, &var_1c, &var_48, data_3165a18, ecx_3)
    __builtin_memcpy(arg1, eax_14, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
