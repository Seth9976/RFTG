// 函数名称: sub_550750
// 虚拟地址: 0x550750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_550750(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693ef0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t edi
    int32_t var_2c = edi
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char const* const var_34 = 0x10
    int32_t var_8_1 = 0
    int32_t* eax_3 = __execvp(0x30, var_34)
    
    if (eax_3 == 0)
        var_34 = "XMalloc"
        sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, var_34)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    var_34 = data_315f7d0
    *arg2 = eax_3
    sub_4fe7d0(eax_3, var_34)
    char* eax_5 = arg1
    char i
    
    do
        i = *eax_5
        eax_5 = &eax_5[1]
    while (i != 0)
    
    if (arg1 == 0)
        var_34 = "XString::XString"
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x95, var_34)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    var_34 = arg1
    char* const var_18 = &data_83f3d3
    sub_4c4690(&var_18, var_34)
    var_8_1.b = 1
    char const* const* var_1c
    sub_4c42b0(&var_1c, ".texture")
    var_34 = &var_1c
    var_8_1.b = 2
    char* var_14
    sub_4c48a0(&var_18, &var_14, var_34)
    var_8_1.b = 4
    char* eax_8 = var_1c
    
    if (eax_8 != 0 && *eax_8 != 0)
        void* eax_10 = sub_4c4060(&var_1c)
        int32_t temp0_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp0_1 == 1)
            char* esi_4 = *(eax_10 + 0xc) + 0x10
            int32_t* eax_11 = sub_4f4380(esi_4)
            var_34 = esi_4
            sub_4f4430(eax_10, eax_11, var_34)
    
    int32_t* eax_13
    char* ecx_3
    eax_13, ecx_3 = sub_4e62c0(3)
    var_34 = ecx_3
    char* arg_c
    var_34 = arg_c
    char* ecx_5 = arg_c
    var_1c = &var_34
    
    if (ecx_5 != 0 && *ecx_5 != 0)
        void* eax_15 = sub_4c4060(&var_34)
        *(eax_15 + 4) += 1
    
    char* const ebx_1 = var_18
    char* const eax_16 = &data_83f3d3
    
    if (ebx_1 != 0)
        eax_16 = ebx_1
    
    if (sub_5533b0(eax_16, eax_13) == 0)
        var_8_1.b = 1
        char* eax_18 = var_14
        
        if (eax_18 != 0 && *eax_18 != 0)
            void* eax_20 = sub_4c4060(&var_14)
            int32_t temp1_1 = *(eax_20 + 4)
            *(eax_20 + 4) -= 1
            
            if (temp1_1 == 1)
                char* esi_7 = *(eax_20 + 0xc) + 0x10
                int32_t* eax_21 = sub_4f4380(esi_7)
                var_34 = esi_7
                sub_4f4430(eax_20, eax_21, var_34)
        
        var_8_1.b = 0
        
        if (ebx_1 != 0 && *ebx_1 != 0)
            void* eax_24 = sub_4c4060(&var_18)
            int32_t temp2_1 = *(eax_24 + 4)
            *(eax_24 + 4) -= 1
            
            if (temp2_1 == 1)
                char* esi_9 = *(eax_24 + 0xc) + 0x10
                int32_t* eax_25 = sub_4f4380(esi_9)
                var_34 = esi_9
                sub_4f4430(eax_24, eax_25, var_34)
        
        int32_t var_8_2 = 0xffffffff
        char* eax_27 = arg_c
        
        if (eax_27 != 0 && *eax_27 != 0)
            eax_27 = sub_4c4060(&arg_c)
            int32_t temp3_1 = *(eax_27 + 4)
            *(eax_27 + 4) -= 1
            
            if (temp3_1 == 1)
                char* esi_11 = *(eax_27 + 0xc) + 0x10
                int32_t* eax_29 = sub_4f4380(esi_11)
                var_34 = esi_11
                sub_4f4430(eax_27, eax_29, var_34)
        
        eax_27.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_27
    
    var_34 = eax_13
    char** eax_31 = sub_5098c0(var_34)
    char** edi_11 = eax_31
    char** esi_12
    
    if (edi_11 != 0)
        if (edi_11[1] != 3)
            var_34 = "DefAutoLock::DefAutoLock"
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, var_34)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        esi_12 = edi_11
    else
        esi_12 = sub_50a390(eax_31 + 3)
    
    if (*esi_12 == 0)
        var_34 = 1
        sub_5094d0(esi_12, 0, var_34.b)
    
    char* ecx_13 = *esi_12
    esi_12[7] = &esi_12[7][1]
    int32_t ecx_15
    ecx_15.b = *(**ecx_13 + 0x18) == 1
    int32_t eax_34 = esi_12[7] - 1
    esi_12[7] = eax_34
    int32_t* esi_13
    
    if (ecx_15.b == 0)
        char* ecx_16 = &data_83f3d3
        
        if (ebx_1 != 0)
            ecx_16 = ebx_1
        
        esi_13 = eax_3
        var_34 = edi_11
        edi_11 = sub_54e480(eax_34, 1, ecx_16, esi_13)
    else
        esi_13 = eax_3
    
    var_34 = edi_11
    char* eax_36 = sub_50ba10(var_34)
    void* edx_3 = *data_3078804
    var_34 = eax_36
    (*(edx_3 + 0x20))(var_34)
    esi_13[9] = 0
    char* const eax_38 = &data_83f3d3
    
    if (ebx_1 != 0)
        eax_38 = ebx_1
    
    var_34 = edi_11
    char** eax_39
    int32_t edx_4
    eax_39, edx_4 = sub_54e610(esi_13, eax_38, var_34)
    esi_13[0xa] = eax_39
    char* const eax_40 = &data_83f3d3
    
    if (ebx_1 != 0)
        eax_40 = ebx_1
    
    var_34 = edi_11
    esi_13[0xb] = sub_54f9d0(eax_40, edx_4, esi_13, eax_40, var_34)
    var_8_1.b = 1
    char* eax_42 = var_14
    
    if (eax_42 != 0 && *eax_42 != 0)
        void* eax_44 = sub_4c4060(&var_14)
        int32_t temp4_1 = *(eax_44 + 4)
        *(eax_44 + 4) -= 1
        
        if (temp4_1 == 1)
            char* esi_15 = *(eax_44 + 0xc) + 0x10
            int32_t* eax_45 = sub_4f4380(esi_15)
            var_34 = esi_15
            sub_4f4430(eax_44, eax_45, var_34)
    
    var_8_1.b = 0
    
    if (ebx_1 != 0 && *ebx_1 != 0)
        void* eax_48 = sub_4c4060(&var_18)
        int32_t temp5_1 = *(eax_48 + 4)
        *(eax_48 + 4) -= 1
        
        if (temp5_1 == 1)
            char* esi_17 = *(eax_48 + 0xc) + 0x10
            int32_t* eax_49 = sub_4f4380(esi_17)
            var_34 = esi_17
            sub_4f4430(eax_48, eax_49, var_34)
    
    int32_t var_8_3 = 0xffffffff
    void* eax_51 = arg_c
    
    if (eax_51 != 0 && *eax_51 != 0)
        eax_51 = sub_4c4060(&arg_c)
        int32_t temp6_1 = *(eax_51 + 4)
        *(eax_51 + 4) -= 1
        
        if (temp6_1 == 1)
            char* esi_19 = *(eax_51 + 0xc) + 0x10
            int32_t* eax_53 = sub_4f4380(esi_19)
            var_34 = esi_19
            sub_4f4430(eax_51, eax_53, var_34)
    
    eax_51.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_51
}
