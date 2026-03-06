// 函数名称: sub_4a79a0
// 虚拟地址: 0x4a79a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_4a79a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    char* j = __security_cookie ^ &__saved_ebp
    char* j_5 = j
    int32_t* esi = arg1
    arg1.b = *(esi + 0x1e6a)
    int32_t* var_794 = esi
    
    if (arg1.b != 0)
        j = nullptr
        int32_t var_46c[0xc]
        int32_t var_43c[0xc]
        int32_t edx
        
        if (arg1.b s> 0)
            edx = sx.d(arg1.b)
            void* ecx = &esi[0x7a4]
            
            do
                var_43c[j] = sx.d(*(ecx - 0x24))
                var_46c[j] = sx.d(*ecx)
                j = &j[1]
                ecx += 2
            while (j s< edx)
        
        int32_t var_798 = sx.d(arg1.b)
        void var_40c
        
        if (esi[0x116].b s> 0)
            j = &esi[0xa]
            char* j_4 = j
            char* i = nullptr
            
            do
                if (j_4[0x7b] != 0)
                    void var_78c
                    void* var_7b8_1 = &var_78c
                    int32_t var_7bc_1 = 3
                    j, edx = sub_49dea0(i, edx, j_4, esi)
                    int32_t edi_2 = 0
                    char* j_2 = j
                    int32_t var_79c_1 = 0
                    
                    if (j s> 0)
                        do
                            edx = &esi[sx.d(*(&var_78c + (edi_2 << 3))) * 5 + 0x119]
                            void var_788
                            j = *(*(&var_788 + (edi_2 << 3)) + 0xc) & 0x100
                            
                            if (j != 0)
                                void var_78a
                                *(edx + 4) |= 1 << (*(&var_78a + (edi_2 << 3)) + 8)
                                sub_49d720(esi, i)
                                
                                if (*(j_4 + 0xa0) s>= *(j_4 + 0x9c))
                                    j = (*(*j_4 + 0xc))(esi, i, 0xa, &var_43c, &var_798, &var_46c, 
                                        &var_798, 0, 0, 0, 0)
                                    
                                    if (*(esi + 0x1ec3) != 0)
                                        goto label_4a7df2
                                    
                                    int32_t eax_8 = *(*j_4 + 0x10)
                                    
                                    if (eax_8 != 0)
                                        eax_8(esi, i, 0xa)
                                
                                int32_t ecx_10
                                j, ecx_10, edx = sub_49d860(&var_798, &var_46c, esi, i, 0xa, &var_43c, 
                                    &var_798, &var_798)
                                
                                if (*(esi + 0x1ec3) != 0)
                                    goto label_4a7df2
                                
                                if (var_798 != 0)
                                    j_4[0x7b] -= 1
                                    edx = sub_4ae7d0(ecx_10, i, 0x12, var_794)
                                    
                                    if (var_794[6].b == 0)
                                        int32_t var_7b8_3 = 1
                                        edx = sub_49ba20(i, edx)
                                    
                                    j = nullptr
                                    
                                    if (*(var_794 + 0x1e6a) s> 0)
                                        edx = var_46c[0]
                                        void* ecx_11 = &var_794[0x7a4]
                                        
                                        do
                                            if (edx == sx.d(*ecx_11))
                                                *(var_794 + j + 0x1ea8) = 1
                                            
                                            j = &j[1]
                                            ecx_11 += 2
                                        while (j s< sx.d(*(var_794 + 0x1e6a)))
                                    
                                    esi = var_794
                                    
                                    if (var_794[6].b == 0)
                                        int32_t var_7b8_4 = *esi[var_43c[0] * 5 + 0x11b]
                                        int32_t var_7bc_4 = *(j_4 - 8)
                                        sub_5a733b(&var_40c, 
                                            "%s spends prestige to defeat takeover of %s.\n")
                                        char const* const var_7c8_3 = "takeover"
                                        void* var_7cc_2 = &var_40c
                                        void* var_7b8_5 = &var_40c
                                        j, edx = sub_4591b0(&var_40c, sub_4c5680("%s (%s)"), esi, i)
                                    
                                    edi_2 = var_79c_1
                            
                            edi_2 += 1
                            var_79c_1 = edi_2
                        while (edi_2 s< j_2)
                
                j_4 = &j_4[0xb4]
                i = &i[1]
            while (i s< sx.d(esi[0x116].b))
        
        if (*(esi + 0x1e6a) s> 0)
            void* ebx_3 = &esi[0x7a1]
            void* edi_4 = &esi[0x7a4]
            int32_t (* var_790_1)[0xc] = &var_43c
            void* var_7a0_1 = ebx_3
            void* var_794_1 = edi_4
            
            do
                int32_t eax_18 = sx.d(*(ebx_3 + 0x24))
                int32_t eax_19
                int32_t edx_11
                eax_19, edx_11 =
                    sub_4a7080(eax_18, esi, sx.d(*ebx_3), sx.d(*(edi_4 - 0x24)), sx.d(*edi_4), eax_18)
                
                if (eax_19 == 0)
                    int32_t j_1 = 0xffffe17d - esi + ebx_3
                    int32_t j_3 = j_1
                    
                    if (j_1 s< sx.d(*(esi + 0x1e6a)))
                        do
                            edx_11.b = *ebx_3
                            
                            if (edx_11.b == *(esi + j_1 + 0x1e84))
                                *(esi + j_1 + 0x1ea8) = 1
                                
                                if (esi[6].b == 0)
                                    int32_t var_7b8_7 = *esi[*var_790_1 * 5 + 0x11b]
                                    int32_t var_7bc_7 = *esi[(&__saved_ebp)[j_1 - 0x10e] * 5 + 0x11b]
                                    sub_5a733b(&var_40c, 
                                        "Takeover of %s is defeated because takeover of %s failed.\n")
                                    char const* const var_7c8_4 = "takeover"
                                    void* var_7cc_3 = &var_40c
                                    void* var_7b8_8 = &var_40c
                                    sub_4591b0(&var_40c, sub_4c5680("%s (%s)"), esi, sx.d(*ebx_3))
                                    int32_t eax_27 = (&__saved_ebp)[j_1 - 0x10e]
                                    int32_t var_7c0_5 = 0
                                    int32_t var_7c4_3 = eax_27
                                    int32_t edx_16 = eax_27 * 5
                                    int32_t ecx_23 = sx.d(*(esi + 0x1ec2))
                                    sub_458fa0(sx.d(*ebx_3), 5, edx_16, ecx_23, ecx_23, 
                                        sx.d(*(&esi[edx_16] + 0x466)), sx.d(*var_794_1))
                                    ebx_3 = var_7a0_1
                                    j_1 = j_3
                            
                            j_1 += 1
                            j_3 = j_1
                        while (j_1 s< sx.d(*(esi + 0x1e6a)))
                        
                        edi_4 = var_794_1
                
                var_790_1 = &(*var_790_1)[1]
                ebx_3 += 1
                edi_4 += 2
                j = 0xffffe17c - esi + ebx_3
                var_794_1 = edi_4
                var_7a0_1 = ebx_3
            while (j s< sx.d(*(esi + 0x1e6a)))
        
        *(esi + 0x1e6a) = 0
    
    label_4a7df2:
    sub_5a6aba(j_5 ^ &__saved_ebp)
    return j
}
