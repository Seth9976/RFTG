// 函数名称: sub_520070
// 虚拟地址: 0x520070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_520070(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d083
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_178 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx = 0
    int32_t var_8_1 = 0
    char const* const var_164 = ".hlslinc"
    char* result
    
    while (true)
        char* const var_160 = &data_83f3d3
        var_8_1.b = 1
        char* result_1
        char* const result_2 = result_1
        
        if (result_2 == 0)
            result_2 = &data_83f3d3
        
        int32_t var_17c_1 = (&var_164)[ebx]
        char* const result_3 = result_2
        char const* const var_184_1 = "%s*%s"
        char* edx
        char* edx_1 = sub_4c49b0(&var_160, edx)
        char* const esi_1 = var_160
        char* const eax_4 = &data_83f3d3
        
        if (esi_1 != 0)
            eax_4 = esi_1
        
        WIN32_FIND_DATAA findFileData
        char eax_5
        eax_5, edx = sub_4c5b00(eax_4, edx_1, &findFileData, eax_4)
        
        if (eax_5 != 0)
            while (true)
                if (((findFileData.dwFileAttributes u>> 4).b & 1) == 0)
                    uint32_t dwHighDateTime = findFileData.ftLastWriteTime.dwHighDateTime
                    
                    if (dwHighDateTime u> arg2)
                    label_5201fa:
                        var_8_1.b = 0
                        
                        if (esi_1 != 0 && *esi_1 != 0)
                            void* eax_12 = sub_4c4060(&var_160)
                            int32_t temp3_1 = *(eax_12 + 4)
                            *(eax_12 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                int32_t esi_5 = *(eax_12 + 0xc) + 0x10
                                sub_4f4430(eax_12, sub_4f4380(esi_5), esi_5)
                        
                        int32_t var_8_3 = 0xffffffff
                        result = result_1
                        
                        if (result != 0 && *result != 0)
                            result = sub_4c4060(&result_1)
                            int32_t temp4_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp4_1 == 1)
                                int32_t esi_7 = *(result + 0xc) + 0x10
                                sub_4f4430(result, sub_4f4380(esi_7), esi_7)
                        
                        result.b = 1
                        break
                    
                    if (dwHighDateTime u>= arg2 && findFileData.ftLastWriteTime.dwLowDateTime u> arg1)
                        goto label_5201fa
                
                HANDLE hFindFile
                
                if (FindNextFileA(hFindFile, &findFileData) != 1)
                    edx = FindClose(hFindFile)
                    goto label_52015e
            
            break
        
    label_52015e:
        var_8_1.b = 0
        
        if (esi_1 != 0 && *esi_1 != 0)
            if (*(esi_1 - 0x10) != 0xfafafafa)
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp1_1 = *(esi_1 - 0xc)
            *(esi_1 - 0xc) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_3 = *(esi_1 - 4) + 0x10
                edx = sub_4f4430(&esi_1[0xfffffff0], sub_4f4380(esi_3), esi_3)
        
        ebx += 1
        
        if (ebx u>= 1)
            int32_t var_8_2 = 0xffffffff
            result = result_1
            
            if (result != 0 && *result != 0)
                if (*(result - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp2_1 = *(result - 0xc)
                *(result - 0xc) -= 1
                
                if (temp2_1 == 1)
                    void* edx_4 = data_26a44e4
                    int32_t esi_9 = *(result - 4) + 0x10
                    
                    if (edx_4 == 0)
                        sub_4f4250()
                        edx_4 = data_26a44e4
                    
                    int32_t eax_19 = 0
                    int32_t* edi_8
                    
                    while (true)
                        if (esi_9 s<= 1 << (eax_19.b + 4))
                            edi_8 = edx_4 + eax_19 * 0x14
                            break
                        
                        eax_19 += 1
                        
                        if (eax_19 s>= 7)
                            edi_8 = edx_4 + 0x8c
                            break
                    
                    sub_4f4430(&result[0xfffffff0], edi_8, esi_9)
            
            result.b = 0
            break
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
