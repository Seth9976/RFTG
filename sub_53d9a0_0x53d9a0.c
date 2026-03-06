// 函数名称: sub_53d9a0
// 虚拟地址: 0x53d9a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_53d9a0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6931a0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    LRESULT result = data_3079208
    
    if (result != 0 && *(result + 4) == 0x19)
        result = sub_466320(result)
        int32_t* result_1 = result
        
        if (result != 0)
            result = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
            
            if (result != 0xffffffff)
                int32_t ecx_1 = sub_537960(result)
                int32_t var_3c_1 = 0
                
                if (ecx_1 + 1 s> 0)
                    int32_t eax_7 = ecx_1 + result
                    void* ebx_1 = (eax_7 << 3) + &data_307887c
                    int32_t var_14_1 = eax_7 + 1
                    int32_t* esi_2 = result * 0x134
                    void* eax_9 = 0xfe - ecx_1 - result
                    void* var_1c_1 = eax_9
                    void* var_24_1 = (eax_7 + 1) * 0x134
                    int32_t* var_18_1 = esi_2
                    void* var_40_1 = ebx_1
                    void* var_20_1 = eax_9 * 8
                    
                    while (true)
                        int32_t var_6c_2 = var_14_1
                        int32_t* eax_14
                        int32_t edx_4
                        eax_14, edx_4 = sub_4fff30(data_30d7434, 0)
                        sub_505030(eax_14, edx_4, result_1, eax_14, var_14_1)
                        
                        if (var_14_1 s< 0 || var_14_1 s>= 0x100)
                            sub_4c5870("emitterIndex >= 0 && emitterIndex < MAX_EMITTERS", 
                                &data_83f3d3, "Windows\EditorWindow.cpp", 0x941, "ToolDataAddItem")
                            
                            if (IsDebuggerPresent() != 1)
                                sub_4c5a30()
                                noreturn
                            
                            breakpoint
                        
                        if (var_1c_1 s> 0)
                            sub_5a6c10(ebx_1 + 8, ebx_1, var_20_1, eax_2)
                        
                        *ebx_1 = var_14_1 + 0x64
                        *(ebx_1 + 4) = 0
                        int32_t edi_4 = *result_1
                        int32_t* edx_7 = var_24_1 + edi_4
                        edx_7[2] = *(esi_2 + edi_4 + 8)
                        int32_t eax_17 = 0
                        int32_t var_34_1 = edi_4
                        int32_t* var_2c_1 = edx_7
                        int32_t var_38_1 = 0
                        
                        if (*(esi_2 + edi_4) s> 0)
                            void* ecx_5 = esi_2 + edi_4 + 4
                            
                            while (true)
                                int32_t* eax_18 = *ecx_5 + (eax_17 << 3)
                                int32_t ecx_8 = *eax_18
                                
                                if (ecx_8 != 1)
                                    int32_t var_68_9 = eax_18[1]
                                    int32_t var_6c_8 = ecx_8
                                    sub_530b60(edx_7, edx_7, ecx_8, &data_8c35ec)
                                else
                                    char* var_4c
                                    sub_53d010(&var_4c, eax_18[1])
                                    int32_t var_8_1 = 0
                                    char* ebx_2 = var_4c
                                    char* const eax_20 = &data_83f3d3
                                    
                                    if (ebx_2 != 0)
                                        eax_20 = ebx_2
                                    
                                    char* var_30
                                    int32_t ecx_9
                                    void* edx_8
                                    ecx_9, edx_8 = sub_53d0a0(&var_30, eax_20)
                                    var_8_1.b = 1
                                    char* eax_21 = var_30
                                    
                                    if (eax_21 == 0)
                                        eax_21 = &data_83f3d3
                                    
                                    char* var_68_5 = eax_21
                                    int32_t var_6c_6 = 1
                                    sub_530b60(var_2c_1, edx_8, ecx_9, &data_8c35ec)
                                    var_8_1.b = 0
                                    char* eax_23 = var_30
                                    
                                    if (eax_23 != 0 && *eax_23 != 0)
                                        if (*(eax_23 - 0x10) != 0xfafafafa)
                                            sub_4c5870(
                                                "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                                &data_83f3d3, "xString.cpp", 0x20, 
                                                "XStringMagicDataStructFromCharPtr")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t temp0_1 = *(eax_23 - 0xc)
                                        *(eax_23 - 0xc) -= 1
                                        
                                        if (temp0_1 == 1)
                                            int32_t esi_4 = *(eax_23 - 4) + 0x10
                                            sub_4f4430(&eax_23[0xfffffff0], sub_4f4380(esi_4), esi_4)
                                            esi_2 = var_18_1
                                    
                                    int32_t var_8_2 = 0xffffffff
                                    
                                    if (ebx_2 != 0 && *ebx_2 != 0)
                                        if (*(ebx_2 - 0x10) != 0xfafafafa)
                                            sub_4c5870(
                                                "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                                &data_83f3d3, "xString.cpp", 0x20, 
                                                "XStringMagicDataStructFromCharPtr")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t temp1_1 = *(ebx_2 - 0xc)
                                        *(ebx_2 - 0xc) -= 1
                                        
                                        if (temp1_1 == 1)
                                            int32_t esi_6 = *(ebx_2 - 4) + 0x10
                                            sub_4f4430(&ebx_2[0xfffffff0], sub_4f4380(esi_6), esi_6)
                                            esi_2 = var_18_1
                                    
                                    edi_4 = var_34_1
                                
                                eax_17 = var_38_1 + 1
                                var_38_1 = eax_17
                                
                                if (eax_17 s>= *(esi_2 + edi_4))
                                    break
                                
                                edx_7 = var_2c_1
                            
                            ebx_1 = var_40_1
                        
                        var_20_1 -= 8
                        var_24_1 += 0x134
                        var_14_1 += 1
                        var_1c_1 -= 1
                        int32_t ecx_12 = var_3c_1 + 1
                        esi_2 = &esi_2[0x4d]
                        ebx_1 += 8
                        var_3c_1 = ecx_12
                        var_18_1 = esi_2
                        var_40_1 = ebx_1
                        
                        if (ecx_12 s>= ecx_1 + 1)
                            break
                        
                        continue
                
                char* ecx_13 = data_3079208
                
                if (ecx_13 != 0)
                    ecx_13 = *(ecx_13 + 4)
                    
                    if (ecx_13 == 0x19)
                        int32_t var_68_8 = 0xffffffff
                        ecx_13 = sub_538a80(ecx_1 + result + 1)
                    else if (ecx_13 == 0x1b)
                        ecx_13 = sub_539d30(ecx_1 + result + 1)
                
                sub_536c00(ecx_13)
                sub_56e600()
                result = sub_56e480()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
