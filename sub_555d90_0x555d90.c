// 函数名称: sub_555d90
// 虚拟地址: 0x555d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_555d90(char* arg1, void** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f888
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* arg_c
    char* const eax_3 = arg_c
    
    if (eax_3 == 0)
        eax_3 = &data_83f3d3
    
    char* eax_4
    int32_t edx
    eax_4, edx = sub_555d40(eax_3)
    void* eax_13
    char const* const var_2c
    int32_t* var_28
    char* eax_8
    int32_t* esi_4
    int32_t* edi_2
    
    if (eax_4 != 4)
        var_28 = 0x10
        var_2c = 0x1c
        int32_t* eax_17 = __execvp(var_2c, var_28)
        
        if (eax_17 == 0)
            var_28 = "XMalloc"
            var_2c = 0x4f
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", var_2c, var_28)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_28 = data_30d738c
        var_2c = eax_17
        sub_4fe7d0(var_2c, var_28)
        int32_t* eax_20
        int32_t* ecx_7
        int32_t edx_4
        eax_20, ecx_7, edx_4 = sub_501ff0(data_30d7394, arg2[1])
        char* ebx
        
        if (data_30785f3 != 0)
            var_28 = ecx_7
            var_28 = arg_c
            char* ecx_9 = arg_c
            int32_t** var_14_1 = &var_28
            
            if (ecx_9 != 0 && *ecx_9 != 0)
                void* eax_22 = sub_4c4060(&var_28)
                *(eax_22 + 4) += 1
            
            ebx.b = sub_555640(arg1, eax_17)
        else if (eax_4 == 3)
            char* edx_6 = arg_c
            var_28 = eax_20
            var_2c = ecx_7
            char const* const* eax_24 = &var_2c
            var_2c = edx_6
            char* ecx_11 = arg_c
            char const* const* var_14_2 = &var_2c
            
            if (ecx_11 != 0 && *ecx_11 != 0)
                eax_24 = sub_4c4060(eax_24)
                eax_24[1] = &eax_24[1][1]
            
            ebx.b = sub_555a00(eax_24, edx_6, eax_17, var_2c)
        else if (eax_4 != 2)
            char* eax_28 = arg_c
            
            if (eax_28 == 0)
                eax_28 = &data_83f3d3
            
            var_28 = eax_28
            var_2c = "unknown sound file type %s"
            sub_4c5680(var_2c)
            ebx.b = 0
        else
            var_28 = eax_20
            var_2c = ecx_7
            char const* const* eax_26 = &var_2c
            var_2c = arg_c
            char* ecx_14 = arg_c
            char const* const* var_14_3 = &var_2c
            
            if (ecx_14 != 0 && *ecx_14 != 0)
                eax_26 = sub_4c4060(eax_26)
                eax_26[1] = &eax_26[1][1]
            
            ebx.b = sub_5554d0(eax_26, edx_4, eax_17, var_2c)
        
        var_28 = data_30d7394
        var_2c = eax_20
        sub_4fed40(var_2c, var_28)
        
        if (ebx.b == 0)
            var_28 = eax_17
            _aligned_free_base(var_28)
            int32_t var_8_4 = 0xffffffff
            eax_8 = arg_c
            
            if (eax_8 != 0 && *eax_8 != ebx.b)
                eax_8 = sub_4c4060(&arg_c)
                int32_t temp3_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp3_1 == 1)
                    int32_t* esi_7 = *(eax_8 + 0xc) + 0x10
                    int32_t* eax_30 = sub_4f4380(esi_7)
                    var_28 = esi_7
                    sub_4f4430(eax_8, eax_30, var_28)
                    int32_t eax_32
                    eax_32.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_32
            
        label_555e4a:
            eax_8.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_8
        
        *(*arg2 + 0x1c) = eax_17
        int32_t var_8_5 = 0xffffffff
        eax_13 = arg_c
        
        if (eax_13 != 0 && *eax_13 != 0)
            eax_13 = sub_4c4060(&arg_c)
            int32_t temp2_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp2_1 == 1)
                esi_4 = *(eax_13 + 0xc) + 0x10
                edi_2 = sub_4f4380(esi_4)
                var_28 = esi_4
                sub_4f4430(eax_13, edi_2, var_28)
    else
        char* const ecx_1 = arg_c
        
        if (ecx_1 == 0)
            ecx_1 = &data_83f3d3
        
        int32_t* esi = arg2
        int32_t* eax_5 = esi[3]
        var_28 = eax_5
        int32_t* eax_6 = sub_504e50(eax_5, edx, ecx_1, var_28)
        
        if (eax_6 == 0)
            char* const eax_7 = arg_c
            
            if (eax_7 == 0)
                eax_7 = &data_83f3d3
            
            var_28 = eax_7
            var_2c = "failed to read xmlsound %s"
            sub_4c5680(var_2c)
            int32_t var_8_2 = 0xffffffff
            eax_8 = arg_c
            
            if (eax_8 != 0 && *eax_8 != 0)
                eax_8 = sub_4c4060(&arg_c)
                int32_t temp1_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t* esi_2 = *(eax_8 + 0xc) + 0x10
                    int32_t* eax_10 = sub_4f4380(esi_2)
                    var_28 = esi_2
                    sub_4f4430(eax_8, eax_10, var_28)
            
            goto label_555e4a
        
        char* edx_1 = *esi
        var_28 = esi[3]
        var_2c = edx_1
        sub_4fed40(var_2c, var_28)
        sub_500770(esi[1])
        esi[1] = eax_6[1]
        *esi = *eax_6
        _aligned_free_base(eax_6)
        int32_t var_8_3 = 0xffffffff
        eax_13 = arg_c
        
        if (eax_13 != 0 && *eax_13 != 0)
            eax_13 = sub_4c4060(&arg_c)
            int32_t temp0_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp0_1 == 1)
                esi_4 = *(eax_13 + 0xc) + 0x10
                edi_2 = sub_4f4380(esi_4)
                var_28 = esi_4
                sub_4f4430(eax_13, edi_2, var_28)
    eax_13.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_13
}
