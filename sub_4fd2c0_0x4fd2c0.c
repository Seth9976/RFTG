// 函数名称: sub_4fd2c0
// 虚拟地址: 0x4fd2c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_4fd2c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690380
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* i = sub_4fcbd0(arg1)
    int32_t* i_2 = i
    int32_t* edi = nullptr
    int32_t* i_3 = i_2
    int32_t* i_1 = nullptr
    
    if (i_2[2] s> 0)
        int32_t* var_20_1 = nullptr
        
        do
            int32_t* eax_3 = i_2[1]
            char* var_14
            sub_4fd090(eax_3, &var_14, *(eax_3 + edi), &var_14, *(eax_3 + edi + 4))
            int32_t var_8_1 = 0
            int32_t eax_4 = i_2[1]
            char edx_2 = *(eax_4 + edi + 0xc)
            int32_t eax_5 = *i_2
            int32_t var_2c = *(eax_4 + edi + 8)
            char var_28_1 = edx_2
            sub_4fdb60(data_26a44ec + eax_5 * 0xc, &var_14, &var_2c)
            int32_t edx_4 = i_2[1]
            char* var_24
            int128_t* eax_8 = sub_4fd090(&var_24, edx_4, *(edi + edx_4), &var_24, nullptr)
            var_8_1.b = 1
            char* eax_9 = var_14
            char* const edx_5 = &data_83f3d3
            
            if (eax_9 != 0)
                edx_5 = eax_9
            
            char* const ecx_5 = *eax_8
            
            if (ecx_5 == 0)
                ecx_5 = &data_83f3d3
            
            if (edx_5 != ecx_5)
                if (eax_9 != 0 && *eax_9 != 0)
                    void* eax_11 = sub_4c4060(&var_14)
                    int32_t temp0_1 = *(eax_11 + 4)
                    *(eax_11 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        int32_t esi_2 = *(eax_11 + 0xc) + 0x10
                        sub_4f4430(eax_11, sub_4f4380(esi_2), esi_2)
                        i_2 = i_3
                
                char* eax_14 = *eax_8
                var_14 = eax_14
                
                if (eax_14 != 0 && *eax_14 != 0)
                    void* eax_16 = sub_4c4060(&var_14)
                    *(eax_16 + 4) += 1
            
            var_8_1.b = 0
            char* eax_17 = var_24
            
            if (eax_17 != 0 && *eax_17 != 0)
                if (*(eax_17 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp1_1 = *(eax_17 - 0xc)
                *(eax_17 - 0xc) -= 1
                
                if (temp1_1 == 1)
                    void* edi_3 = data_26a44e4
                    int32_t esi_4 = *(eax_17 - 4) + 0x10
                    
                    if (edi_3 == 0)
                        sub_4f4250()
                        edi_3 = data_26a44e4
                    
                    int32_t edx_6 = 0
                    int32_t* edi_4
                    
                    while (true)
                        if (esi_4 s<= 1 << (edx_6.b + 4))
                            edi_4 = edi_3 + edx_6 * 0x14
                            break
                        
                        edx_6 += 1
                        
                        if (edx_6 s>= 7)
                            edi_4 = edi_3 + 0x8c
                            break
                    
                    sub_4f4430(&eax_17[0xfffffff0], edi_4, esi_4)
                    i_2 = i_3
            
            sub_4fdb60(data_26a44ec + *i_2 * 0xc, &var_14, &var_2c)
            int32_t var_8_2 = 0xffffffff
            char* eax_22 = var_14
            
            if (eax_22 != 0 && *eax_22 != 0)
                if (*(eax_22 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp2_1 = *(eax_22 - 0xc)
                *(eax_22 - 0xc) -= 1
                
                if (temp2_1 == 1)
                    void* edx_8 = data_26a44e4
                    int32_t esi_6 = *(eax_22 - 4) + 0x10
                    
                    if (edx_8 == 0)
                        sub_4f4250()
                        edx_8 = data_26a44e4
                    
                    int32_t eax_23 = 0
                    int32_t* edi_6
                    
                    while (true)
                        if (esi_6 s<= 1 << (eax_23.b + 4))
                            edi_6 = edx_8 + eax_23 * 0x14
                            break
                        
                        eax_23 += 1
                        
                        if (eax_23 s>= 7)
                            edi_6 = edx_8 + 0x8c
                            break
                    
                    sub_4f4430(&eax_22[0xfffffff0], edi_6, esi_6)
                    i_2 = i_3
            
            i = i_1 + 1
            edi = &var_20_1[4]
            i_1 = i
            var_20_1 = edi
        while (i s< i_2[2])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return i
}
