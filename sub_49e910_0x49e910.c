// 函数名称: sub_49e910
// 虚拟地址: 0x49e910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_49e910(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi = arg1
    int32_t ebx = 0
    int32_t var_ea0
    int32_t var_e94[0x148]
    void var_774
    void var_770
    char var_40c[0x404]
    void* edx
    
    if (*(esi + 0x458) s> 0)
        void* edi_1 = esi + 0x28
        
        do
            void* var_ec8_1 = &var_774
            int32_t var_ecc_1 = 1
            int32_t eax_3
            eax_3, edx = sub_49dea0(ebx, edx, arg1, esi)
            void* var_e98_1 = nullptr
            
            if (eax_3 s> 0)
                void* eax_21
                
                do
                    int32_t ecx_1 = 0
                    
                    if ((*(*(&var_770 + (var_e98_1 << 3)) + 8) & 8) != 0)
                        int32_t i = sx.d(*(edi_1 + 0x1c))
                        
                        while (i != 0xffffffff)
                            var_e94[ecx_1] = i
                            edx = i * 5 + 0x11d
                            i = sx.d(*(esi + (edx << 2)))
                            ecx_1 += 1
                        
                        bool cond:1_1 = *(esi + 0x18) == 0
                        var_ea0 = ecx_1
                        
                        if (not(cond:1_1))
                            ecx_1 -= sx.d(*(edi_1 + 0x88))
                            var_ea0 = ecx_1
                        
                        if (ecx_1 != 0)
                            sub_49d720(esi, ebx)
                            int32_t* var_ed0_2
                            int32_t* var_ecc_2
                            int32_t (* eax_9)[0x148]
                            
                            if (*(edi_1 + 0xa0) s>= *(edi_1 + 0x9c))
                                void var_772
                                (*(*edi_1 + 0xc))(esi, ebx, 4, &var_e94, &var_ea0, 0, 0, 
                                    sx.d(*(&var_774 + (var_e98_1 << 3))), 
                                    sx.d(*(&var_772 + (var_e98_1 << 3))), 0, 0)
                                
                                if (*(esi + 0x1ec3) != 0)
                                label_49eb69:
                                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                                    return 0
                                
                                int32_t eax_12 = *(*edi_1 + 0x10)
                                
                                if (eax_12 != 0)
                                    eax_12(esi, ebx, 4)
                                
                                int32_t var_ec8_2 = 0
                                eax_9 = &var_ea0
                                var_ecc_2 = &var_ea0
                                var_ed0_2 = &var_e94
                                goto label_49ea74
                            
                            var_ecc_2 = &var_ea0
                            eax_9 = &var_e94
                            var_ed0_2 = &var_e94
                        label_49ea74:
                            edx = sub_49d860(eax_9, 0, esi, ebx, 4, var_ed0_2, var_ecc_2, nullptr)
                            
                            if (*(esi + 0x1ec3) != 0)
                                goto label_49eb69
                            
                            int32_t eax_13 = var_ea0
                            
                            if (eax_13 != 0)
                                sub_49dbf0(eax_13, &var_e94, esi, ebx, eax_13)
                                edx = var_e98_1
                                int32_t eax_15 = sx.d(*(*(&var_770 + (edx << 3)) + 0x10))
                                *(edi_1 + 0x7b) += eax_15.b
                                
                                if (*(esi + 0x18) == 0)
                                    int32_t var_ec8_4 = eax_15
                                    edx = sub_49b990(ebx, edx)
                                
                                *(edi_1 + 0x7c) = 1
                                
                                if (*(esi + 0x18) == 0)
                                    int32_t var_ec8_5 =
                                        **(esi + sx.d(*(&var_774 + (var_e98_1 << 3))) * 0x14 + 0x46c)
                                    int32_t var_ecc_5 = *(edi_1 - 8)
                                    sub_5a733b(&var_40c, "%s discards to gain prestige from %s.\n")
                                    edx = sub_4c5680(&var_40c)
                    
                    eax_21 = var_e98_1 + 1
                    var_e98_1 = eax_21
                while (eax_21 s< eax_3)
            
            arg1 = sx.d(*(esi + 0x458))
            ebx += 1
            edi_1 += 0xb4
        while (ebx s< arg1)
    
    int32_t ebx_1 = 0
    void** var_e9c
    int32_t var_43c[0x6]
    
    if (*(esi + 0x458) s> 0)
        void** ecx_10 = esi + 0x30
        var_e9c = ecx_10
        
        while (true)
            int32_t edi_2 = ecx_10[-1]
            int32_t eax_24 = edi_2 & 0x7f
            void* var_e98_2 = 2
            
            if (eax_24 != 1)
                edx.b = (*ecx_10).b & 0x7f
            
            if (eax_24 == 1 || edx.b == 1)
                var_e98_2 = 7
            
            if (eax_24 == 2 || ((*ecx_10).b & 0x7f) == 2)
                var_e98_2 += 1
            
            if (edi_2 != 0x81)
                ecx_10 = *ecx_10
            
            if (edi_2 == 0x81 || ecx_10 == 0x81 || edi_2 == 0x82 || ecx_10 == 0x82)
                var_e98_2 += 6
            
            void* var_ec8_6 = &var_774
            int32_t var_ecc_6 = 1
            int32_t eax_27 = sub_49dea0(ebx_1, edx, ecx_10, esi)
            int32_t edx_6 = 0
            
            if (eax_27 s> 0)
                do
                    void* edi_3 = *(&var_770 + (edx_6 << 3))
                    
                    if ((*(edi_3 + 8) & 1) != 0)
                        var_e98_2 += sx.d(*(edi_3 + 0x10))
                    
                    edx_6 += 1
                while (edx_6 s< eax_27)
            
            sub_49cf20(esi, ebx_1, var_e98_2, nullptr)
            edx = var_e98_2
            int32_t eax_29 = sx.d(*(esi + 0x458))
            var_e9c = &var_e9c[0x2d]
            var_43c[ebx_1] = edx
            ebx_1 += 1
            
            if (ebx_1 s>= eax_29)
                break
            
            ecx_10 = var_e9c
    
    int32_t var_ea4_1 = 0
    int32_t var_454[0x6]
    int32_t var_424[0x6]
    
    if (*(esi + 0x458) s> 0)
        void** ecx_17 = esi + 0x2c
        var_e9c = ecx_17
        
        while (true)
            void* eax_30 = *ecx_17
            void* edx_7
            edx_7.b = eax_30.b & 0x7f
            int32_t var_e98_3 = 1
            int32_t var_ea8_1 = 0
            
            if (edx_7.b == 2)
                var_e98_3 = 2
            else
                edx_7.b = ecx_17[1].b & 0x7f
                
                if (edx_7.b == 2)
                    var_e98_3 = 2
            
            if (eax_30 != 0x81)
                ecx_17 = ecx_17[1]
            
            if (eax_30 == 0x81 || ecx_17 == 0x81 || eax_30 == 0x82 || ecx_17 == 0x82)
                var_e98_3 += 1
                var_ea8_1 = 1
            
            void* var_ec8_7 = &var_774
            int32_t var_ecc_8 = 1
            int32_t eax_32 = sub_49dea0(var_ea4_1, edx_7, ecx_17, esi)
            int32_t edi_5 = 0
            
            if (eax_32 s> 0)
                do
                    void* eax_33 = *(&var_770 + (edi_5 << 3))
                    int32_t edx_8 = *(eax_33 + 8)
                    int32_t var_eb0_1 = *(eax_33 + 0xc)
                    
                    if ((edx_8 & 2) != 0)
                        var_e98_3 += sx.d(*(eax_33 + 0x10))
                    
                    if ((edx_8 & 4) != 0)
                        var_ea8_1 = 1
                    
                    edi_5 += 1
                while (edi_5 s< eax_32)
            
            int32_t edi_6 = var_43c[var_ea4_1]
            var_424[var_ea4_1] = var_e98_3
            var_454[var_ea4_1] = var_ea8_1
            
            if (var_e98_3 != edi_6)
                void** ebx_2 = var_e9c
                int32_t i_1 = sx.d(ebx_2[6].w)
                int32_t edx_12 = 0
                var_ea0 = 0
                
                for (; i_1 != 0xffffffff; i_1 = sx.d(*(esi + ((i_1 * 5 + 0x11d) << 2))))
                    int32_t ecx_23 = i_1 * 5
                    
                    if (*(esi + (ecx_23 << 2) + 0x467) != 2
                            || sx.d(*(esi + (ecx_23 << 2) + 0x466)) != var_ea4_1 || var_ea8_1 != 0)
                        var_e94[edx_12] = i_1
                        edx_12 += 1
                        var_ea0 = edx_12
                
                int32_t eax_38 = edi_6 - var_e98_3
                
                if (sx.d(*(ebx_2 + 0x82)) + edx_12 s< eax_38)
                    sub_49b2a0()
                    noreturn
                
                sub_49da80(var_ea4_1, 2, &var_e94, &var_ea0, 0, 0, eax_38, 0, var_ea8_1)
                
                if (*(esi + 0x1ec3) != 0)
                    goto label_49eb69
            
            int32_t edx_14 = sx.d(*(esi + 0x458))
            var_e9c = &var_e9c[0x2d]
            int32_t eax_40 = var_ea4_1 + 1
            var_ea4_1 = eax_40
            
            if (eax_40 s>= edx_14)
                break
            
            ecx_17 = var_e9c
    
    int32_t i_2 = 0
    
    if (*(esi + 0x458) s> 0)
        int32_t* ebx_4 = esi + 0x28
        
        do
            int32_t eax_42 = *(*ebx_4 + 0x10)
            
            if (eax_42 != 0)
                eax_42(esi, i_2, 0xffffffff)
            
            i_2 += 1
            ebx_4 = &ebx_4[0x2d]
        while (i_2 s< sx.d(*(esi + 0x458)))
    
    int32_t i_3 = 0
    
    if (*(esi + 0x458) s> 0)
        int32_t* var_e98_4 = esi + 0x30
        
        do
            int32_t ebx_5 = var_43c[i_3]
            void var_974
            
            if (var_424[i_3] != ebx_5)
                sub_49dbf0(sub_49d860(&var_e9c, 0, esi, i_3, 2, &var_974, &var_e9c, nullptr), &var_974, 
                    esi, i_3, var_e9c)
            
            if (*(esi + 0x18) == 0)
                int32_t edx_18 = var_e98_4[-4]
                char const* const var_ed4_3
                
                if (var_454[i_3] == 0)
                    int32_t var_ec8_11 = var_424[i_3]
                    int32_t var_ecc_13 = ebx_5
                    int32_t var_ed0_11 = edx_18
                    var_ed4_3 = "%s draws %d and keeps %d.\n"
                else
                    int32_t var_ec8_10 = ebx_5 - var_424[i_3]
                    int32_t var_ecc_12 = ebx_5
                    int32_t var_ed0_10 = edx_18
                    var_ed4_3 = "%s draws %d and discards %d.\n"
                
                sub_5a733b(&var_40c, var_ed4_3)
                sub_4c5680(&var_40c)
                int32_t ecx_33 = var_424[i_3]
                void* eax_50 =
                    (i_3 + (sx.d(*(esi + 0x1ec2)) << 2)) * 0x1c0 + *(data_27e7a40 + 0x548) + 0x2c0c0
                *(eax_50 + 0xc) = 1
                *(eax_50 + 0x14) = ebx_5
                *(eax_50 + 0x18) = ecx_33
            
            if ((*(esi + 0x18) != 0 || *(esi + 0x18) != 0) && sx.d(*(esi + 0x19)) == i_3)
                int32_t edx_22 = *(var_e98_4[-2] + 0x14)
                
                if (edx_22 != 0)
                    int32_t ecx_36 = var_e98_4[-1] & 0x7f
                    int32_t eax_54
                    
                    if (ecx_36 != 1)
                        eax_54 = *var_e98_4 & 0x7f
                    
                    if (ecx_36 == 1 || eax_54 == 1 || ecx_36 == 2 || eax_54 == 2)
                        edx_22(esi, i_3, ebx_5, var_424[i_3], var_454[i_3])
            
            var_e98_4 = &var_e98_4[0x2d]
            i_3 += 1
        while (i_3 s< sx.d(*(esi + 0x458)))
    
    sub_4ae980()
    sub_49d1f0()
    sub_49d660(esi)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
