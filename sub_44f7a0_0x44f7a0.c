// 函数名称: sub_44f7a0
// 虚拟地址: 0x44f7a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_44f7a0(int32_t arg1, int32_t arg2, char* arg3, void* arg4, char* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e668
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result_1
    void* result_2 = result_1
    int32_t edx = *(result_2 + 0x60)
    void* result_3 = (edx << 4) + result_2
    *(result_2 + 0x60) = edx + 1
    char* arg_c
    int32_t edx_1
    edx_1.b = *arg_c
    char* eax_3
    eax_3.b = *arg3
    result_1 = result_3
    
    if (edx_1.b != eax_3.b)
        sub_4c5870("p1.phase == p0.phase", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5846, 
            "AddPowerDescFreedomFighterTriple")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (edx_1.b != *arg5)
        sub_4c5870("p1.phase == p2.phase", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5847, 
            "AddPowerDescFreedomFighterTriple")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_6
    
    if (eax_3.b != 4 || zx.d(arg3[8]) == 0)
        eax_6 = sx.d(eax_3.b)
    else
        eax_6 = 7
    
    *(result_3 + 4) = eax_6
    
    if (arg6 != 0)
        if (arg6 != 2)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x585c, 
                "AddPowerDescFreedomFighterTriple")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *result_3 = 7
    else if (arg2 == 0)
        *result_3 = 2
    else
        if (arg2 != 3)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5855, 
                "AddPowerDescFreedomFighterTriple")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *result_3 = 4
    
    int32_t eax_12 = sx.d(*(arg4 + 0xe))
    int32_t var_8_1 = 0
    char* var_14
    sub_4c4510(sub_44c1b0(eax_12, &var_14, arg3, &var_14, eax_12))
    int32_t var_8_2 = 0xffffffff
    char* eax_14 = var_14
    
    if (eax_14 != 0 && *eax_14 != 0)
        void* eax_16 = sub_4c4060(&var_14)
        int32_t temp2_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_3 = *(eax_16 + 0xc) + 0x10
            sub_4f4430(eax_16, sub_4f4380(esi_3), esi_3)
    
    char* var_18
    char** eax_20
    int32_t edx_7
    eax_20, edx_7 = sub_44c1b0(arg4, &var_18, arg_c, &var_18, sx.d(*(arg4 + 0xe)))
    int32_t var_8_3 = 1
    var_8_3.b = 2
    var_8_3.b = 3
    int128_t* eax_23 = *sub_4c48a0(sub_4c4330(", ", edx_7, &var_14), &arg_c, eax_20)
    
    if (eax_23 == 0)
        eax_23 = &data_83f3d3
    
    sub_4c4620(result_3 + 8, eax_23)
    var_8_3.b = 2
    char* eax_25 = arg_c
    
    if (eax_25 != 0 && *eax_25 != 0)
        void* eax_27 = sub_4c4060(&arg_c)
        int32_t temp3_1 = *(eax_27 + 4)
        *(eax_27 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_5 = *(eax_27 + 0xc) + 0x10
            sub_4f4430(eax_27, sub_4f4380(esi_5), esi_5)
    
    var_8_3.b = 1
    char* eax_30 = var_14
    
    if (eax_30 != 0 && *eax_30 != 0)
        void* eax_32 = sub_4c4060(&var_14)
        int32_t temp4_1 = *(eax_32 + 4)
        *(eax_32 + 4) -= 1
        
        if (temp4_1 == 1)
            int32_t esi_7 = *(eax_32 + 0xc) + 0x10
            sub_4f4430(eax_32, sub_4f4380(esi_7), esi_7)
    
    int32_t var_8_4 = 0xffffffff
    char* eax_35 = var_18
    
    if (eax_35 != 0 && *eax_35 != 0)
        void* eax_37 = sub_4c4060(&var_18)
        int32_t temp5_1 = *(eax_37 + 4)
        *(eax_37 + 4) -= 1
        
        if (temp5_1 == 1)
            int32_t esi_9 = *(eax_37 + 0xc) + 0x10
            sub_4f4430(eax_37, sub_4f4380(esi_9), esi_9)
    
    int32_t eax_40 = sx.d(*(arg4 + 0xe))
    int32_t var_8_5 = 4
    sub_4c4510(sub_44c1b0(eax_40, arg4, arg5, &result_1, eax_40))
    int32_t var_8_6 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp6_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp6_1 == 1)
            int32_t esi_11 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_11), esi_11)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
