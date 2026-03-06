// 函数名称: sub_4ffc50
// 虚拟地址: 0x4ffc50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4ffc50(char* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68ce78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_34 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* esi = arg1
    char eax_3 = *esi
    char* edi = esi
    
    if (eax_3 == 0x2f || eax_3 == 0x5c)
        edi = &esi[1]
    
    void* eax_5 = _strcspn(edi, "/\")
    void* edi_1 = edi + eax_5
    
    if (*edi_1 != 0)
        while (true)
            if (edi_1 - esi s<= 0)
                sub_4c5870("len > 0", &data_83f3d3, "Definition.cpp", 0x449, 
                    "MakeDirectoriesInFullPath")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c57f0("Exit via XNoReturn()")
                _exit(0)
                noreturn
            
            char* const lpFileName_2 = &data_83f3d3
            int32_t var_c_1 = 0
            sub_4c4690(&lpFileName_2, esi)
            char* const lpFileName_1 = lpFileName_2
            void* edi_2 = edi_1 + 1
            char* const lpFileName = &data_83f3d3
            
            if (lpFileName_1 != 0)
                lpFileName = lpFileName_1
            
            void* edx_1
            void* ebx_3
            int32_t i
            
            if (GetFileAttributesA(lpFileName) == 0xffffffff)
                char* const lpFileName_3 = &data_83f3d3
                
                if (lpFileName_1 != 0)
                    lpFileName_3 = lpFileName_1
                
                if (sub_5aa0e6(lpFileName_3) == 0xffffffff)
                    char* const lpFileName_4 = &data_83f3d3
                    
                    if (lpFileName_1 != 0)
                        lpFileName_4 = lpFileName_1
                    
                    char* const lpFileName_5 = lpFileName_4
                    eax_5 = sub_4c5680("Failed to create directory '%s'")
                    int32_t var_c_4 = 0xffffffff
                    
                    if (lpFileName_1 != 0 && *lpFileName_1 != 0)
                        eax_5 = sub_4c4060(&lpFileName_2)
                        int32_t temp1_1 = *(eax_5 + 4)
                        *(eax_5 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            int32_t esi_5 = *(eax_5 + 0xc) + 0x10
                            int32_t eax_18 = sub_4f4430(eax_5, sub_4f4380(esi_5), esi_5)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_18
                    
                    break
                
                int32_t var_c_3 = 0xffffffff
                
                if (lpFileName_1 != 0 && *lpFileName_1 != 0)
                    ebx_3 = &lpFileName_1[0xfffffff0]
                    
                    if (*(lpFileName_1 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp2_1 = *(ebx_3 + 4)
                    *(ebx_3 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        edx_1 = data_26a44e4
                        i = *(ebx_3 + 0xc) + 0x10
                        
                        if (edx_1 == 0)
                            sub_4f4250()
                            edx_1 = data_26a44e4
                        
                        int32_t eax_11 = 0
                        
                        while (i s> 1 << (eax_11.b + 4))
                            eax_11 += 1
                            
                            if (eax_11 s>= 7)
                                goto label_4ffd5a
                        
                        sub_4f4430(ebx_3, edx_1 + eax_11 * 0x14, i)
            else
                int32_t var_c_2 = 0xffffffff
                
                if (lpFileName_1 != 0 && *lpFileName_1 != 0)
                    ebx_3 = &lpFileName_1[0xfffffff0]
                    
                    if (*(lpFileName_1 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp0_1 = *(ebx_3 + 4)
                    *(ebx_3 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        edx_1 = data_26a44e4
                        i = *(ebx_3 + 0xc) + 0x10
                        
                        if (edx_1 == 0)
                            sub_4f4250()
                            edx_1 = data_26a44e4
                        
                        int32_t eax_7 = 0
                        int32_t* edi_4
                        
                        while (true)
                            if (i s<= 1 << (eax_7.b + 4))
                                edi_4 = edx_1 + eax_7 * 0x14
                                break
                            
                            eax_7 += 1
                            
                            if (eax_7 s>= 7)
                            label_4ffd5a:
                                edi_4 = edx_1 + 0x8c
                                break
                        
                        sub_4f4430(ebx_3, edi_4, i)
            int32_t eax_9 = _strcspn(edi_2, "/\")
            edi_1 = edi_2 + eax_9
            
            if (*edi_1 == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_9
            
            esi = arg1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5
}
