// 函数名称: sub_52e6c0
// 虚拟地址: 0x52e6c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_52e6c0()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    __chkstk(0x2834)
    void var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    int32_t edx = data_30d74ec
    int32_t eax_2 = data_30da51c
    void* const __return_addr_1 = nullptr
    int32_t arg_10 = 0
    int32_t arg_1824[0x401]
    int32_t ecx = sub_529040(eax_2, edx, &data_30d951c, edx, &arg_1824, &arg_10)
    __builtin_memset(&__return_addr, 0, 8)
    int32_t* arg_4
    int32_t arg_824[0x400]
    
    if (arg_10 s> 0)
        do
            int32_t* eax_3 = arg_4
            int32_t edx_1 = arg_1824[__return_addr_1]
            arg_824[eax_3] = edx_1
            arg_4 = eax_3 + 1
            void* eax_5
            eax_5, ecx = sub_530500(ecx, edx_1)
            int32_t i = 0
            
            if (*(eax_5 + 0x19d0) s> 0)
                void* ebx = eax_5 + 0x15d0
                
                do
                    ecx = sub_52e660(*ebx, &arg_824, &arg_4)
                    i += 1
                    ebx += 4
                while (i s< *(eax_5 + 0x19d0))
                
                __return_addr_1 = __return_addr
            
            __return_addr_1 += 1
            __return_addr = __return_addr_1
        while (__return_addr_1 s< arg_10)
    
    void* eax_6
    char edx_3
    eax_6, edx_3 = sub_52e2c0()
    int32_t* ebx_1 = data_30d74e8
    
    if (ebx_1[1] != 0x22)
        sub_4c5870("ptr->assetType == ASSET_TYPE_UI2", &data_83f3d3, "UI2.cpp", 0x256, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (*ebx_1 == 0)
        sub_520800(eax_6, edx_3, ebx_1, 0)
        
        if (*ebx_1 == 0)
            sub_509540(ebx_1)
    
    int32_t* eax_10 = arg_4
    void* eax_11 = data_315f70c
    int32_t esi_3 = *(eax_6 + 4) + 1
    __return_addr = **ebx_1
    int32_t* eax_12
    int32_t edx_4
    eax_12, edx_4 = sub_4fff30(eax_11, 0)
    sub_505150(eax_12, edx_4, __return_addr, eax_12, esi_3, eax_10)
    int32_t* eax_13 = nullptr
    
    while (true)
        int32_t* edx_5 = data_be1ed8
        
        while (true)
            if (eax_13 != 0)
                eax_13 = &eax_13[0x678]
            else
                eax_13 = edx_5
            
            void* ecx_6 = data_be1edc * 0x19e0 + edx_5
            
            if (eax_13 u>= ecx_6)
            label_52e864:
                data_30da51c = 0
                void* arg_24 = eax_6
                int128_t arg_28[0x3f]
                sub_5abfc0(&arg_28, 0, 0x3fc)
                int32_t arg_424 = 0
                int128_t arg_428[0x3f]
                void* ecx_7
                int32_t edx_6
                ecx_7, edx_6 = sub_5abfc0(&arg_428, 0, 0x3fc)
                int32_t i_3 = 0
                char var_5 = 0
                int32_t arg_18 = 0
                
                if (arg_4 s> 0)
                    int32_t ebx_4 = esi_3 * 0xc
                    int32_t arg_c = esi_3
                    int32_t arg_14 = ebx_4
                    
                    while (true)
                        int32_t edx_7 = arg_824[arg_18]
                        int32_t* eax_16 = sub_530500(ecx_7, edx_7)
                        int32_t* esi_4 = *eax_16
                        int32_t* arg_8 = eax_16
                        
                        if (esi_4[1] != 0x22)
                            sub_4c5870("ptr->assetType == ASSET_TYPE_UI2", &data_83f3d3, "UI2.cpp", 
                                0x256, "UI2DefGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        if (*esi_4 == 0)
                            sub_520800(eax_16, edx_7.b, esi_4, 0)
                            
                            if (*esi_4 == 0)
                                sub_509540(esi_4)
                        
                        int32_t* edi_3 = ***esi_4 + eax_16[1] * 0xc
                        int32_t* esi_6 = *__return_addr + ebx_4
                        int32_t i_1 = 0
                        esi_6[2] = edi_3[2]
                        
                        if (*edi_3 s> 0)
                            do
                                int32_t edx_10 = edi_3[1]
                                int32_t ecx_13 = *(edx_10 + (i_1 << 3) + 4)
                                void* edx_11 = *(edx_10 + (i_1 << 3))
                                int32_t var_18_3 = ecx_13
                                void* var_1c_3 = edx_11
                                sub_530b60(esi_6, edx_11, ecx_13, &data_8c00ec)
                                i_1 += 1
                            while (i_1 s< *edi_3)
                        
                        sub_528070(esi_6)
                        int32_t __saved_edi
                        int32_t i_2
                        void* arg_20
                        
                        if (var_5 == 0)
                            arg_20 = &(&__saved_edi)[i_3 + 0xe]
                            (&__saved_edi)[i_3 + 0xe]
                            int128_t* eax_27 = sub_52e4a0()
                            sub_52ead0(eax_27)
                            void* edx_13 = arg_20
                            *(eax_27 + 4) = arg_c
                            (&data_30d951c)[data_30da51c] = arg_c
                            data_30da51c += 1
                            i_2 = i_3
                            *edx_13 = eax_27
                            edx_6 = 1
                        else
                            int128_t* eax_24 = sub_52e580((&arg_20)[i_3])
                            sub_52ead0(eax_24)
                            i_2 = i_3
                            *(eax_24 + 4) = arg_c
                            (&data_30d951c)[data_30da51c] = arg_c
                            edx_6 = 1
                            data_30da51c += 1
                            (&arg_24)[i_2] = eax_24
                            var_5 = 0
                        int32_t esi_7 = esi_6[2]
                        (&arg_424)[i_2] -= 1
                        ecx_7 = &(&__saved_edi)[i_2 + 0x10e]
                        
                        if (esi_7 != 0)
                            i_2 += 1
                            ecx_7 = &(&__saved_edi)[i_2 + 0x10e]
                            i_3 = i_2
                            *ecx_7 = esi_7
                            var_5 = 1
                        
                        if (*ecx_7 == 0)
                            while (i_2 s> 0)
                                i_2 -= 1
                                
                                if ((&arg_424)[i_2] != 0)
                                    break
                            
                            i_3 = i_2
                        
                        arg_14 += 0xc
                        arg_c += 1
                        int32_t eax_30 = arg_18 + 1
                        arg_18 = eax_30
                        
                        if (eax_30 s>= arg_4)
                            break
                        
                        ebx_4 = arg_14
                
                void* result = sub_528c70(eax_6, edx_6, __return_addr, *(eax_6 + 4))
                
                if (result != 0)
                    *(result + 8) += arg_10
                
                sub_5a6aba(eax_1 ^ &var_8)
                return result
            
            while ((eax_13[0x677] & 0xffff0000) == 0)
                eax_13 = &eax_13[0x678]
                
                if (eax_13 u>= ecx_6)
                    goto label_52e864
            
            if (*eax_13 == ebx_1)
                void* ecx_8 = eax_13[1]
                
                if (ecx_8 s>= esi_3)
                    eax_13[1] = ecx_8 + eax_10
                    break
}
