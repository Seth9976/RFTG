// 函数名称: sub_4ae0d0
// 虚拟地址: 0x4ae0d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4ae0d0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = 0
    int32_t edx = 0
    int32_t var_34c = 0
    
    if (arg4 u> 0x13)
    label_4ae366:
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t var_24
    
    switch (arg4)
        case 0
            int32_t eax_3 = sx.d(*(arg2 * 0xb4 + arg3 + 0xa6))
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_3
        case 1
            int32_t i = sx.d(*(arg2 * 0xb4 + arg3 + 0x46))
            int32_t var_20
            __builtin_memset(&var_20, 0, 0x14)
            
            if (i != 0xffffffff)
                do
                    void* eax_6 = *(arg3 + i * 0x14 + 0x46c)
                    
                    if (*(eax_6 + 6) == 1)
                        (&var_24)[sx.d(*(eax_6 + 0xe))] = 1
                    
                    i = sx.d(*(arg3 + ((i * 5 + 0x11d) << 2)))
                while (i != 0xffffffff)
                
                int32_t eax_8 = 1
                
                if (var_20 == 0)
                    eax_8 = 0
                
                int32_t var_1c
                
                if (var_1c != 0)
                    eax_8 += 1
                
                int32_t var_18
                
                if (var_18 != 0)
                    eax_8 += 1
                
                int32_t var_14
                
                if (var_14 != 0)
                    eax_8 += 1
                
                int32_t var_10
                
                if (var_10 != 0)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return eax_8 + 1
                
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_8
        case 2
            int32_t eax_10 = sub_49c940(arg2, 0x100, arg3)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_10
        case 3
            int32_t eax_11 = sx.d(*(arg2 * 0xb4 + arg3 + 0x66))
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_11
        case 4
            int32_t ecx_13 = sx.d(*(arg2 * 0xb4 + arg3 + 0x46))
            __builtin_memset(&var_24, 0, 0x18)
            int32_t var_350 = ecx_13
            
            if (ecx_13 != 0xffffffff)
                while (true)
                    void* eax_14 = *(arg3 + ecx_13 * 0x14 + 0x46c)
                    int32_t edi_1 = sx.d(*(eax_14 + 0x15))
                    int32_t ebx_1 = 0
                    
                    if (edi_1 s> 0)
                        void* eax_15 = eax_14 + 0x18
                        
                        while (true)
                            edx.b = *eax_15
                            
                            if (edx.b s>= 6 || edx.b s<= 0)
                                sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\engine.cpp", 0x33c2, 
                                    "check_goal_player")
                                
                                if (IsDebuggerPresent() != 1)
                                    sub_4c5a30()
                                    noreturn
                                
                                breakpoint
                            
                            if (edx.b != 4 || zx.d(*(eax_15 + 8)) == 0)
                                (&var_24)[sx.d(edx.b)] = 1
                            else
                                var_24 = 1
                            
                            ebx_1 += 1
                            eax_15 += 0x18
                            
                            if (ebx_1 s< edi_1)
                                continue
                            
                            ecx_13 = var_350
                            break
                    
                    ecx_13 = sx.d(*(arg3 + ((ecx_13 * 5 + 0x11d) << 2)))
                    var_350 = ecx_13
                    
                    if (ecx_13 == 0xffffffff)
                        break
                
                if (var_24 != 0)
                    var_34c = 1
                
                int32_t var_20_1
                
                if (var_20_1 != 0)
                    var_34c += 1
                
                int32_t var_1c_1
                
                if (var_1c_1 != 0)
                    var_34c += 1
                
                int32_t var_18_1
                
                if (var_18_1 != 0)
                    var_34c += 1
                
                int32_t var_14_1
                
                if (var_14_1 != 0)
                    var_34c += 1
                
                int32_t var_10_1
                
                if (var_10_1 != 0)
                    var_34c += 1
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return var_34c
        case 5
            int32_t i_1 = sx.d(*(arg2 * 0xb4 + arg3 + 0x46))
            
            if (i_1 != 0xffffffff)
                edx = 1
                
                do
                    void* ecx_22 = *(arg3 + i_1 * 0x14 + 0x46c)
                    
                    if (*(ecx_22 + 6) != 1 && *(ecx_22 + 7) == 6 && *(ecx_22 + 0x90) != 0)
                        goto label_4ae3dc
                    
                    i_1 = sx.d(*(arg3 + ((i_1 * 5 + 0x11d) << 2)))
                while (i_1 != 0xffffffff)
            
            goto label_4ae366
        case 6
            int32_t eax_19 = sub_49c940(arg2, 0x80, arg3)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_19
        case 7
            for (int32_t i_2 = sx.d(*(arg2 * 0xb4 + arg3 + 0x46)); i_2 != 0xffffffff; 
                    i_2 = sx.d(*(arg3 + ((i_2 * 5 + 0x11d) << 2))))
                int32_t eax_20 = i_2 * 5
                
                if (*(*(arg3 + (eax_20 << 2) + 0x46c) + 6) == 1 && *(arg3 + (eax_20 << 2) + 0x472) != 0)
                    edx += 1
        case 8
            int32_t eax_23 = sub_49c8f0(arg4, arg3, arg2, 3)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_23
        case 9
            int32_t i_3 = sx.d(*(arg2 * 0xb4 + arg3 + 0x46))
            
            if (i_3 == 0xffffffff)
                goto label_4ae366
            
            ebx = 1
            void* eax_24
            int32_t edx_2
            
            do
                edx_2 = i_3 * 5
                eax_24 = *(arg3 + (edx_2 << 2) + 0x46c)
                
                if (*(eax_24 + 6) == 1)
                    var_34c += 1
                
                i_3 = sx.d(*(arg3 + ((i_3 * 5 + 0x11d) << 2)))
            while (i_3 != 0xffffffff)
            
            if (var_34c s< 2)
                goto label_4ae366
            
            if (sub_4b1530(eax_24, edx_2, arg3, arg2) s< 0)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return ebx
            
            if (*(arg3 + 0x45c) != 0)
                goto label_4ae366
            
            int32_t eax_26
            int32_t ecx_37
            eax_26, ecx_37 = sub_49c940(arg2, 1, arg3)
            
            if (eax_26 s< 2)
                goto label_4ae366
            
            void var_348
            void* var_364_2 = &var_348
            int32_t var_368_1 = 3
            int32_t eax_28 = sub_49dea0(arg2, 1, ecx_37, arg3)
            int32_t esi_1 = 0
            
            if (eax_28 s<= 0)
                goto label_4ae366
            
            int32_t var_344[0xc8]
            
            while ((*(var_344[esi_1 * 2] + 0xc) & 0x3c) == 0)
                esi_1 += 1
                
                if (esi_1 s>= eax_28)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return ebx
        case 0xa
            if (*(arg2 * 0xb4 + arg3 + 0xa3) s< 2 || *(arg2 * 0xb4 + arg3 + 0xa6) s< 3)
                goto label_4ae366
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 1
        case 0xb
            if (sub_49c940(arg2, 0x400, arg3) s< 3 && sub_49c940(arg2, 1, arg3) s< 4)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 1
        case 0xc
            int32_t eax_34 = sub_4b1530(arg4, 0, arg3, arg2)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_34
        case 0xd
            for (int32_t i_4 = sx.d(*(arg2 * 0xb4 + arg3 + 0x46)); i_4 != 0xffffffff; 
                    i_4 = sx.d(*(arg3 + ((i_4 * 5 + 0x11d) << 2))))
                void* ecx_53 = *(arg3 + i_4 * 0x14 + 0x46c)
                
                if (*(ecx_53 + 6) == 1)
                    ecx_53.b = *(ecx_53 + 0xe)
                    
                    if (ecx_53.b == 2 || ecx_53.b == 3)
                        ebx += 1
                    
                    if (ecx_53.b == 1)
                        ecx_53.b = *(arg3 + 0x1eb4)
                        
                        if (ecx_53.b == 1 || ecx_53.b == 2 || ecx_53.b == 3)
                            ebx += 1
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return ebx
        case 0xe
            for (int32_t i_5 = sx.d(*(arg2 * 0xb4 + arg3 + 0x46)); i_5 != 0xffffffff; 
                    i_5 = sx.d(*(arg3 + ((i_5 * 5 + 0x11d) << 2))))
                if (*(*(arg3 + i_5 * 0x14 + 0x46c) + 6) != 1)
                    ebx += 1
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return ebx
        case 0xf
            for (int32_t i_6 = sx.d(*(arg2 * 0xb4 + arg3 + 0x46)); i_6 != 0xffffffff; 
                    i_6 = sx.d(*(arg3 + ((i_6 * 5 + 0x11d) << 2))))
                void* eax_40 = *(arg3 + i_6 * 0x14 + 0x46c)
                
                if (*(eax_40 + 6) == 1 && (*(eax_40 + 0x10) & 2) == 0 && *(eax_40 + 0xe) != 0)
                    ebx += 1
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return ebx
        case 0x10
            int32_t i_7 = sx.d(*(arg2 * 0xb4 + arg3 + 0x46))
            
            if (i_7 != 0xffffffff)
                int32_t ebx_2 = 0
                
                do
                    void* eax_43 = *(arg3 + i_7 * 0x14 + 0x46c)
                    int32_t edx_8 = sx.d(*(eax_43 + 0x15))
                    int32_t ecx_62 = 0
                    
                    if (edx_8 s> 0)
                        void* eax_44 = eax_43 + 0x18
                        
                        do
                            if (*eax_44 == 1)
                                ebx_2 += 1
                                break
                            
                            ecx_62 += 1
                            eax_44 += 0x18
                        while (ecx_62 s< edx_8)
                    
                    i_7 = sx.d(*(arg3 + ((i_7 * 5 + 0x11d) << 2)))
                while (i_7 != 0xffffffff)
                
                var_34c = ebx_2
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return var_34c
        case 0x11
            int32_t eax_47 = sub_49c940(arg2, 0x41, arg3)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_47
        case 0x12
            int32_t eax_48 = sx.d(*(arg2 * 0xb4 + arg3 + 0xa3))
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_48
        case 0x13
            int32_t i_8 = sx.d(*(arg2 * 0xb4 + arg3 + 0x46))
            int32_t i_9 = i_8
            
            while (i_8 != 0xffffffff)
                void* edx_10 = *(arg3 + i_8 * 0x14 + 0x46c)
                int32_t eax_50 = sx.d(*(edx_10 + 0x15))
                int32_t edi_4 = 0
                
                if (eax_50 s> 0)
                    void* edx_11 = edx_10 + 0x18
                    
                    do
                        if (*edx_11 == 4)
                            i_8 = i_9
                            
                            if (zx.d(*(edx_11 + 8)) == 0)
                                var_34c += 1
                                break
                        
                        edi_4 += 1
                        edx_11 += 0x18
                    while (edi_4 s< eax_50)
                
                i_8 = sx.d(*(arg3 + ((i_8 * 5 + 0x11d) << 2)))
                i_9 = i_8
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return var_34c
    
    label_4ae3dc:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return edx
}
