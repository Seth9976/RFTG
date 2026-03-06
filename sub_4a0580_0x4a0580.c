// 函数名称: sub_4a0580
// 虚拟地址: 0x4a0580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4a0580(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = 0
    int32_t var_c68 = 0
    int32_t var_c6c
    char var_40c[0x404]
    
    if (arg1[0x116].b s> 0)
        void* ecx = &arg1[8]
        void* var_c70_1 = ecx
        
        while (true)
            void var_c64
            void* var_c98_1 = &var_c64
            int32_t var_c9c_1 = 2
            *(arg1 + 0x1ec1) = eax_2.b
            int32_t eax_3
            int32_t edx
            eax_3, ecx = sub_49dea0(eax_2, edx, ecx, arg1)
            int32_t ebx_1 = 0
            var_c6c = eax_3
            int32_t var_c78_1 = 0
            
            if (eax_3 s> 0)
                void* eax_12
                int32_t edx_4
                
                do
                    void var_c60
                    ecx = *(&var_c60 + (ebx_1 << 3))
                    void* eax_6 = *arg1[sx.d(*(&var_c64 + (ebx_1 << 3))) * 5 + 0x11b]
                    int32_t edx_2 = *(ecx + 8)
                    int32_t var_c80_1 = *(ecx + 0xc)
                    
                    if ((edx_2 & 1) == 0)
                        eax_12 = nullptr
                        edx_4 = edx_2 & 8
                        
                        if (edx_4 != 0)
                            eax_12, ecx, edx_4 = sub_49cf20(arg1, var_c68, sx.d(*(ecx + 0x10)), eax_6)
                            var_c78_1 += 1
                    else
                        eax_12, ecx, edx_4 = sub_49cf20(arg1, var_c68, sx.d(*(ecx + 0x10)), eax_6)
                    
                    ebx_1 += 1
                while (ebx_1 s< var_c6c)
                
                if (var_c78_1 != 0)
                    ecx = sub_49dd50(eax_12, edx_4, var_c68, arg1, var_c78_1)
                    
                    if (arg1[6].b == 0)
                        char* const eax_14 = &data_83f3d3
                        
                        if (var_c78_1 != 1)
                            eax_14 = &data_85f840
                        
                        char* const var_c98_5 = eax_14
                        int32_t var_c9c_4 = var_c78_1
                        int32_t var_ca0_2 = *var_c70_1
                        sub_5a733b(&var_40c, "%s discards %d card%s.\n")
                        char const* const var_c98_6 = "verbose"
                        char (* var_c9c_5)[0x404] = &var_40c
                        ecx = sub_4c5680("%s (%s)")
                    
                    if (*(arg1 + 0x1ec3) != 0)
                    label_4a0809:
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
            
            edx = sx.d(arg1[0x116].b)
            var_c70_1 += 0xb4
            int32_t eax_16 = var_c68 + 1
            var_c68 = eax_16
            
            if (eax_16 s>= edx)
                break
            
            eax_2 = var_c68
    
    int32_t var_944[0x148]
    int32_t var_424[0x6]
    
    if (arg1[6].b != 0)
        int32_t i = 0
        
        if (arg1[0x116].b s> 0)
            void* var_c68_1 = arg1 + 0xae
            
            do
                if (i != sx.d(*(arg1 + 0x19)))
                    *(arg1 + 0x1ec1) = i.b
                    *(var_c68_1 - 0x4e) = 0xffff
                    var_424[i] = 0
                    int32_t eax_19 = sub_4a0420(arg1, i)
                    int32_t j
                    int32_t edx_8
                    
                    if (i s>= 0)
                        j = sx.d(*(var_c68_1 - 0x6a))
                        edx_8 = 0
                    
                    if (i s< 0 || j s< 0xffffffff)
                    label_4a0a1b:
                        sub_49b2a0()
                        noreturn
                    
                    while (j != 0xffffffff)
                        j = sx.d(arg1[j * 5 + 0x11d].w)
                        edx_8 += 1
                    
                    if (sx.d(*var_c68_1) - sx.d(*(var_c68_1 + 2)) + edx_8 + eax_19 - 1 s> 0)
                        var_c6c = 0
                        sub_49d720(arg1, i)
                        int32_t (* eax_20)[0x148] = *(var_c68_1 + 0x1a)
                        int16_t eax_24
                        
                        if (eax_20 s>= *(var_c68_1 + 0x16))
                            (*(*(var_c68_1 - 0x86) + 0xc))(arg1, i, 5, &var_944, &var_c6c, 0, 0, 2, 
                                0xffffffff, 0, 0)
                            
                            if (*(arg1 + 0x1ec3) == 0)
                                int32_t eax_25 = *(*(var_c68_1 - 0x86) + 0x10)
                                
                                if (eax_25 != 0)
                                    eax_25(arg1, i, 5)
                                
                                int32_t var_c98_8 = 0
                                eax_24 =
                                    sub_49d860(&var_944, 0, arg1, i, 5, &var_944, &var_c6c, nullptr)
                            else
                                eax_24 = -1
                        else
                            eax_24 = sub_49d860(eax_20, 0, arg1, i, 5, &var_944, &var_c6c, nullptr)
                        
                        *(var_c68_1 - 0x4e) = eax_24
                
                var_c68_1 += 0xb4
                i += 1
            while (i s< sx.d(arg1[0x116].b))
    
    int32_t i_1 = 0
    int32_t i_7 = 0
    
    if (arg1[0x116].b s> 0)
        void* ebx_2 = arg1 + 0xae
        
        do
            if (arg1[6].b == 0 || i_1 == sx.d(*(arg1 + 0x19)))
                *(arg1 + 0x1ec1) = i_1.b
                *(ebx_2 - 0x4e) = 0xffff
                (&__saved_ebp)[i_1 - 0x108] = 0
                int32_t eax_26 = sub_4a0420(arg1, i_1)
                
                if (i_7 s< 0)
                    goto label_4a0a1b
                
                int32_t j_1 = sx.d(*(ebx_2 - 0x6a))
                int32_t edx_12 = 0
                
                if (j_1 s< 0xffffffff)
                    goto label_4a0a1b
                
                while (j_1 != 0xffffffff)
                    j_1 = sx.d(arg1[j_1 * 5 + 0x11d].w)
                    edx_12 += 1
                
                int32_t ecx_16 = sx.d(*ebx_2) - sx.d(*(ebx_2 + 2)) + edx_12
                
                if (arg1[6].b == 0 || ecx_16 != 0)
                    int32_t j_2 = sx.d(*(ebx_2 - 0x6a))
                    var_c6c = 0
                    
                    if (j_2 != 0xffffffff)
                        do
                            void* edx_14 = arg1[j_2 * 5 + 0x11b]
                            
                            if (*(edx_14 + 6) == 2 && sx.d(*(edx_14 + 7)) s<= ecx_16 + eax_26 - 1)
                                for (int32_t k = sx.d(*(ebx_2 - 0x68)); k != 0xffffffff; 
                                        k = sx.d(arg1[k * 5 + 0x11d].w))
                                    if (arg1[k * 5 + 0x11b] == edx_14)
                                        goto label_4a09c7
                                
                                int32_t eax_31 = var_c6c
                                var_944[eax_31] = j_2
                                var_c6c = eax_31 + 1
                            
                        label_4a09c7:
                            j_2 = sx.d(arg1[j_2 * 5 + 0x11d].w)
                        while (j_2 != 0xffffffff)
                        
                        if (var_c6c != 0)
                            sub_49d720(arg1, i_7)
                            int32_t ecx_19 = *(ebx_2 + 0x1a)
                            
                            if (ecx_19 s>= *(ebx_2 + 0x16))
                                (*(*(ebx_2 - 0x86) + 0xc))(arg1, i_7, 5, &var_944, &var_c6c, 0, 0, 2, 
                                    0xffffffff, 0, 0)
                                *(ebx_2 + 0x22) = *(ebx_2 + 0x16)
                            else
                                int32_t edx_16 = *(ebx_2 + 0x12)
                                int32_t eax_33 = *(edx_16 + (ecx_19 << 2) + 8)
                                
                                if (eax_33 s< 0)
                                    goto label_4a0a1b
                                
                                if (eax_33 s> 0x64)
                                    goto label_4a0a1b
                                
                                int32_t eax_34 = *(edx_16 + ((ecx_19 + eax_33 + 3) << 2))
                                
                                if (eax_34 s< 0)
                                    goto label_4a0a1b
                                
                                if (eax_34 s> 0x64)
                                    goto label_4a0a1b
                                
                                *(ebx_2 + 0x22) = ecx_19 + eax_33 + 3 + eax_34 + 1
                            
                            bool cond:3_1 = *(arg1 + 0x1ec3) != 0
                            (&__saved_ebp)[i_1 - 0x108] = 1
                            
                            if (cond:3_1)
                                goto label_4a0809
                
                i_1 = i_7
            
            i_1 += 1
            ebx_2 += 0xb4
            i_7 = i_1
        while (i_1 s< sx.d(arg1[0x116].b))
    
    int32_t i_2 = 0
    
    if (arg1[0x116].b s> 0)
        void* ebx_3 = &arg1[0xa]
        
        do
            int32_t eax_38 = *(*ebx_3 + 0x10)
            
            if (eax_38 != 0)
                eax_38(arg1, i_2, 0xffffffff)
            
            i_2 += 1
            ebx_3 += 0xb4
        while (i_2 s< sx.d(arg1[0x116].b))
    
    int32_t i_3 = 0
    
    if (arg1[0x116].b s> 0)
        void* ebx_4 = &arg1[8]
        
        do
            if (var_424[i_3] != 0)
                *(ebx_4 + 0x40) = sub_49d860(&var_944, 0, arg1, i_3, 5, &var_944, &var_c6c, nullptr)
            else if (arg1[6].b == 0)
                int32_t var_c98_10 = *ebx_4
                sub_5a733b(&var_40c, "%s does not place a development.\n")
                char const* const var_c98_11 = "verbose"
                char (* var_c9c_9)[0x404] = &var_40c
                sub_4c5680("%s (%s)")
            
            i_3 += 1
            ebx_4 += 0xb4
        while (i_3 s< sx.d(arg1[0x116].b))
    
    int32_t i_4 = 0
    int32_t i_8 = 0
    
    if (arg1[0x116].b s> 0)
        void* edi_13 = &arg1[0x18]
        
        do
            uint32_t eax_46 = zx.d(*edi_13)
            
            if (eax_46.w != 0xffff)
                if (arg1[6].b == 0)
                    int32_t var_c98_14 = *arg1[sx.d(eax_46.w) * 5 + 0x11b]
                    int32_t var_c9c_12 = *(edi_13 - 0x40)
                    sub_5a733b(&var_40c, "%s places %s.\n")
                    sub_4c5680(&var_40c)
                    void* edx_24 = data_27e7a40
                    int32_t ecx_27 = sx.d(*edi_13)
                    eax_46 = (i_4 + (sx.d(*(arg1 + 0x1ec2)) << 2)) * 0x1c0 + *(edx_24 + 0x548) + 0x2c0c0
                    *(eax_46 + 0x1c) = 1
                    int32_t ecx_28
                    
                    if (ecx_27 != 0xffffffff)
                        void* edx_25 = *(edx_24 + 0x548)
                        
                        if (edx_25 == 0)
                            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        ecx_28 = sx.d(*(*(*(edx_25 + 0x45844) + ecx_27 * 0x14 + 0x46c) + 4))
                    else
                        ecx_28 = ecx_27
                    
                    *(eax_46 + (*(eax_46 + 0x28) << 2) + 0x20) = ecx_28
                    *(eax_46 + 0x28) += 1
                    i_4 = i_8
                
                int32_t edx_28 = sx.d(*edi_13)
                *(edi_13 + 0x53) = 0
                sub_49f030(eax_46, edx_28, arg1, i_4, 0)
            else
                *(edi_13 + 0x53) = 1
                
                if (arg1[6].b == 0)
                    int32_t var_c98_12 = *(edi_13 - 0x40)
                    sub_5a733b(&var_40c, "%s does not place a development.\n")
                    char const* const var_c98_13 = "verbose"
                    char (* var_c9c_11)[0x404] = &var_40c
                    sub_4c5680("%s (%s)")
            
            i_4 += 1
            edi_13 += 0xb4
            i_8 = i_4
        while (i_4 s< sx.d(arg1[0x116].b))
    
    int32_t i_5 = 0
    
    if (arg1[0x116].b s> 0)
        void* ebx_6 = &arg1[0xa]
        
        do
            int16_t ecx_32 = *(ebx_6 + 0x38)
            
            if (ecx_32 != 0xffff)
                int32_t eax_48 = *(*ebx_6 + 8)
                
                if (eax_48 != 0)
                    eax_48(arg1, i_5, 2, sx.d(ecx_32))
            
            i_5 += 1
            ebx_6 += 0xb4
        while (i_5 s< sx.d(arg1[0x116].b))
    
    char* i_6 = nullptr
    
    if (arg1[0x116].b s> 0)
        void* ebx_7 = &arg1[0x18]
        
        do
            int16_t eax_49 = *ebx_7
            
            if (eax_49 != 0xffff)
                int32_t eax_50 = sx.d(eax_49)
                sub_4a00b0(eax_50, i_6, arg1, eax_50)
                *ebx_7 = 0xffff
                
                if (*(arg1 + 0x1ec3) != 0)
                    goto label_4a0809
            
            i_6 = &i_6[1]
            ebx_7 += 0xb4
        while (i_6 s< sx.d(arg1[0x116].b))
    
    sub_49d660(arg1)
    sub_4ae980()
    sub_49d1f0()
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
