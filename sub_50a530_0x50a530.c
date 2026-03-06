// 函数名称: sub_50a530
// 虚拟地址: 0x50a530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_50a530(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c731
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const eax_3 = *arg1
    int32_t* esi = data_30785d8
    
    if (eax_3 == 0)
        eax_3 = &data_83f3d3
    
    int32_t eax_4 = sub_519130(eax_3)
    int32_t ecx_1 = esi[1] & eax_4
    int32_t* esi_1 = *(*esi + (ecx_1 << 2))
    
    if (esi_1 != 0)
        char* edi_1 = *arg1
        
        while (true)
            char* eax_6 = *esi_1
            char* const ecx_2 = &data_83f3d3
            
            if (eax_6 != 0)
                ecx_2 = eax_6
            
            char* const eax_7 = &data_83f3d3
            
            if (edi_1 != 0)
                eax_7 = edi_1
            
            int32_t eax_9
            
            while (true)
                char edx_1 = *eax_7
                char temp1_1 = *ecx_2
                bool c_1 = edx_1 u< temp1_1
                
                if (edx_1 == temp1_1)
                    if (edx_1 == 0)
                        eax_9 = 0
                        break
                    
                    edx_1 = eax_7[1]
                    char temp4_1 = ecx_2[1]
                    c_1 = edx_1 u< temp4_1
                    
                    if (edx_1 == temp4_1)
                        eax_7 = &eax_7[2]
                        ecx_2 = &ecx_2[2]
                        
                        if (edx_1 != 0)
                            continue
                        
                        eax_9 = 0
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                eax_9 = sbb.d(sbb.d(eax_7, eax_7, c_1), 0xffffffff, c_2)
                break
            
            if (eax_9 == 0)
                esi_1[1] = *arg2
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_9
            
            esi_1 = esi_1[2]
            
            if (esi_1 == 0)
                break
    
    void* esi_2 = data_26a44e4
    
    if (esi_2 == 0)
        sub_4f4250()
        esi_2 = data_26a44e4
    
    int32_t edx_2 = 0
    int32_t* esi_3
    
    while (true)
        if (1 << (edx_2.b + 4) s>= 0xc)
            esi_3 = esi_2 + edx_2 * 0x14
            break
        
        edx_2 += 1
        
        if (edx_2 s>= 7)
            esi_3 = esi_2 + 0x8c
            break
    
    esi_3[3] += 1
    
    if (*esi_3 == 0)
        sub_4f4170(esi_3)
    
    int32_t* edi_2 = *esi_3
    *esi_3 = *edi_2
    int32_t* var_1c = edi_2
    int32_t* var_20 = edi_2
    int32_t var_8_1 = 0
    
    if (edi_2 != 0)
        char* eax_11 = *arg1
        *edi_2 = eax_11
        
        if (eax_11 != 0 && *eax_11 != 0)
            void* eax_13 = sub_4c4060(edi_2)
            *(eax_13 + 4) += 1
    
    if (edi_2 != 0xfffffffc)
        edi_2[1] = *arg2
    
    edi_2[2] = *(*esi + (ecx_1 << 2))
    *(*esi + (ecx_1 << 2)) = edi_2
    esi[2] += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return esi
}
