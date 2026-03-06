// 函数名称: sub_4a1120
// 虚拟地址: 0x4a1120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4a1120(void* arg1 @ edi, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t entry_ebx
    void* ecx_2 = entry_ebx * 0xb4 + arg1
    int32_t edx = arg2 * 5
    void var_330
    void* var_8b4 = &var_330
    int32_t var_8b8 = 3
    int32_t var_884 = 0
    int32_t var_88c = 0
    int32_t eax_5 = sub_49dea0(entry_ebx, edx, ecx_2, arg1)
    void* eax_6 = *(arg1 + (edx << 2) + 0x46c)
    int32_t ecx_3 = sx.d(*(eax_6 + 7))
    int32_t var_86c = ecx_3
    int32_t var_85c = ecx_3
    int32_t eax_7 = sx.d(*(eax_6 + 0xe))
    int32_t ecx_5 = *(eax_6 + 0x10) & 1
    int32_t var_854 = sub_4b1530(eax_7, arg1 + (edx << 2) + 0x464, arg1, entry_ebx)
    int32_t var_888 = 0
    int32_t var_880 = 0
    int32_t var_874 = 0
    int32_t var_870 = 0
    int32_t var_898 = 0
    int32_t var_868 = 0
    
    if (arg1 == 0)
        sub_49b2a0()
        noreturn
    
    if (entry_ebx s< 0)
        sub_49b2a0()
        noreturn
    
    int32_t i = sx.d(*(ecx_2 + 0x44))
    int32_t ecx_7 = 0
    
    if (i s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i != 0xffffffff)
        i = sx.d(*(arg1 + ((i * 5 + 0x11d) << 2)))
        ecx_7 += 1
    
    int32_t ecx_8 = sx.d(*(ecx_2 + 0xae)) - sx.d(*(ecx_2 + 0xb0)) + ecx_7 - 1
    int32_t var_87c = ecx_8
    
    if (arg6 != 0)
        var_87c = ecx_8 + 1
    label_4a1251:
        int32_t eax_12 = sx.d(*(arg1 + 0x1ec0)) | 0x80
        
        if (eax_12 s>= 0)
            bool cond:1_1
            
            if (eax_12.b s< 0)
                if (*(ecx_2 + 0x2c) != eax_12)
                    cond:1_1 = *(ecx_2 + 0x30) != eax_12
                    goto label_4a1293
                
                var_85c = var_86c - 3
            else if ((*(ecx_2 + 0x2c) & 0x7f) == eax_12)
                var_85c = var_86c - 3
            else
                cond:1_1 = (*(ecx_2 + 0x30) & 0x7f) != eax_12
            label_4a1293:
                
                if (not(cond:1_1))
                    var_85c = var_86c - 3
        
        int32_t var_878_1 = 0
        
        if (eax_5 s> 0)
            int32_t eax_36
            
            do
                int32_t var_32c[0xc8]
                void* esi_1 = var_32c[var_878_1 * 2]
                int32_t eax_15 = *(esi_1 + 8)
                int32_t var_8a4_1 = *(esi_1 + 0xc)
                
                if ((eax_15 & 1) == 0)
                    goto label_4a1384
                
                if (((eax_15 & 2) == 0 || eax_7 == 2) && ((eax_15 & 4) == 0 || eax_7 == 3)
                        && ((eax_15 & 8) == 0 || eax_7 == 4) && ((eax_15 & 0x10) == 0 || eax_7 == 5))
                    int32_t eax_17 = eax_15 & 0x20000000
                    void var_850
                    int32_t eax_18
                    
                    if (eax_17 != 0)
                        var_884 += 1
                        eax_18 = sub_49db70(eax_17, &var_850, entry_ebx, arg1, &var_850, 4)
                    
                    if (eax_17 == 0 || eax_18 s>= var_884)
                        var_85c -= sx.d(*(esi_1 + 0x10))
                    label_4a1384:
                        int32_t eax_20 = *(esi_1 + 8)
                        int32_t var_8a4_2 = *(esi_1 + 0xc)
                        
                        if ((eax_20 & 0x40) == 0)
                            goto label_4a13b5
                        
                        if (eax_7 != 5)
                            var_85c = 0
                        label_4a13b5:
                            
                            if ((eax_20 & 0x100) == 0)
                            label_4a1513:
                                
                                if ((eax_20 & 0x4000) == 0)
                                label_4a15ad:
                                    
                                    if ((eax_20 & 0x8000) != 0)
                                        var_880 += sx.d(*(esi_1 + 0x10))
                                    
                                    if ((eax_20 & 0x80) != 0)
                                        int32_t ecx_88 = var_868 + sx.d(*(esi_1 + 0x10))
                                        var_868 = ecx_88
                                        
                                        if (ecx_88 s> var_87c)
                                            var_868 = var_87c
                                    
                                    if ((eax_20 & 0x20000) != 0)
                                        int32_t eax_34 = sx.d(*(esi_1 + 0x10))
                                        var_898 = 1
                                        
                                        if (eax_34 s> var_870)
                                            var_870 = eax_34
                                else if ((eax_20 & 0x10) == 0)
                                    if (eax_7 != 5)
                                    label_4a154a:
                                        
                                        if (((eax_20 & 0x200) == 0
                                                || (*(*(arg1 + (edx << 2) + 0x46c) + 0x10) & 0x40)
                                                != 0) && ((eax_20 & 0x400) == 0
                                                || (*(*(arg1 + (edx << 2) + 0x46c) + 0x10) & 0x800)
                                                != 0))
                                            int32_t ecx_80 = sx.d(*(esi_1 + 0x10))
                                            var_888 = 1
                                            
                                            if (ecx_80 s> var_874)
                                                var_874 = ecx_80
                                            
                                            goto label_4a15ad
                                else if (eax_7 == 5)
                                    goto label_4a154a
                            else if (((eax_20 & 2) == 0 || eax_7 != 2)
                                    && ((eax_20 & 4) == 0 || eax_7 != 3)
                                    && ((eax_20 & 8) == 0 || eax_7 != 4)
                                    && ((eax_20 & 0x10) == 0 || eax_7 != 5))
                                int32_t eax_24
                                
                                if ((eax_20 & 0x10000000) != 0)
                                    eax_24 = sub_49db70(&var_850, 0, entry_ebx, arg1, &var_850, 3)
                                
                                if ((eax_20 & 0x10000000) == 0 || eax_24 s<= var_88c)
                                    int32_t eax_27 = *(esi_1 + 8) & 0x40000000
                                    int32_t eax_28
                                    
                                    if (eax_27 != 0)
                                        eax_28 =
                                            sub_49db70(eax_27, &var_850, entry_ebx, arg1, &var_850, 5)
                                    
                                    if (eax_27 == 0 || eax_28 s<= 0)
                                        eax_20 = *(esi_1 + 8)
                                        int32_t var_8a4_3 = *(esi_1 + 0xc)
                                        
                                        if ((eax_20 & 0x80000000) != 0 && *(ecx_2 + 0xa3) s> 0)
                                            var_854 += sx.d(*(esi_1 + 0x10))
                                        else if ((eax_20 & 0x200) == 0
                                                || (*(*(arg1 + (edx << 2) + 0x46c) + 0x10) & 0x40)
                                                == 0)
                                            if ((eax_20 & 0x20) == 0)
                                                goto label_4a1513
                                            
                                            var_854 += sx.d(*(esi_1 + 0x10))
                                        else
                                            var_854 += sx.d(*(esi_1 + 0x10))
                                    else
                                        var_854 += sx.d(*(esi_1 + 0x10))
                                else
                                    var_88c += 1
                                    var_854 += sx.d(*(esi_1 + 0x10))
                            else
                                var_854 += sx.d(*(esi_1 + 0x10))
                
                eax_36 = var_878_1 + 1
                var_878_1 = eax_36
            while (eax_36 s< eax_5)
        
        if (arg5 != 0)
            if (ecx_5 != 0)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return var_888
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 1
        
        int32_t var_854_1 = var_854 + sx.d(*(ecx_2 + 0x62)) + arg3
        
        if (arg6 != 0)
            var_86c = sub_4a0d70(arg1 + (edx << 2) + 0x464, sx.d(*(arg1 + (edx << 2) + 0x464)), arg1, 
                arg2, 0xffffffff, 1)
        
        int32_t ecx_94
        
        if (ecx_5 != 0)
            ecx_94 = var_868
        label_4a16a0:
            
            if (ecx_94 + var_854_1 s>= var_86c)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 1
        else if (var_898 != 0)
            ecx_94 = var_868 + var_870
            goto label_4a16a0
        
        if (arg6 == 0)
            int32_t eax_42
            
            eax_42 = arg4 == 0 ? var_888 : 0
            
            if (ecx_5 == 0)
                goto label_4a170c
            
            if (eax_42 != 0)
                var_85c -= var_880 + var_874
            label_4a170c:
                int32_t eax_43 = 0
                
                if (arg4 == 0)
                    eax_43.b = var_87c s>= var_85c
                
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_43
    else if (ecx_8 s>= 0)
        goto label_4a1251
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
