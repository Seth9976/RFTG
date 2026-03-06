// 函数名称: sub_4b26b0
// 虚拟地址: 0x4b26b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b26b0(char* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    void* var_c = __security_cookie ^ &__saved_ebp
    char* ecx = arg1
    void* var_414 = nullptr
    
    if (ecx == 0)
        sub_5a7edd("cards.txt")
        sub_5a6aba(var_c ^ &__saved_ebp)
        return 0xffffffff
    
    if (data_26a44ac s< 0x100)
        while (true)
            int32_t edi_1 = 0
            char var_410
            char* esi_1 = &var_410
            void* ebx_1 = 1 - ecx
            void* eax_1
            
            do
                eax_1.b = *ecx
                
                if (eax_1.b == 0)
                    break
                
                int32_t edx_1
                edx_1.b = eax_1.b == 0xa
                *esi_1 = eax_1.b
                esi_1 = &esi_1[1]
                ecx = &ecx[1]
                edi_1 += 1
                
                if (edx_1 != 0)
                    break
            while (ebx_1 + ecx s< 0x400)
            
            if (edi_1 == 0)
                break
            
            char* eax_3 = &var_410
            *esi_1 = 0
            arg1 = ecx
            
            do
                ecx.b = *eax_3
                eax_3 = &eax_3[1]
            while (ecx.b != 0)
            
            void var_40f
            *(&var_414:3 + eax_3 - &var_40f) = ecx.b
            eax_1.b = var_410
            char var_40e[0x402]
            
            if (eax_1.b != 0 && eax_1.b != 0x23 && sx.d(eax_1.b) - 0x45 u<= 0x11)
                switch (zx.d(*(sx.d(eax_1.b) + 0x4b2b9f)))
                    case 0
                        eax_1 = sub_5a7fbd(&var_40e, U":")
                        
                        for (int32_t i = 0; i s< 5; i += 1)
                            *(var_414 + i + 9) = sub_5a82a5(eax_1, nullptr, 0)
                            eax_1 = sub_5a7fbd(nullptr, U":")
                    case 1
                        int32_t ecx_4
                        eax_1, ecx_4 = sub_5a7fbd(&var_40e, " |")
                        
                        if (eax_1 != 0)
                            while (true)
                                char const (* esi_6)[0x9] = data_8c5fd0
                                int32_t edi_2 = 0
                                int32_t ecx_5
                                
                                if (esi_6 != 0)
                                    while (true)
                                        void* edx_4 = eax_1
                                        
                                        while (true)
                                            ecx_5.b = *edx_4
                                            char const temp6_1 = *esi_6
                                            bool c_1 = ecx_5.b u< temp6_1
                                            
                                            if (ecx_5.b == temp6_1)
                                                if (ecx_5.b == 0)
                                                    ecx_5 = 0
                                                    break
                                                
                                                ecx_5.b = *(edx_4 + 1)
                                                char const temp11_1 = (*esi_6)[1]
                                                c_1 = ecx_5.b u< temp11_1
                                                
                                                if (ecx_5.b == temp11_1)
                                                    edx_4 += 2
                                                    esi_6 = &(*esi_6)[2]
                                                    
                                                    if (ecx_5.b != 0)
                                                        continue
                                                    
                                                    ecx_5 = 0
                                                    break
                                            
                                            bool c_2 = unimplemented  {sbb ecx, ecx}
                                            ecx_5 = sbb.d(sbb.d(ecx_5, ecx_5, c_1), 0xffffffff, c_2)
                                            break
                                        
                                        if (ecx_5 == 0)
                                            void* ecx_8 = var_414
                                            *(ecx_8 + 0x10) |= 1 << edi_2.b
                                            break
                                        
                                        esi_6 = (&data_8c5fd4)[edi_2]
                                        edi_2 += 1
                                        
                                        if (esi_6 == 0)
                                            break
                                
                                if ((&data_8c5fd0)[edi_2] == 0)
                                    void* var_434_4 = eax_1
                                    sub_5a7d4b("Unknown flag '%s'!\n")
                                    sub_5a6aba(var_c ^ &__saved_ebp)
                                    return 0xfffffffe
                                
                                eax_1, ecx_5 = sub_5a7fbd(nullptr, " |")
                                
                                if (eax_1 == 0)
                                    break
                    case 2
                        void* ecx_9 = data_8c5fb4
                        int32_t ebx_2 = 0
                        
                        if (ecx_9 != 0)
                            void* ecx_10 = ecx_9
                            
                            while (true)
                                char (* eax_13)[0x402] = &var_40e
                                
                                while (true)
                                    char edx_2 = *eax_13
                                    char temp0_1 = *ecx_10
                                    bool c_3 = edx_2 u< temp0_1
                                    
                                    if (edx_2 == temp0_1)
                                        if (edx_2 == 0)
                                            eax_1 = nullptr
                                            break
                                        
                                        edx_2 = (*eax_13)[1]
                                        char temp7_1 = *(ecx_10 + 1)
                                        c_3 = edx_2 u< temp7_1
                                        
                                        if (edx_2 == temp7_1)
                                            eax_13 = &(*eax_13)[2]
                                            ecx_10 += 2
                                            
                                            if (edx_2 != 0)
                                                continue
                                            
                                            eax_1 = nullptr
                                            break
                                    
                                    bool c_4 = unimplemented  {sbb eax, eax}
                                    eax_1 = sbb.d(sbb.d(eax_13, eax_13, c_3), 0xffffffff, c_4)
                                    break
                                
                                if (eax_1 == 0)
                                    *(var_414 + 0xe) = ebx_2.b
                                    break
                                
                                ecx_10 = (&data_8c5fb8)[ebx_2]
                                ebx_2 += 1
                                
                                if (ecx_10 == 0)
                                    break
                        
                        if ((&data_8c5fb4)[ebx_2] == 0)
                            char (* var_434_2)[0x402] = &var_40e
                            sub_5a7d4b("No good name '%s'!\n")
                            sub_5a6aba(var_c ^ &__saved_ebp)
                            return 0xfffffffe
                    case 3
                        int32_t eax_5 = data_26a44ac
                        *(eax_5 * 0x128 + 0x2691cac) = eax_5.w
                        var_414 = eax_5 * 0x128 + &data_2691ca8
                        data_26a44ac = eax_5 + 1
                        *(eax_5 * 0x128 + &data_2691ca8) = sub_5a7f6b(&var_40e)
                    case 4
                        void* edx_6 = var_414
                        eax_1.b = *(edx_6 + 0x15)
                        int32_t ecx_13 = sx.d(eax_1.b)
                        eax_1.b += 1
                        void* esi_7 = edx_6 + ((ecx_13 * 3 + 3) << 3)
                        *(edx_6 + 0x15) = eax_1.b
                        int32_t eax_17 = sub_5a82a5(sub_5a7fbd(&var_40e, U":"), nullptr, 0)
                        *esi_7 = eax_17.b
                        int32_t var_420_1 = 0
                        int32_t var_41c_1 = 0
                        char* i_1
                        
                        for (i_1 = sub_5a7fbd(nullptr, "|: "); i_1 != 0; 
                                i_1 = sub_5a7fbd(nullptr, "|: "))
                            int32_t eax_20
                            int32_t ecx_15
                            eax_20, ecx_15 = sub_5a8426(sx.d(*i_1))
                            
                            if (eax_20 != 0)
                                break
                            
                            if (*i_1 == 0x2d)
                                break
                            
                            int32_t eax_21
                            int32_t edx_8
                            eax_21, edx_8 = sub_4b25d0(ecx_15, eax_17, i_1)
                            var_420_1 |= eax_21
                            var_41c_1 |= edx_8
                        
                        *(esi_7 + 8) = var_420_1
                        *(esi_7 + 0xc) = var_41c_1
                        *(esi_7 + 0x10) = sub_5a82a5(i_1, nullptr, 0)
                        *(esi_7 + 0x11) = sub_5a82a5(sub_5a7fbd(nullptr, U":"), nullptr, 0).b
                    case 5
                        char eax_8 = sub_5a82a5(sub_5a7fbd(&var_40e, U":"), nullptr, 0)
                        void* esi_5 = var_414
                        *(esi_5 + 6) = eax_8
                        *(esi_5 + 7) = sub_5a82a5(sub_5a7fbd(nullptr, U":"), nullptr, 0)
                        *(esi_5 + 8) = sub_5a82a5(sub_5a7fbd(nullptr, U":"), nullptr, 0).b
                    case 6
                        void* edx_10 = var_414
                        eax_1.b = *(edx_10 + 0x90)
                        int32_t ecx_17 = sx.d(eax_1.b)
                        eax_1.b += 1
                        void* edi_3 = edx_10 + ecx_17 * 0x18 + 0x98
                        *(edx_10 + 0x90) = eax_1.b
                        *edi_3 = sub_5a82a5(sub_5a7fbd(&var_40e, U":"), nullptr, 0)
                        void* eax_27 = sub_5a7fbd(nullptr, U":")
                        char const (* ecx_19)[0x13] = data_8c6630
                        int32_t esi_8 = 0
                        
                        if (ecx_19 != 0)
                            while (true)
                                void* eax_28 = eax_27
                                int32_t eax_30
                                
                                while (true)
                                    char edx_11 = *eax_28
                                    char const temp1_1 = *ecx_19
                                    bool c_5 = edx_11 u< temp1_1
                                    
                                    if (edx_11 == temp1_1)
                                        if (edx_11 == 0)
                                            eax_30 = 0
                                            break
                                        
                                        edx_11 = *(eax_28 + 1)
                                        char const temp8_1 = (*ecx_19)[1]
                                        c_5 = edx_11 u< temp8_1
                                        
                                        if (edx_11 == temp8_1)
                                            eax_28 += 2
                                            ecx_19 = &(*ecx_19)[2]
                                            
                                            if (edx_11 != 0)
                                                continue
                                            
                                            eax_30 = 0
                                            break
                                    
                                    bool c_6 = unimplemented  {sbb eax, eax}
                                    eax_30 = sbb.d(sbb.d(eax_28, eax_28, c_5), 0xffffffff, c_6)
                                    break
                                
                                if (eax_30 == 0)
                                    int32_t eax_32
                                    int32_t edx_12
                                    edx_12:eax_32 = sx.q(esi_8)
                                    *(edi_3 + 8) = eax_32
                                    *(edi_3 + 0xc) = edx_12
                                    break
                                
                                ecx_19 = (&data_8c6634)[esi_8]
                                esi_8 += 1
                                
                                if (ecx_19 == 0)
                                    break
                        
                        if ((&data_8c6630)[esi_8] == 0)
                            void* var_434_5 = eax_27
                            sub_5a7d4b("No VP type '%s'!\n")
                            sub_5a6aba(var_c ^ &__saved_ebp)
                            return 0xfffffffe
                        
                        *(edi_3 + 0x10) = sub_5a7f6b(sub_5a7fbd(nullptr, U":"))
            
            if (data_26a44ac s>= 0x100)
                break
            
            ecx = arg1
    
    sub_5a6aba(var_c ^ &__saved_ebp)
    return 0
}
