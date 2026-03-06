// 函数名称: sub_44f500
// 虚拟地址: 0x44f500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_44f500(int32_t arg1, int32_t arg2, char* arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e6a0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* arg_4
    char* eax_3 = arg_4
    int32_t edx = *(eax_3 + 0x60)
    void* esi_2 = &eax_3[edx << 4]
    *(eax_3 + 0x60) = edx + 1
    char* result_1
    int32_t edx_1
    edx_1.b = *result_1
    void* var_14_1 = esi_2
    
    if (edx_1.b != *arg3)
        sub_4c5870("p1.phase == p0.phase", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5817, 
            "AddPowerDescTwoPower")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg5 == 0)
        switch (arg2)
            case 0
                *esi_2 = 2
            case 2
                *esi_2 = 3
            case 3
                *esi_2 = 4
            case 4
                *esi_2 = 5
            case 5
                *esi_2 = 6
            default
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x582d, 
                    "AddPowerDescTwoPower")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
    else if (arg5 == 1)
        if (arg2 != 0)
            sub_4c5870("line == SINGLE_LINE", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5831, 
                "AddPowerDescTwoPower")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_2 = 8
    else
        if (arg5 != 2)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5839, "AddPowerDescTwoPower")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (arg2 != 0)
            sub_4c5870("line == SINGLE_LINE", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5835, 
                "AddPowerDescTwoPower")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_2 = 7
    
    int32_t ebx
    ebx.b = *arg3
    int32_t eax_15
    
    if (ebx.b == 4)
        eax_15 = 7
    
    if (ebx.b != 4 || zx.d(arg3[8]) == 0)
        eax_15 = sx.d(ebx.b)
    
    *(esi_2 + 4) = eax_15
    int32_t edx_2 = sx.d(*(arg4 + 0xe))
    int32_t var_8_1 = 0
    sub_4c4510(sub_44c1b0(&arg_4, edx_2, arg3, &arg_4, edx_2))
    int32_t var_8_2 = 0xffffffff
    char* eax_19 = arg_4
    
    if (eax_19 != 0 && *eax_19 != 0)
        void* eax_21 = sub_4c4060(&arg_4)
        int32_t temp3_1 = *(eax_21 + 4)
        *(eax_21 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_4 = *(eax_21 + 0xc) + 0x10
            sub_4f4430(eax_21, sub_4f4380(esi_4), esi_4)
    
    int32_t edx_3 = sx.d(*(arg4 + 0xe))
    int32_t var_8_3 = 1
    sub_4c4510(sub_44c1b0(&result_1, edx_3, result_1, &result_1, edx_3))
    int32_t var_8_4 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp4_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp4_1 == 1)
            int32_t esi_6 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_6), esi_6)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
