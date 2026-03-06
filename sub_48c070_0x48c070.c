// 函数名称: sub_48c070
// 虚拟地址: 0x48c070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_48c070(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi = arg3
    void* ecx_2 = arg2 * 0xb4 + edi
    int32_t var_3b4 = edi
    int32_t var_3a4 = 0
    int32_t result = 0
    int32_t var_6c
    __builtin_memset(&var_6c, 0, 0x60)
    
    if (edi == 0)
        sub_49b2a0()
        noreturn
    
    if (arg2 s< 0)
        sub_49b2a0()
        noreturn
    
    int32_t i = sx.d(*(ecx_2 + 0x44))
    int32_t edx = 0
    
    if (i s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i != 0xffffffff)
        i = sx.d(*(edi + ((i * 5 + 0x11d) << 2)))
        edx += 1
    
    int32_t var_3a0 = sx.d(*(ecx_2 + 0xa3))
    int32_t i_1 = sx.d(*(ecx_2 + 0x46))
    int32_t var_3bc = sx.d(*(ecx_2 + 0xae)) - sx.d(*(ecx_2 + 0xb0)) + edx
    int32_t i_9 = i_1
    void var_390
    void var_38c
    int32_t var_50
    int32_t var_24
    
    while (i_1 != 0xffffffff)
        int32_t eax_6 = i_1 * 5
        void* esi_1 = *(edi + (eax_6 << 2) + 0x46c)
        
        if ((*(esi_1 + 0x10) & 2) != 0)
            int32_t ecx_3 = sx.d(*(esi_1 + 0xe))
            (&var_6c)[ecx_3] += 1
        
        if (arg4 == 0)
            void* eax_7
            eax_7.b = *(edi + (eax_6 << 2) + 0x472)
            
            if (eax_7.b != 0)
                int32_t ecx_5 = sx.d(*(esi_1 + 0xe))
                (&var_24)[ecx_5] += sx.d(eax_7.b)
        
        int32_t j_3 = 0
        
        if (*(esi_1 + 0x15) s> 0)
            void* esi_2 = esi_1 + 0x20
            int32_t j
            
            do
                if (*(esi_2 - 8) != 4)
                label_48c31f:
                    
                    if (arg4 != 0 && *(esi_2 - 8) == 5)
                        int32_t eax_29 = *esi_2
                        int32_t var_3c4_3 = *(esi_2 + 4)
                        
                        if ((eax_29 & 1) != 0)
                            int32_t eax_30 = sx.d(*(esi_1 + 0xe))
                            (&var_24)[eax_30] += 1
                        else if ((eax_29 & 0x80) == 0)
                            if ((eax_29 & 2) != 0)
                                var_50 += 1
                            
                            if ((eax_29 & 4) != 0)
                                int32_t var_4c_1 = var_4c_1 + 1
                            
                            if ((eax_29 & 8) != 0)
                                int32_t var_48_1 = var_48_1 + 1
                            
                            if ((eax_29 & 0x10) != 0)
                                int32_t var_44_1 = var_44_1 + 1
                            
                            if ((eax_29 & 0x20) != 0)
                                int32_t var_40_1 = var_40_1 + 1
                else
                    int32_t eax_9 = *esi_2
                    int32_t var_3c4_1 = *(esi_2 + 4)
                    
                    if ((eax_9 & 0x40000000) != 0)
                        result += sx.d(*(esi_2 + 8))
                    else if ((eax_9 & 0x1000000) != 0)
                        if ((eax_9 & 0x10100000) == 0)
                            int32_t edi_1 = 1
                            
                            if ((eax_9 & 0x10000) != 0)
                                edi_1 = 2
                            
                            void var_38e
                            *(&var_38e + (var_3a4 << 3)) = j_3.b
                            *(&var_390 + (var_3a4 << 3)) = i_9.w
                            *(&var_38c + (var_3a4 << 3)) = esi_2 - 8
                            int32_t ecx_23 = *esi_2
                            var_3a4 += 1
                            int32_t var_3c4_2 = *(esi_2 + 4)
                            int32_t var_34_1
                            
                            if ((ecx_23 & 0x800) != 0)
                                var_34_1 += edi_1
                            
                            int32_t var_30_1
                            
                            if ((ecx_23 & 0x1000) != 0)
                                var_30_1 += edi_1
                            
                            int32_t var_2c_1
                            
                            if ((ecx_23 & 0x2000) != 0)
                                var_2c_1 += edi_1
                            
                            int32_t var_28_1
                            
                            if ((ecx_23 & 0x4000) != 0)
                                var_28_1 += edi_1
                            
                            if ((ecx_23 & 0x60000) != 0)
                                var_34_1 += 1
                                var_30_1 += 1
                                var_2c_1 += 1
                                var_28_1 += 1
                            
                            goto label_48c31f
                        
                        if (arg4 != 0)
                            if ((eax_9 & 0x10000000) != 0 && var_3bc s>= sx.d(*(esi_2 + 9)))
                                int32_t ecx_21 = sx.d(*(esi_2 + 9))
                                result += ecx_21
                                var_3bc -= ecx_21
                            
                            if ((eax_9 & 0x100000) != 0 && var_3a0 != 0)
                                result += sx.d(*(esi_2 + 8))
                                var_3a0 -= 1
                
                j = j_3 + 1
                esi_2 += 0x18
                j_3 = j
            while (j s< sx.d(*(esi_1 + 0x15)))
            edi = var_3b4
            i_1 = i_9
        
        i_1 = sx.d(*(edi + ((i_1 * 5 + 0x11d) << 2)))
        i_9 = i_1
    
    if (arg4 != 0)
        var_50 += 1
    
    for (int32_t i_2 = 0; i_2 s<= 0x10; i_2 += 4)
        int32_t var_68
        int32_t ecx_46 = *(&var_68 + i_2)
        
        if (ecx_46 != 0)
            int32_t eax_36 = *(&var_50 + i_2)
            
            if (eax_36 != 0)
                int32_t var_20
                
                if (eax_36 s<= ecx_46)
                    *(&var_20 + i_2) += eax_36
                    *(&var_68 + i_2) = ecx_46 - eax_36
                    *(&var_50 + i_2) = 0
                else
                    *(&var_20 + i_2) += ecx_46
                    *(&var_50 + i_2) = eax_36 - ecx_46
                    *(&var_68 + i_2) = 0
    
    int32_t edx_7 = var_50
    int32_t i_3 = 1
    int32_t var_3c
    
    if (edx_7 s> 0)
        while (i_3 != 0)
            i_3 = 0
            
            for (int32_t j_1 = 2; j_1 s<= 5; j_1 += 1)
                if ((&var_6c)[j_1] != 0 && (&var_3c)[j_1] s> (&var_24)[j_1])
                    (&var_24)[j_1] += 1
                    edx_7 -= 1
                    (&__saved_ebp)[j_1 - 0x1a] -= 1
                    i_3 = 1
                    break
            
            if (edx_7 s<= 0)
                break
    
    int32_t i_4 = 1
    
    if (edx_7 s> 0)
        while (i_4 != 0)
            i_4 = 0
            
            for (int32_t j_2 = 2; j_2 s<= 5; j_2 += 1)
                if ((&var_6c)[j_2] != 0)
                    (&var_24)[j_2] += 1
                    edx_7 -= 1
                    (&__saved_ebp)[j_2 - 0x1a] -= 1
                    i_4 = 1
                    break
            
            if (edx_7 s<= 0)
                break
    
    sub_5a7ac0(&var_390, var_3a4, 8, sub_48bf80)
    int32_t eax_40 = 0
    int32_t var_398_1 = 0
    
    if (var_3a4 s> 0)
        do
            void* edi_4 = *(&var_38c + (eax_40 << 3))
            int32_t eax_41 = sx.d(*(edi_4 + 0x11))
            void* var_3b4_1 = edi_4
            int32_t var_39c_2 = 0
            
            if (eax_41 s> 0)
                int32_t esi_3 = *(edi_4 + 8)
                int32_t ecx_49 = esi_3 & 0x10000
                int32_t ebx_4 = esi_3 & 0x800
                int32_t var_3ac = *(edi_4 + 0xc)
                int32_t var_3c8_1 = ecx_49
                int32_t var_3c0_1 = ebx_4
                
                while (true)
                    int32_t i_7 = 1
                    
                    if (ecx_49 != 0)
                        i_7 = 2
                    
                    int32_t ecx_51 = 0
                    
                    if (ebx_4 != 0)
                        ecx_51 = 2
                    
                    if ((esi_3 & 0x1000) != 0)
                        ecx_51 = 3
                    
                    if ((esi_3 & 0x2000) != 0)
                        ecx_51 = 4
                    
                    if ((esi_3 & 0x4000) == 0)
                        if (ecx_51 != 0)
                            goto label_48c5b8
                        
                        int32_t ebx_12 = 0
                        int32_t var_3ac_1 = 0
                        
                        for (int32_t i_5 = 2; i_5 s<= 5; i_5 += 1)
                            int32_t eax_51 = (&var_24)[i_5]
                            ebx_12 += eax_51
                            
                            if (eax_51 != 0)
                                var_3ac_1 += 1
                        
                        if ((esi_3 & 0x400) != 0)
                            if (ebx_12 s< i_7)
                                break
                            
                            for (int32_t i_6 = 2; i_6 s<= 5; i_6 += 1)
                                int32_t ecx_52 = (&var_24)[i_6]
                                
                                if (ecx_52 != 0 && (&var_3c)[i_6] == 0)
                                    int32_t i_10 = i_7
                                    i_7 -= 1
                                    (&var_24)[i_6] = ecx_52 - 1
                                    
                                    if (i_10 == 1)
                                        break
                                    
                                    i_6 -= 1
                            
                            int32_t ecx_54 = 2
                            
                            while (i_7 != 0)
                                int32_t eax_55 = (&var_24)[ecx_54]
                                
                                if (eax_55 != 0)
                                    int32_t i_11 = i_7
                                    i_7 -= 1
                                    (&var_24)[ecx_54] = eax_55 - 1
                                    
                                    if (i_11 == 1)
                                        break
                                    
                                    ecx_54 -= 1
                                
                                ecx_54 += 1
                                
                                if (ecx_54 s> 5)
                                    break
                            
                            result += sx.d(*(edi_4 + 0x10))
                        
                        if ((esi_3 & 0x20000) != 0)
                            int32_t edx_9 = 3
                            
                            if (var_3ac_1 s< 3)
                                break
                            
                            for (int32_t i_8 = 2; i_8 s<= 5; i_8 += 1)
                                int32_t eax_61 = (&var_24)[i_8]
                                
                                if (eax_61 != 0)
                                    int32_t temp0_1 = edx_9
                                    edx_9 -= 1
                                    (&var_24)[i_8] = eax_61 - 1
                                    
                                    if (temp0_1 == 1)
                                        break
                            
                            result += sx.d(*(edi_4 + 0x10))
                        
                        if ((esi_3 & 0x40000) != 0)
                            int32_t var_1c_1
                            
                            if (var_1c_1 != 0)
                                result += sx.d(*(edi_4 + 0x10))
                                var_1c_1 -= 1
                            
                            int32_t var_18_1
                            
                            if (var_18_1 != 0)
                                result += sx.d(*(edi_4 + 0x10))
                                var_18_1 -= 1
                            
                            int32_t var_14_1
                            
                            if (var_14_1 != 0)
                                result += sx.d(*(edi_4 + 0x10))
                                var_14_1 -= 1
                            
                            int32_t var_10_1
                            
                            if (var_10_1 != 0)
                                result += sx.d(*(edi_4 + 0x10))
                                var_10_1 -= 1
                        
                        if ((esi_3 & 0x80000) != 0)
                            if (ebx_12 s< 2)
                                break
                            
                            result = result + ebx_12 - 1
                    else
                        ecx_51 = 5
                    label_48c5b8:
                        int32_t eax_48 = (&var_24)[ecx_51]
                        
                        if (eax_48 s< i_7)
                            break
                        
                        result += sx.d(*(edi_4 + 0x10))
                        edi_4 = var_3b4_1
                        (&var_3c)[ecx_51] -= i_7
                        (&var_24)[ecx_51] = eax_48 - i_7
                    
                    int32_t eax_72 = var_39c_2 + 1
                    var_39c_2 = eax_72
                    
                    if (eax_72 s>= eax_41)
                        break
                    
                    ecx_49 = var_3c8_1
                    ebx_4 = var_3c0_1
            
            eax_40 = var_398_1 + 1
            var_398_1 = eax_40
        while (eax_40 s< var_3a4)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
