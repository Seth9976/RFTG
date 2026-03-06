// 函数名称: sub_40b440
// 虚拟地址: 0x40b440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_40b440(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e1e0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_18 = nullptr
    void* eax_3 = data_27e7a40
    
    if (*(eax_3 + 0x2c4960) != 2)
        sub_4c42b0(arg1, &data_83f3d3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    int32_t eax_5 = sub_473030(*(*(eax_3 + 0x2c495c) * 0x1f8 + eax_3 + 0xca8))
    void* eax_7 = sub_463760(*(data_27e7a40 + 0x74))
    void* edx = data_27e7a40
    int32_t var_20 = *(edx + 0xc)
    int32_t eax_10
    int32_t edx_3
    edx_3:eax_10 = muls.dp.d(0x10624dd3, *(edx + 8) - *(eax_7 + 0x40))
    int32_t eax_12 = edx_3 s>> 6
    int32_t eax_15 =
        sub_472fc0(*(eax_7 + 0x3c), (eax_12 u>> 0x1f) + eax_12, *(eax_7 + 0x34), *(eax_7 + 0x38))
    int32_t edx_7
    edx_7.b = eax_5 - eax_15 s< 0
    sub_40b2c0(&var_18, edx_7 - 1, (eax_5 - eax_15) & (edx_7 - 1), &var_18)
    int32_t var_8_1 = 0
    char* eax_17 = var_18
    
    if (eax_17 == 0)
        eax_17 = &data_83f3d3
    
    char* var_3c_2 = eax_17
    char* var_14
    sub_4c4a50(&var_14, "Time Remaining: %s")
    var_8_1.b = 1
    char* eax_18 = var_14
    *arg1 = eax_18
    
    if (eax_18 != 0 && *eax_18 != 0)
        void* eax_20 = sub_4c4060(arg1)
        *(eax_20 + 4) += 1
        eax_18 = var_14
    
    var_8_1.b = 0
    
    if (eax_18 != 0 && *eax_18 != 0)
        void* eax_22 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_22 + 4)
        *(eax_22 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_2 = *(eax_22 + 0xc) + 0x10
            sub_4f4430(eax_22, sub_4f4380(esi_2), esi_2)
    
    int32_t var_8_2 = 0xffffffff
    char* eax_25 = var_18
    
    if (eax_25 != 0 && *eax_25 != 0)
        void* eax_27 = sub_4c4060(&var_18)
        int32_t temp2_1 = *(eax_27 + 4)
        *(eax_27 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_4 = *(eax_27 + 0xc) + 0x10
            sub_4f4430(eax_27, sub_4f4380(esi_4), esi_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
