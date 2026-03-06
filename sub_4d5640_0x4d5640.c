// 函数名称: sub_4d5640
// 虚拟地址: 0x4d5640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4d5640(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ced8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ecx = *arg1
    
    if (ecx != 0)
        int32_t eax_3 = 0
        int32_t eax_4
        
        if (arg1[1] u<= 0)
        label_4d5688:
            eax_4 = 0
        else
            while ((*(ecx + 0x68) & 0xffff0000) == 0)
                eax_3 += 1
                ecx += 0x6c
                
                if (eax_3 u>= arg1[1])
                    goto label_4d5688
            
            eax_4 = *(ecx + 0x68)
        
        if (eax_4 != 0)
            while (true)
                int32_t edx_1 = *arg1
                int32_t eax_5 = eax_4 & 0xffff
                int32_t eax_6 = eax_5 + 1
                int32_t* ebx_3 = eax_5 * 0x6c + edx_1
                int32_t var_14_1
                
                if (eax_6 u>= arg1[1])
                label_4d5706:
                    var_14_1 = 0
                else
                    void* ecx_5 = eax_6 * 0x6c + edx_1
                    
                    while ((*(ecx_5 + 0x68) & 0xffff0000) == 0)
                        eax_6 += 1
                        ecx_5 += 0x6c
                        
                        if (eax_6 u>= arg1[1])
                            goto label_4d5706
                    
                    var_14_1 = *(ecx_5 + 0x68)
                
                int32_t* var_1c_1 = ebx_3
                int32_t var_8_1 = 0
                sub_4d5a00(&ebx_3[0xe])
                int32_t var_8_2 = 0xffffffff
                char* eax_7 = *ebx_3
                
                if (eax_7 != 0 && *eax_7 != 0)
                    if (*(eax_7 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp0_1 = *(eax_7 - 0xc)
                    *(eax_7 - 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        int32_t edi_2 = *(eax_7 - 4) + 0x10
                        
                        if (data_26a44e4 == 0)
                            sub_4f4250()
                        
                        int32_t eax_9 = 0
                        int32_t* ecx_9
                        
                        while (true)
                            if (edi_2 s<= 1 << (eax_9.b + 4))
                                ecx_9 = data_26a44e4 + eax_9 * 0x14
                                break
                            
                            eax_9 += 1
                            
                            if (eax_9 s>= 7)
                                ecx_9 = data_26a44e4 + 0x8c
                                break
                        
                        sub_4f4430(&eax_7[0xfffffff0], ecx_9, edi_2)
                
                int32_t eax_11 = arg1[3]
                arg1[3] = zx.d(ebx_3[0x1a].w)
                ebx_3[0x1a] = eax_11
                arg1[4] -= 1
                
                if (var_14_1 == 0)
                    break
                
                eax_4 = var_14_1
        
        result = *arg1
        arg1[1] = 0
        arg1[3] = 0
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(arg1, 0, 0x14)
        arg1[6] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
