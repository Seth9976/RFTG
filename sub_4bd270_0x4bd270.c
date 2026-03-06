// 函数名称: sub_4bd270
// 虚拟地址: 0x4bd270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __fastcallsub_4bd270(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_697a6a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_13c
    int32_t eax_2 = __security_cookie ^ &var_13c
    int32_t __saved_edi
    int32_t var_14c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_7 = arg1 * 0x214 + *data_27e7a58
    int32_t eax_8
    int80_t st0
    st0, eax_8 = sub_4bba20(arg2)
    void var_60
    __builtin_memcpy(&var_60, eax_8, 0x40)
    int32_t ecx_1 = arg1 * 7
    int32_t var_154 = ecx_1
    void* esi_2 = arg2 + (ecx_1 << 2)
    int32_t var_154_2 = sub_5055d0(esi_2 + 0x2f8, *(esi_2 + 0x2f4), esi_2 + 0x300, *(esi_2 + 0x2f0), 
        &var_60, fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x14))))), 0)
    sub_5055d0(esi_2 + 0x368, *(esi_2 + 0x364), esi_2 + 0x370, *(esi_2 + 0x360), &var_60, 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x14))))), 0)
    int32_t edx_4
    int80_t st0_1
    st0_1, edx_4 = sub_4f5f30(data_307c630, &var_60, 0, fconvert.s(fconvert.t(*(arg2 + 0x14))))
    
    if ((data_31664ec & 1) == 0)
        data_31664ec.d |= 1
        int32_t var_c_1 = 0
        int32_t eax_12
        eax_12, edx_4 = sub_4f5220(data_307c630, "Avatar")
        data_31664e8 = eax_12
        int32_t var_c_2 = 0xffffffff
    
    if ((data_31664ec & 2) == 0)
        data_31664ec.d |= 2
        int32_t var_c_3 = 1
        int32_t eax_14
        eax_14, edx_4 = sub_4f5220(data_307c630, "Frame")
        data_31664e4 = eax_14
        int32_t var_c_4 = 0xffffffff
    
    int32_t* eax_16 = sub_4ba260(eax_7[6])
    int32_t* ecx_7 = data_307c630
    void* var_150_6 = &var_60
    int32_t eax_17 = data_31664e8
    int32_t* var_154_7 = ecx_7
    void var_120
    __builtin_memcpy(&var_120, 
        sub_4f62d0(eax_17, fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x14))))), edx_4), 0x40)
    void* ecx_10 = eax_17 * 0x118 + *sub_4f4890(ecx_7)
    void* var_158_3 = nullptr
    int32_t* var_15c_3 = nullptr
    float var_160 = &var_120
    int32_t edx_6
    int80_t st0_2
    st0_2, edx_6 =
        sub_4f67d0(&var_120, nullptr, eax_16, ecx_10, &data_be1ae0, var_160, var_15c_3, var_158_3)
    int32_t eax_21 = data_31664e4
    int32_t* ecx_13 = data_307c630
    void* var_150_7 = &var_60
    int32_t* var_154_9 = ecx_13
    __builtin_memcpy(&var_120, 
        sub_4f62d0(eax_21, fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x14))))), edx_6), 0x40)
    void* ecx_16 = eax_21 * 0x118 + *sub_4f4890(ecx_13)
    void* var_158_4 = nullptr
    int32_t* var_15c_4 = nullptr
    var_160 = &var_120
    int32_t edx_7
    int80_t result
    result, edx_7 = sub_4f67d0(ecx_16, nullptr, *(ecx_16 + 0x68), ecx_16, &data_be1ae0, var_160, 
        var_15c_4, var_158_4)
    int32_t eax_26
    
    if ((data_31664ec & 4) != 0)
        eax_26 = data_31664e0
    else
        data_31664ec.d |= 4
        int32_t var_c_5 = 2
        eax_26, edx_7 = sub_4f5220(data_307c630, "MyName")
        data_31664e0 = eax_26
        int32_t var_c_6 = 0xffffffff
    
    int32_t* ecx_19 = data_307c630
    void* var_150_9 = &var_60
    int32_t* var_154_12 = ecx_19
    __builtin_memcpy(&var_120, 
        sub_4f62d0(eax_26, fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x14))))), edx_7), 0x40)
    sub_4f5010(&var_120, eax_26 * 0x118 + *sub_4f4890(ecx_19), eax_7, 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_13c)
    return result
}
