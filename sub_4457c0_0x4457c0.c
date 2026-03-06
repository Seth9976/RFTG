// 函数名称: sub_4457c0
// 虚拟地址: 0x4457c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_4457c0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6987cc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_d4
    int32_t eax_2 = __security_cookie ^ &var_d4
    int32_t __saved_edi
    int32_t var_e4 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4dad50()
    
    if (arg2 s>= 0x2710)
        sub_4c5870("cardIndex < 10000", &data_83f3d3, "..\code\RFTGClient.cpp", 0x4322, 
            "VRDrawCardNormal")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_6 = sub_418a10()
    long double x87_r7 = float.t(0)
    int32_t var_bc = eax_6
    int32_t eax_7 = sx.d(*(*(eax_6 + arg2 * 0x14 + 0x46c) + 4))
    float var_c4 = fconvert.s(fconvert.t(2048f))
    float var_6c = fconvert.s(x87_r7)
    float var_68 = fconvert.s(fconvert.t(3238f))
    float var_70 = fconvert.s(x87_r7)
    float var_64 = var_c4
    int32_t eax_9
    int80_t st0
    st0, eax_9 = sub_4fb1d0(&var_70, &var_70)
    float var_60
    __builtin_memcpy(&var_60, eax_9, 0x40)
    void* eax_10 = sub_4f4890(data_307c104)
    float edx_2 = *(eax_10 + 0xc)
    float edx_3 = *(eax_10 + 0x14)
    var_70 = fconvert.s(fconvert.t(*(eax_10 + 0x10)) - fconvert.t(*(eax_10 + 8)))
    float var_cc_2 = fconvert.s(fneg(fconvert.t(fconvert.s(fconvert.t(edx_3) - fconvert.t(edx_2)))))
    long double x87_r5 = fconvert.t(0.5)
    var_70 = fconvert.s(fconvert.t(fconvert.s(fneg(fconvert.t(var_70)))) * x87_r5)
    float var_6c_2 = fconvert.s(x87_r5 * fconvert.t(var_cc_2))
    float var_54
    long double x87_r5_2 = fconvert.t(var_54)
    var_60 = fconvert.s(fconvert.t(var_70) * x87_r5_2)
    float var_cc_3 = fconvert.s(x87_r5_2 * fconvert.t(var_6c_2))
    float var_5c = var_cc_3
    float var_f4 = var_cc_3
    int80_t result = sub_4294a0(arg4, eax_7, &var_60, fconvert.s(float.t(1)), arg4.b, arg5, arg3)
    
    if (arg3 != 0xffffffff && sub_445500(arg2) != 0)
        int32_t eax_14
        int32_t ecx_9
        eax_14, ecx_9 = sub_445560(0xffffffff, arg2)
        int32_t* esi_4 = data_307c104
        
        if ((data_316673c & 1) == 0)
            data_316673c.d |= 1
            int32_t var_c_1 = 0
            data_3166738 = sub_4f5220(esi_4, "PointCover")
            int32_t var_c_2 = 0xffffffff
        
        if ((data_316673c & 2) == 0)
            data_316673c.d |= 2
            int32_t var_c_3 = 1
            data_3166734 = sub_4f5220(esi_4, "txtPoint")
            int32_t var_c_4 = 0xffffffff
        
        int32_t var_f0_1 = ecx_9
        sub_4f4b00(esi_4, data_3166738, fconvert.s(float.t(1)), nullptr, nullptr)
        sub_4f5120(esi_4, data_3166734, &var_60, eax_14)
    
    void* eax_18 = data_27e7fe4
    __builtin_memcpy(eax_18 + 0x9c, 0x83faf8, 0x40)
    *(eax_18 + 0xdc) = 0
    sub_4e2080()
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_d4)
    return result
}
