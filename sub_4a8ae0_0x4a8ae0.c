// 函数名称: sub_4a8ae0
// 虚拟地址: 0x4a8ae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a8ae0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = arg4
    void* edx_1 = arg2 * 0xb4 + esi
    int32_t* edx_2 = esi[arg5 * 5 + 0x11b]
    void* ebx_1 = &edx_2[(arg3 * 3 + 3) * 2]
    int32_t ecx_1 = *edx_2
    int32_t edi = arg7
    int32_t* var_440 = esi
    void* var_430 = ebx_1
    
    if (edx_2[(arg3 * 3 + 3) * 2].b == 4)
        int32_t edx_3 = *(ebx_1 + 8)
        int32_t var_448_1 = *(ebx_1 + 0xc)
        
        if ((edx_3 & 0x10000) == 0)
            if ((edx_3 & 0x20000) == 0)
                if ((edx_3 & 0x80000) == 0 && (edx_3 & 0x40000) == 0 && edi s> sx.d(*(ebx_1 + 0x11)))
                    sub_4c5680("too man times")
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
            else if (edi != 0 && edi != 3)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0
        else if (edi != 2)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
        
        int32_t var_424
        
        if ((edx_3 & 0x20000) != 0)
            int32_t eax_24 = 0
            __builtin_memset(&var_424, 0, 0x18)
            
            if (edi s<= 0)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0
            
            do
                int32_t ecx_14 = sx.d(*(esi[*(arg6 + (eax_24 << 2)) * 5 + 0x11b] + 0xe))
                (&var_424)[ecx_14] += 1
                eax_24 += 1
            while (eax_24 s< edi)
            
            int32_t eax_25 = 1
            
            if (var_424 == 0)
                eax_25 = 0
            
            int32_t var_420
            
            if (var_420 != 0)
                eax_25 += 1
            
            int32_t var_41c
            
            if (var_41c != 0)
                eax_25 += 1
            
            int32_t var_418
            
            if (var_418 != 0)
                eax_25 += 1
            
            int32_t var_414
            
            if (var_414 != 0)
                eax_25 += 1
            
            int32_t var_410
            
            if (var_410 != 0)
                eax_25 += 1
            
            if (eax_25 != 3)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0
        
        int32_t eax_26 = 0
        
        if ((edx_3 & 0x40000) != 0)
            __builtin_memset(&var_424, 0, 0x18)
            
            if (edi s> 0)
                do
                    int32_t ecx_20 = sx.d(*(esi[*(arg6 + (eax_26 << 2)) * 5 + 0x11b] + 0xe))
                    (&var_424)[ecx_20] += 1
                    eax_26 += 1
                while (eax_26 s< edi)
                
                int32_t eax_27 = 1
                
                if (var_424 == 0)
                    eax_27 = 0
                
                int32_t var_420_1
                
                if (var_420_1 != 0)
                    eax_27 += 1
                
                int32_t var_41c_1
                
                if (var_41c_1 != 0)
                    eax_27 += 1
                
                int32_t var_418_1
                
                if (var_418_1 != 0)
                    eax_27 += 1
                
                int32_t var_414_1
                
                if (var_414_1 != 0)
                    eax_27 += 1
                
                int32_t var_410_1
                
                if (var_410_1 != 0)
                    eax_27 += 1
                
                if (eax_27 s< edi)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
    
    int32_t eax_28 = 0
    int32_t var_43c = 0
    
    if (edi s> 0)
        do
            int32_t i = *(arg6 + (eax_28 << 2))
            int32_t eax_29 = i * 5
            
            if (*(&esi[eax_29] + 0x472) == 0)
                char const* const var_460_6 = "Passed card without good!\n"
                sub_4c5680("error %s")
            label_4a9044:
                sub_49b2a0()
                noreturn
            
            int32_t eax_30 = sx.d(*(edx_1 + 0x48))
            
            if (eax_30 == 0xffffffff)
            label_4a8dd4:
                sub_5a7d4b("Tried to get good where none exists\n")
                sub_5a79f4()
                noreturn
            
            while (sx.d(esi[eax_30 * 5 + 0x11c].w) != i)
                eax_30 = sx.d(esi[eax_30 * 5 + 0x11d].w)
                
                if (eax_30 == 0xffffffff)
                    goto label_4a8dd4
            
            int32_t var_460_1 = 1
            sub_49cc30(esi, eax_30, i, 0xffffffff)
            *(&esi[eax_29] + 0x472) -= 1
            
            if (esi[6].b == 0)
                *(arg6 + (var_43c << 2))
                sub_49bf50(arg2)
                int32_t var_460_3 = ecx_1
                int32_t var_464_1 = *esi[eax_29 + 0x11b]
                int32_t var_468_1 = *(edx_1 + 0x20)
                char var_40c[0x404]
                sub_5a733b(&var_40c, "%s consumes good from %s using %s.\n")
                sub_4c5680(&var_40c)
                ebx_1 = var_430
            
            edi = arg7
            eax_28 = var_43c + 1
            var_43c = eax_28
        while (eax_28 s< edi)
    
    if (esi[6].b == 0)
        sub_459070(sx.d(*(esi + 0x1ec2)), arg7, arg2, arg6, arg7)
        edi = arg7
    
    if (*ebx_1 == 4)
        int32_t eax_38 = sx.d(*(ebx_1 + 0x11))
        int32_t var_428_1 = eax_38
        
        if (edi s< eax_38)
            var_428_1 = edi
        
        int32_t ecx_26 = *(ebx_1 + 8)
        int32_t var_448_2 = *(ebx_1 + 0xc)
        
        if ((ecx_26 & 0x80000) != 0)
            var_428_1 = edi - 1
        
        if ((ecx_26 & 0x40000) != 0)
            var_428_1 = edi
        
        int32_t var_43c_1 = 0
        
        if (var_428_1 s> 0)
            int32_t eax_96
            
            do
                if ((*(ebx_1 + 8) & 0x1000000) != 0)
                    int32_t ecx_29 = sx.d(*(ebx_1 + 0x10))
                    int32_t var_448_3 = 1
                    int32_t eax_46 = sub_49c980(8, esi, arg2)
                    int32_t eax_47
                    
                    if (eax_46 == 0)
                        eax_47 = sub_49c980(0x87, esi, arg2)
                    
                    if (eax_46 != 0 || eax_47 != 0)
                        var_448_3 = 2
                    
                    if (sub_49c980(0x88, esi, arg2) != 0)
                        var_448_3 = 3
                    
                    int16_t eax_49 = var_448_3.w
                    int16_t ecx_34 = eax_49 * ecx_29.w
                    *(edx_1 + 0xa6) += ecx_34
                    esi[0x781].b -= muls.dp.b(eax_49.b, ecx_29.b).b
                    *(edx_1 + 0xba) += ecx_34
                    
                    if (esi[6].b == 0)
                        void* edi_3 = data_27e7a40
                        void* eax_51 = *(edi_3 + 0x548)
                        int32_t ecx_35 = *(eax_51 + 0x2c024)
                        
                        if (ecx_35 s>= 0x800)
                            sub_4c5870("gui->numUIActions < MAX_UIACTIONS", &data_83f3d3, 
                                "..\code\RFTGClient.cpp", 0x2c21, "UIActionQueueAlloc")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        *(eax_51 + 0x2c024) = ecx_35 + 1
                        sub_5abfc0((ecx_35 << 6) + eax_51 + 0xc024, 0, 0x40)
                        *((ecx_35 << 6) + eax_51 + 0xc04c) = 0xffffffff
                        *((ecx_35 << 6) + eax_51 + 0xc050) = 0xffffffff
                        *((ecx_35 << 6) + eax_51 + 0xc024) = 0x22
                        *((ecx_35 << 6) + eax_51 + 0xc060) = 0
                        void* eax_52 = *(edi_3 + 0x548)
                        
                        if (eax_52 == 0)
                            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t eax_55 = sx.d(*(*(eax_52 + 0x45844) + 0x1ec0)) + 0xa
                        
                        if (eax_55 u> 0x14)
                            goto label_4a9044
                        
                        int32_t eax_56
                        
                        switch (eax_55)
                            case 0
                                eax_56 = 0xfffffff6
                            label_4a9083:
                                *((ecx_35 << 6) + eax_51 + 0xc054) = eax_56
                                int32_t eax_58
                                
                                if (arg2 != 0xffffffff)
                                    eax_58 = *sub_46b2b0(arg2)
                                    edi_3 = data_27e7a40
                                    esi = var_440
                                else
                                    eax_58 = arg2
                                
                                *((ecx_35 << 6) + eax_51 + 0xc028) = eax_58
                                *((ecx_35 << 6) + eax_51 + 0xc02c) = var_448_3 * ecx_29
                                bool cond:5_1 = *(*(edi_3 + 0x548) + 0x2c068) != 0
                                *((ecx_35 << 6) + eax_51 + 0xc038) = 0xffffffff
                                int32_t eax_61
                                eax_61.b = cond:5_1
                                *((ecx_35 << 6) + eax_51 + 0xc05c) = zx.d(eax_61.b)
                                int32_t eax_63 = data_bebce4
                                *((ecx_35 << 6) + eax_51 + 0xc030) = eax_63
                                *((ecx_35 << 6) + eax_51 + 0xc058) = 0
                                ebx_1 = var_430
                                data_bebce4 = eax_63 + 1
                            case 1, 2, 3, 4, 5, 6, 7, 8
                                goto label_4a9044
                            case 9, 0xa, 0x14
                                eax_56 = 0
                                goto label_4a9083
                            case 0xb, 0xc
                                eax_56 = 1
                                goto label_4a9083
                            case 0xd
                                eax_56 = 2
                                goto label_4a9083
                            case 0xe
                                eax_56 = 8
                                goto label_4a9083
                            case 0xf
                                eax_56 = 3
                                goto label_4a9083
                            case 0x10
                                eax_56 = 9
                                goto label_4a9083
                            case 0x11, 0x12
                                eax_56 = 4
                                goto label_4a9083
                            case 0x13
                                eax_56 = 5
                                goto label_4a9083
                
                if ((*(ebx_1 + 8) & 0x200000) != 0)
                    sub_49cf20(esi, arg2, sx.d(*(ebx_1 + 0x10)), nullptr)
                    esi = var_440
                    *(edx_1 + 0xb8) += sx.w(*(var_430 + 0x10))
                    ebx_1 = var_430
                
                if ((*(ebx_1 + 8) & &__dos_header) != 0)
                    sub_49cf20(esi, arg2, sx.d(*(ebx_1 + 0x10)) * 2, nullptr)
                    esi = var_440
                    ebx_1 = var_430
                    *(edx_1 + 0xb8) += sx.w(*(var_430 + 0x10)) * 2
                
                if ((*(ebx_1 + 8) & &data_800000) != 0)
                    sub_49cf20(esi, arg2, sx.d(*(ebx_1 + 0x10)) * 3, nullptr)
                    void* eax_78
                    eax_78.w = sx.w(*(var_430 + 0x10))
                    esi = var_440
                    ebx_1 = var_430
                    eax_78.w *= 3
                    *(edx_1 + 0xb8) += eax_78.w
                
                if ((*(ebx_1 + 8) & 0x2000000) != 0)
                    void* ecx_43 = sx.d(*(ebx_1 + 0x10))
                    void* eax_82 = edx_1
                    *(eax_82 + 0xa3) += ecx_43.b
                    
                    if (esi[6].b == 0)
                        void* edi_7 = data_27e7a40
                        void* eax_83 = *(edi_7 + 0x548)
                        int32_t ecx_44 = *(eax_83 + 0x2c024)
                        
                        if (ecx_44 s>= 0x800)
                            sub_4c5870("gui->numUIActions < MAX_UIACTIONS", &data_83f3d3, 
                                "..\code\RFTGClient.cpp", 0x2c21, "UIActionQueueAlloc")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        *(eax_83 + 0x2c024) = ecx_44 + 1
                        sub_5abfc0((ecx_44 << 6) + eax_83 + 0xc024, 0, 0x40)
                        *((ecx_44 << 6) + eax_83 + 0xc04c) = 0xffffffff
                        *((ecx_44 << 6) + eax_83 + 0xc050) = 0xffffffff
                        *((ecx_44 << 6) + eax_83 + 0xc024) = 0x20
                        *((ecx_44 << 6) + eax_83 + 0xc060) = 0
                        void* eax_84 = *(edi_7 + 0x548)
                        
                        if (eax_84 == 0)
                            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t eax_87 = sx.d(*(*(eax_84 + 0x45844) + 0x1ec0)) + 0xa
                        
                        if (eax_87 u> 0x14)
                            goto label_4a9044
                        
                        int32_t eax_88
                        
                        switch (eax_87)
                            case 0
                                eax_88 = 0xfffffff6
                            label_4a92c6:
                                *((ecx_44 << 6) + eax_83 + 0xc054) = eax_88
                                int32_t eax_90
                                
                                if (arg2 != 0xffffffff)
                                    eax_90 = *sub_46b2b0(arg2)
                                    edi_7 = data_27e7a40
                                    esi = var_440
                                else
                                    eax_90 = arg2
                                
                                *((ecx_44 << 6) + eax_83 + 0xc028) = eax_90
                                *((ecx_44 << 6) + eax_83 + 0xc02c) = ecx_43
                                bool cond:6_1 = *(*(edi_7 + 0x548) + 0x2c068) != 0
                                *((ecx_44 << 6) + eax_83 + 0xc038) = 0xffffffff
                                int32_t eax_92
                                eax_92.b = cond:6_1
                                int32_t eax_93 = data_bebce4
                                *((ecx_44 << 6) + eax_83 + 0xc030) = eax_93
                                *((ecx_44 << 6) + eax_83 + 0xc05c) = zx.d(eax_92.b)
                                data_bebce4 = eax_93 + 1
                                eax_82 = edx_1
                                *((ecx_44 << 6) + eax_83 + 0xc058) = 0
                                ebx_1 = var_430
                            case 1, 2, 3, 4, 5, 6, 7, 8
                                goto label_4a9044
                            case 9, 0xa, 0x14
                                eax_88 = 0
                                goto label_4a92c6
                            case 0xb, 0xc
                                eax_88 = 1
                                goto label_4a92c6
                            case 0xd
                                eax_88 = 2
                                goto label_4a92c6
                            case 0xe
                                eax_88 = 8
                                goto label_4a92c6
                            case 0xf
                                eax_88 = 3
                                goto label_4a92c6
                            case 0x10
                                eax_88 = 9
                                goto label_4a92c6
                            case 0x11, 0x12
                                eax_88 = 4
                                goto label_4a92c6
                            case 0x13
                                eax_88 = 5
                                goto label_4a92c6
                    
                    *(eax_82 + 0xa4) = 1
                    void* edx_17
                    edx_17.w = sx.w(*(ebx_1 + 0x10))
                    *(eax_82 + 0xbc) += edx_17.w
                
                eax_96 = var_43c_1 + 1
                var_43c_1 = eax_96
            while (eax_96 s< var_428_1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
