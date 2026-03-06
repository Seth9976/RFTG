// 函数名称: sub_448660
// 虚拟地址: 0x448660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_448660(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: void var_5c
    void var_5c
    int32_t eax_1 = __security_cookie ^ &var_5c
    void* eax_14
    
    while (true)
        void* esi_2 = data_27e7a40
        void* eax_2 = *(esi_2 + 0x548)
        
        if (*(eax_2 + 0x2c0b0) != 0)
            int32_t eax_5
            int32_t edx_1
            edx_1:eax_5 = sx.q(*(eax_2 + 0x4388c) - *(eax_2 + 0x184))
            
            if ((eax_5 ^ edx_1) - edx_1 s> 0xa)
                *(eax_2 + 0x2c0b0) = 0
                void* eax_8 = *(esi_2 + 0x548)
                *(eax_8 + 0x4388c) = *(eax_8 + 0x184)
        
        int32_t* var_4c
        char eax_9
        int32_t edx_3
        eax_9, edx_3 = sub_419400(&var_4c)
        
        if (eax_9 == 0 || *var_4c != 2)
            void* eax_10 = *(esi_2 + 0x548)
            
            if (*(eax_10 + 0xbfb0) == 0xffffffff || *(eax_10 + 0xbfac) != 0)
                goto label_448742
            
            int32_t var_58
            
            if (*arg1 == 0xe)
                int32_t* eax_11 = sub_463f60(eax_10 + 0x43960, arg1[1])
                char eax_13
                eax_13, edx_3 = sub_448570(*(*(data_27e7a40 + 0x548) + 0xbfb0), eax_11)
                
                if (eax_13 != 0)
                    esi_2 = data_27e7a40
                label_448742:
                    
                    if (arg2 != 0)
                        if (arg2 == 1)
                            void* esi_6 = *(esi_2 + 0x548)
                            
                            if (*(esi_6 + 0xbfac) != 0 || *(esi_6 + 0x2c0ac) != 0xffffffff)
                                sub_4d6480(data_307bef8)
                                void var_3c
                                sub_4d66f0(&var_3c)
                            else
                                int32_t eax_25 = *arg1
                                
                                if (eax_25 == 0xe)
                                    arg1[1]
                                    int32_t* eax_26 = sub_4185c0()
                                    
                                    if (*eax_26 == 1)
                                        *(sub_418870(eax_26[0x1f]) + 0xac)
                                        eax_26 = sub_4185c0()
                                    
                                    sub_4474b0(eax_26)
                                    int32_t eax_29
                                    eax_29.b = 1
                                    sub_5a6aba(eax_1 ^ &var_5c)
                                    return eax_29
                                
                                if (eax_25 == 0xb && *(esi_6 + 0x2c079) == 0 && *(esi_6 + 0x2c07a) == 0)
                                    sub_41d430(arg1[2])
                                    int32_t eax_31
                                    eax_31.b = 1
                                    sub_5a6aba(eax_1 ^ &var_5c)
                                    return eax_31
                                
                                if (*(esi_6 + 0xbfb0) == 0xffffffff && eax_25 == 0x14)
                                    *(esi_6 + 0xbfb0) = arg1[2]
                                    data_307bf7c
                                    sub_4d6980()
                                    int32_t eax_32
                                    eax_32.b = 1
                                    sub_5a6aba(eax_1 ^ &var_5c)
                                    return eax_32
                            
                            sub_447b40()
                        
                        break
                        break
                    
                    void* edi_2 = *(esi_2 + 0x548)
                    
                    if ((*(edi_2 + 0xbfac) != arg2 || *(edi_2 + 0x2c0ac) != 0xffffffff) && *arg1 != 0xc)
                        *(edi_2 + 0x438e4) = 1
                        *(edi_2 + 0x438e8) = 0
                        int32_t eax_18
                        int80_t st0
                        st0, eax_18 = sub_4c6230(edi_2 + 0x438ec)
                        eax_18.b = 1
                        sub_5a6aba(eax_1 ^ &var_5c)
                        return eax_18
                    
                    eax_14 = *arg1
                    
                    if (eax_14 == 0)
                        eax_14.b = 0
                        sub_5a6aba(eax_1 ^ &var_5c)
                        return eax_14
                    
                    int32_t var_48 = 0
                    int32_t var_44_1 = 0
                    int32_t var_40_1 = 0
                    
                    switch (eax_14)
                        case 2
                            goto label_448925
                        case 0xa
                            break
                        case 0xb
                            sub_446fe0(0, arg1)
                        label_44891f:
                            esi_2 = data_27e7a40
                        label_448925:
                            void* edx_8 = *(esi_2 + 0x548)
                            sub_472e60(*(esi_2 + 0x74), edx_8, &var_48, edx_8)
                            void* eax_23
                            eax_23.b = 1
                            sub_5a6aba(eax_1 ^ &var_5c)
                            return eax_23
                        case 0xc
                            goto label_448925
                        case 0xe
                            if (*(edi_2 + 0xbff8) != 0 && *(edi_2 + 0xc008) == arg1[1])
                                int32_t edx_5 = *(esi_2 + 0xc)
                                var_58 = *(esi_2 + 8) - *(edi_2 + 0xc000)
                                long double x87_r7_1 = float.t(var_58)
                                int32_t var_54_1 = edx_5
                                long double temp0_1 = fconvert.t(150f)
                                x87_r7_1 - temp0_1
                                int32_t eax_16
                                eax_16.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                                    | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
                                bool p_1 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_1))
                                    sub_4185c0()
                                    sub_446a20()
                                    *(edi_2 + 0xbfe4) = 0
                                    *(edi_2 + 0xbff8) = 0
                                    arg2 = 1
                                    continue
                            
                            arg1[1]
                            sub_4185c0()
                            uint32_t eax_19
                            int32_t edx_6
                            eax_19, edx_6 = sub_446a20()
                            int32_t* ecx_13 = arg1
                            
                            if (eax_19.b == 0)
                                sub_447150(eax_19, edx_6, ecx_13, 0)
                                int32_t eax_21
                                eax_21.b = 1
                                sub_5a6aba(eax_1 ^ &var_5c)
                                return eax_21
                            
                            sub_447150(eax_19, edx_6, ecx_13, 1)
                            int32_t eax_20
                            eax_20.b = 1
                            sub_5a6aba(eax_1 ^ &var_5c)
                            return eax_20
                        case 0xf
                            sub_447150(eax_14, edx_3, arg1, 1)
                            goto label_44891f
                        case 0x14
                            sub_445f60()
                            arg2 = 1
                            continue
                    
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x4ac0, 
                        "RFTGButtonClick")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            sub_447b40()
            
            if (sub_419400(&var_58).b == 0)
                break
            
            eax_14 = *var_58
            
            if (eax_14 != 0x49 && eax_14 != 0x4a)
                break
        
        sub_419340()
        void* eax_17
        eax_17.b = 1
        sub_5a6aba(eax_1 ^ &var_5c)
        return eax_17
    
    eax_14.b = 1
    sub_5a6aba(eax_1 ^ &var_5c)
    return eax_14
}
