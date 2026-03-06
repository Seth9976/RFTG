// 函数名称: sub_5237b0
// 虚拟地址: 0x5237b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5237b0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_FullAliasWait@_TaskCollection@details@Concurrency@@AAEXPAV123@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = 0
    int32_t var_14 = 0
    int32_t var_14_1 = 0
    
    if (arg4 s> 0)
        while (true)
            void var_2c
            int32_t* eax_4 = (*(arg3 + (eax_3 << 2)))(&var_2c, arg2, eax_2)
            int32_t var_8_1 = 0
            char* esi_1 = eax_4[2]
            int32_t ecx_3 = *eax_4
            int32_t edx_2 = eax_4[1]
            char* var_18 = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                if (*(esi_1 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                *(esi_1 - 0xc) += 1
            
            var_8_1.b = 2
            char* var_24
            
            if (var_24 != 0 && *var_24 != 0)
                if (*(var_24 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp0_1 = *(var_24 - 0xc)
                *(var_24 - 0xc) -= 1
                
                if (temp0_1 == 1)
                    int32_t edi_2 = *(var_24 - 4) + 0x10
                    
                    if (data_26a44e4 == 0)
                        sub_4f4250()
                    
                    int32_t edx_3 = 0
                    int32_t* ecx_6
                    
                    while (true)
                        if (edi_2 s<= 1 << (edx_3.b + 4))
                            ecx_6 = data_26a44e4 + edx_3 * 0x14
                            break
                        
                        edx_3 += 1
                        
                        if (edx_3 s>= 7)
                            ecx_6 = data_26a44e4 + 0x8c
                            break
                    
                    sub_4f4430(&var_24[0xfffffff0], ecx_6, edi_2)
            
            int32_t* ebx_2
            
            if (ecx_3 == 1)
                ebx_2 = arg1
                *ebx_2 = 1
                ebx_2[1] = edx_2
            else
                if (ecx_3 != 2 && ecx_3 != 3 && ecx_3 != 4)
                    int32_t var_8_2 = 0xffffffff
                    
                    if (esi_1 != 0 && *esi_1 != 0)
                        void* eax_9 = sub_4c4060(&var_18)
                        int32_t temp2_1 = *(eax_9 + 4)
                        *(eax_9 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            int32_t esi_3 = *(eax_9 + 0xc) + 0x10
                            sub_4f4430(eax_9, sub_4f4380(esi_3), esi_3)
                    
                    eax_3 = var_14_1 + 1
                    var_14_1 = eax_3
                    
                    if (eax_3 s>= arg4)
                        break
                    
                    continue
                
                ebx_2 = arg1
                *ebx_2 = ecx_3
                ebx_2[1] = edx_2
            
            ebx_2[2] = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                void* eax_19 = sub_4c4060(&ebx_2[2])
                *(eax_19 + 4) += 1
            
            int32_t var_8_3 = 0xffffffff
            
            if (esi_1 != 0 && *esi_1 != 0)
                void* eax_21 = sub_4c4060(&var_18)
                int32_t temp1_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_5 = *(eax_21 + 0xc) + 0x10
                    sub_4f4430(eax_21, sub_4f4380(esi_5), esi_5)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return ebx_2
    
    *arg1 = data_be1ecc
    arg1[1] = data_be1ed0
    arg1[2] = data_be1ed4
    void* ecx_10 = data_be1ed4
    
    if (ecx_10 != 0 && *ecx_10 != 0)
        if (*(ecx_10 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *(ecx_10 - 0xc) += 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
