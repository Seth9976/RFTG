// 函数名称: sub_551830
// 虚拟地址: 0x551830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_551830(int32_t arg1, int32_t arg2, int32_t* arg3, char* arg4, void* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ebb0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_4c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = arg6
    char* eax_4 = sub_550b50(edi)
    int32_t var_3c
    __builtin_memset(&var_3c, 0, 0x14)
    int32_t* eax_5
    
    if (eax_4 != 6)
        if (eax_4 != 5)
            sub_4c5870("Halt", &data_83f3d3, "TextureImport.cpp", 0x2dc, "TextureImportASTC")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        eax_5 = sub_594b80(&var_3c, edi)
    else
        eax_5 = sub_593f90(&var_3c, edi)
    
    if (eax_5.b != 0)
        int32_t eax_6 = var_3c
        
        if (eax_6 != 0)
            eax_6 = _aligned_free_base(eax_6)
        
        var_3c = 0
        int32_t var_8_1 = 0
        char* var_20
        char* eax_8 = *sub_51f490(eax_6, &var_20, arg4, &var_20)
        
        if (eax_8 == 0)
            eax_8 = &data_83f3d3
        
        char* var_50_4 = eax_8
        int32_t* var_14
        sub_4c4a50(&var_14, "%s.astc")
        var_8_1.b = 2
        char* eax_9 = var_20
        
        if (eax_9 != 0 && *eax_9 != 0)
            void* eax_11 = sub_4c4060(&var_20)
            int32_t temp0_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_2 = *(eax_11 + 0xc) + 0x10
                sub_4f4430(eax_11, sub_4f4380(esi_2), esi_2)
            
            edi = arg6
        
        int32_t var_50_6 = 0x3078700
        char* var_1c
        sub_4c4a50(&var_1c, "%s/ExternalCode/astc/astcenc.exe")
        var_8_1.b = 3
        int32_t* eax_14 = var_14
        
        if (eax_14 == 0)
            eax_14 = &data_83f3d3
        
        int32_t* var_50_7 = eax_14
        sub_5a9d3d()
        int32_t* eax_15 = var_14
        
        if (eax_15 == 0)
            eax_15 = &data_83f3d3
        
        sub_4ffc50(eax_15)
        int32_t* var_54_2 = edi
        sub_4c5680("compressing to astc: %s")
        int32_t* ecx_4 = var_14
        
        if (ecx_4 == 0)
            ecx_4 = &data_83f3d3
        
        char* const eax_16 = var_1c
        
        if (eax_16 == 0)
            eax_16 = &data_83f3d3
        
        int32_t* var_50_9 = ecx_4
        int32_t* var_54_3 = edi
        char* const var_58_3 = eax_16
        char* var_18
        sub_4c4a50(&var_18, ""%s" -c "%s" "%s" 4x4 -medium -alphablend")
        var_8_1.b = 4
        char* const eax_17 = var_18
        
        if (eax_17 == 0)
            eax_17 = &data_83f3d3
        
        sub_500590(eax_17)
        int32_t* eax_18 = var_14
        
        if (eax_18 == 0)
            eax_18 = &data_83f3d3
        
        int32_t* eax_19 = sub_5a898b(eax_18, "rb")
        
        if (eax_19 != 0)
            sub_5a9831(eax_19, nullptr, FILE_END)
            uint32_t esi_9 = sub_5a9a41(eax_19)
            sub_5a9831(eax_19, nullptr, FILE_BEGIN)
            
            if (esi_9 != 0)
                int128_t* eax_39 = sub_4cce80(esi_9)
                uint32_t eax_40 = sub_5a9cf0(eax_39, 1, esi_9, eax_19)
                sub_5a8c61(eax_19)
                int32_t* eax_41 = var_14
                
                if (eax_41 == 0)
                    eax_41 = &data_83f3d3
                
                int32_t* var_50_18 = eax_41
                sub_5a9d3d()
                
                if (eax_40 == esi_9)
                    int32_t var_34
                    arg3[1] = var_34
                    int32_t var_38
                    *arg3 = var_38
                    arg3[3] = 1
                    arg3[0xd] = 1
                    uint32_t* eax_44 = sub_4ccf00(8)
                    arg3[0xf] = eax_44
                    arg3[4] = 9
                    arg3[5] = 0x15
                    arg3[6] = 0
                    *eax_44 = esi_9
                    *(arg3[0xf] + 4) = eax_39
                    arg3[7] = *(arg5 + 8)
                    arg3[8] = *(arg5 + 0xc)
                    var_8_1.b = 3
                    sub_4c43d0(&var_18)
                    var_8_1.b = 2
                    sub_4c43d0(&var_1c)
                    int32_t var_8_4 = 0xffffffff
                    sub_4c43d0(&var_14)
                    int32_t* eax_46
                    eax_46.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_46
                
                int32_t* var_50_19 = arg6
                sub_4c5680("failed to read: %s")
                
                if (eax_39 != 0)
                    _aligned_free_base(eax_39)
            else
                sub_5a8c61(eax_19)
                int32_t* eax_36 = var_14
                
                if (eax_36 == 0)
                    eax_36 = &data_83f3d3
                
                int32_t* var_50_16 = eax_36
                sub_5a9d3d()
            
            var_8_1.b = 3
            sub_4c43d0(&var_18)
            var_8_1.b = 2
            sub_4c43d0(&var_1c)
            int32_t var_8_3 = 0xffffffff
            sub_4c43d0(&var_14)
            int32_t* eax_37
            eax_37.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_37
        
        int32_t* var_50_11 = arg6
        sub_4c5680("failed to convert to astc: %s")
        var_8_1.b = 3
        char* eax_21 = var_18
        
        if (eax_21 != 0 && *eax_21 != 0)
            void* eax_23 = sub_4c4060(&var_18)
            int32_t temp1_1 = *(eax_23 + 4)
            *(eax_23 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_4 = *(eax_23 + 0xc) + 0x10
                sub_4f4430(eax_23, sub_4f4380(esi_4), esi_4)
        
        var_8_1.b = 2
        char* eax_26 = var_1c
        
        if (eax_26 != 0 && *eax_26 != 0)
            void* eax_28 = sub_4c4060(&var_1c)
            int32_t temp2_1 = *(eax_28 + 4)
            *(eax_28 + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_6 = *(eax_28 + 0xc) + 0x10
                sub_4f4430(eax_28, sub_4f4380(esi_6), esi_6)
        
        int32_t var_8_2 = 0xffffffff
        eax_5 = var_14
        
        if (eax_5 != 0 && *eax_5 != 0)
            eax_5 = sub_4c4060(&var_14)
            int32_t temp3_1 = eax_5[1]
            eax_5[1] -= 1
            
            if (temp3_1 == 1)
                int32_t esi_8 = eax_5[3] + 0x10
                sub_4f4430(eax_5, sub_4f4380(esi_8), esi_8)
                int32_t eax_34
                eax_34.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_34
    
    eax_5.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5
}
