// 函数名称: sub_45f5f0
// 虚拟地址: 0x45f5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_45f5f0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_698721
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_13c
    int32_t eax_2 = __security_cookie ^ &var_13c
    int32_t __saved_edi
    int32_t var_14c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_5 = data_307c584
    void var_a0
    void var_60
    int32_t edx
    __builtin_memcpy(&var_a0, sub_45fb20(eax_5, edx, arg1, &var_60), 0x40)
    int32_t eax_7
    int32_t ecx_1
    int32_t edx_1
    eax_7, ecx_1, edx_1 = sub_424340()
    void* var_150_1 = &var_a0
    int32_t* result_1 = sub_4ba260(eax_7)
    int32_t eax_9 = data_c02164
    int32_t var_154 = ecx_1
    __builtin_memcpy(&var_60, sub_4f62d0(eax_9, fconvert.s(float.t(1)), edx_1), 0x40)
    void* ecx_5 = eax_9 * 0x118 + *sub_4f4890(eax_5)
    sub_4f67d0(&var_60, nullptr, result_1, ecx_5, &data_be1ae0, &var_60, nullptr, nullptr)
    sub_4f5f30(eax_5, &var_a0, 0, fconvert.s(float.t(1)))
    void* eax_13 = *(data_27e7a40 + 0x548)
    
    if (eax_13 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_15 = *(eax_13 + 0x45844)
    int32_t eax_17 = sub_42c680(arg1)
    char* ecx_7 = sub_4f5120(eax_5, data_c02160, &var_a0, eax_17)
    
    if ((data_316671c & 1) == 0)
        data_316671c.d |= 1
        int32_t var_c_1 = 0
        data_3166718 = sub_4f5220(eax_5, "tbl_opponentIcons")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_316671c & 2) == 0)
        data_316671c.d |= 2
        int32_t var_c_3 = 1
        data_3166714 = sub_4f5220(eax_5, "rgn_opponentActionOnlyOnePrestige")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_316671c & 4) == 0)
        data_316671c.d |= 4
        int32_t var_c_5 = 2
        data_3166710 = sub_4f5220(eax_5, "rgn_opponentAction0Prestige")
        int32_t var_c_6 = 0xffffffff
    
    if ((data_316671c & 8) == 0)
        data_316671c.d |= 8
        int32_t var_c_7 = 3
        data_316670c = sub_4f5220(eax_5, "rgn_opponentAction1Prestige")
        int32_t var_c_8 = 0xffffffff
    
    int32_t eax_22 = data_3166718
    int32_t var_150_4 = arg1
    int32_t** var_150_5 = &result_1
    int32_t ecx_8
    int32_t edx_6
    ecx_8, edx_6 = sub_424120(arg1, sub_425870(eax_22, eax_15, ecx_7, eax_5, eax_22))
    int32_t var_c_9 = 4
    int32_t* result_2 = result_1
    int32_t* result_3 = &data_83f3d3
    
    if (result_2 != 0)
        result_3 = result_2
    
    int32_t eax_24 = data_c02168
    void* var_150_6 = &var_a0
    int32_t var_154_8 = ecx_8
    __builtin_memcpy(&var_60, sub_4f62d0(eax_24, fconvert.s(float.t(1)), edx_6), 0x40)
    int32_t edx_7 = sub_4f5010(&var_60, eax_24 * 0x118 + *sub_4f4890(eax_5), result_3, 0)
    char var_139
    char* ecx_10 = &var_139
    char* var_154_18
    int32_t* esi_9
    
    if (sub_41e630() == 0)
        esi_9 = sub_41eac0(*(arg1 * 0xb4 + eax_15 + 0x2c), eax_15, ecx_10)
        
        if (var_139 != 0)
            char* var_154_16 = &var_139
            ecx_10 = sub_4f6cb0(eax_5, data_3166714, data_307c2cc, fconvert.s(float.t(1)), nullptr)
        
        if (esi_9 != 0)
            var_154_18 = ecx_10
            ecx_10 = sub_4f6cb0(eax_5, data_c02174, esi_9, fconvert.s(float.t(1)), nullptr)
    else
        void* esi_8 = arg1 * 0xb4 + eax_15
        int32_t* eax_30
        int32_t edx_8
        eax_30, edx_8 = sub_41eac0(*(esi_8 + 0x2c), edx_7, ecx_10)
        
        if (var_139 != 0)
            char* var_154_10 = &var_139
            ecx_10, edx_8 =
                sub_4f6cb0(eax_5, data_3166710, data_307c2cc, fconvert.s(float.t(1)), nullptr)
        
        if (eax_30 != 0)
            char* var_154_12 = ecx_10
            edx_8 = sub_4f6cb0(eax_5, data_c0216c, eax_30, fconvert.s(float.t(1)), nullptr)
        
        ecx_10 = &var_139
        esi_9 = sub_41eac0(*(esi_8 + 0x30), edx_8, ecx_10)
        
        if (var_139 != 0)
            char* var_154_14 = &var_139
            ecx_10 = sub_4f6cb0(eax_5, data_316670c, data_307c2cc, fconvert.s(float.t(1)), nullptr)
        
        if (esi_9 != 0)
            var_154_18 = ecx_10
            ecx_10 = sub_4f6cb0(eax_5, data_c02170, esi_9, fconvert.s(float.t(1)), nullptr)
    
    if (*(eax_15 + 0x45a) == 3)
        if ((data_316671c & 0x10) == 0)
            data_316671c.d |= 0x10
            var_c_9.b = 5
            data_3166708 = sub_4f5220(eax_5, "imgPrestigeAction")
            var_c_9.b = 4
        
        char* var_158_8 = ecx_10
        void var_e0
        int32_t eax_42
        int80_t st0_2
        st0_2, eax_42 = sub_4f66d0(&var_e0, eax_5, data_3166708, &data_84074c, fconvert.s(float.t(1)), 
            nullptr, nullptr)
        __builtin_memcpy(&var_60, eax_42, 0x40)
        int32_t ecx_15
        ecx_15.b = sub_41f1f0(arg1) == 0
        int32_t var_150_7 = ecx_15
        sub_4f5f30(data_307c604, &var_60, ecx_15, fconvert.s(float.t(1)))
    
    int32_t var_c_10 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_12 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_12), esi_12)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_13c)
    return result
}
