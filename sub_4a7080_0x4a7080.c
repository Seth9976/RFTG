// 函数名称: sub_4a7080
// 虚拟地址: 0x4a7080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a7080(int32_t arg1, int32_t* arg2, char* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* var_814 = arg3
    void* eax_5 = &arg2[arg5 * 5 + 0x119]
    int32_t* var_834 = &arg2[arg3 * 0x2d + 8]
    int32_t* ecx_2 = *(eax_5 + 8)
    int32_t ebx = sx.d(*(ecx_2 + 0x15))
    void* var_82c = nullptr
    void* var_820 = nullptr
    int32_t var_830 = 0
    void* var_824 = nullptr
    void* var_818 = nullptr
    int32_t var_810
    void* edx
    
    if (ebx s> 0)
        void* var_838_1 = *ecx_2
        void* edi_1 = &ecx_2[8]
        
        do
            var_82c = edi_1 - 8
            
            if (*(edi_1 - 8) == 3)
                int32_t var_848_1 = *edi_1
                eax_5 = *(edi_1 + 4)
                int32_t ecx_3 = eax_5 & 8
                
                if (ecx_3 != 0)
                    break
                
                int32_t ecx_4 = ecx_3 | (eax_5 & 0x20)
                
                if (ecx_4 != 0)
                    eax_5 = var_838_1
                    var_830 = sx.d(*(var_82c + 0x10))
                    edx = &var_810 - eax_5
                    char i
                    
                    do
                        i = *eax_5
                        *(edx + eax_5) = i
                        eax_5 += 1
                    while (i != 0)
                    break
                
                if ((ecx_4 | (eax_5 & 0x14)) != 0)
                    eax_5 = *(var_82c + 0xc) & 0x40
                    
                    if (eax_5 != 0)
                        eax_5 = var_838_1
                        var_830 = 2
                        edx = &var_810 - eax_5
                        int32_t ecx_8
                        
                        do
                            ecx_8.b = *eax_5
                            *(edx + eax_5) = ecx_8.b
                            eax_5 += 1
                        while (ecx_8.b != 0)
                    
                    break
            
            eax_5 = var_818 + 1
            edi_1 += 0x18
            var_818 = eax_5
        while (eax_5 s< ebx)
    
    int32_t edi_3 = arg4
    int32_t ecx_9 = edi_3 * 5
    edx.b = *(&arg2[ecx_9] + 0x465)
    char* ebx_1 = &arg2[ecx_9 + 0x119]
    char* var_818_1 = ebx_1
    
    if (edx.b == ebx_1[3])
        eax_5.b = *ebx_1
    
    if (edx.b == ebx_1[3] && eax_5.b == ebx_1[2])
        if (arg6 == 0)
            void* eax_17 = sub_4a0d70(eax_5, sx.d(eax_5.b), arg2, edi_3, 0xffffffff, 1)
            var_820 = eax_17
            eax_5, ecx_9 = sub_4a0d70(eax_17, var_814, arg2, edi_3, arg5, 0)
            var_824 = eax_5
        
        goto label_4a72c6
    
    arg6 = 1
    
    if (arg2[6].b != 0)
    label_4a7329:
        
        if (arg6 != 0)
            goto label_4a7380
        
        goto label_4a7335
    
    int32_t var_85c_1 = **(ebx_1 + 8)
    char var_410[0x404]
    sub_5a733b(&var_410, "Takeover of %s is defeated because the world has been moved.\n")
    char const* const var_85c_2 = "takeover"
    char (* var_860_1)[0x404] = &var_410
    int32_t eax_13 = sub_4c5680("%s (%s)")
    char* edx_4 = var_814
    char (* var_85c_3)[0x404] = &var_410
    sub_4591b0(eax_13, edx_4, arg2, edx_4)
    int32_t edx_5 = sx.d(ebx_1[2])
    int32_t var_864_2 = 0
    int32_t var_868_1 = arg4
    eax_5, ecx_9 = sub_458fa0(var_814, 2, edx_5, arg5, sx.d(*(arg2 + 0x1ec2)), edx_5, arg5)
    edi_3 = arg4
    ebx_1 = var_818_1
    label_4a72c6:
    
    if (arg2[6].b != 0)
        goto label_4a7329
    
    if (arg6 != 0)
        goto label_4a7380
    
    void* var_85c_4 = var_824
    int32_t var_860_4 = **(ebx_1 + 8)
    int32_t var_864_5 = *var_834
    sub_5a733b(&var_410, "%s attacks %s with %d military.\n")
    char (* var_85c_6)[0x404] = &var_410
    eax_5 = sub_4591b0(&var_410, sub_4c5680(&var_410), arg2, var_814)
    label_4a7335:
    
    if (var_824 s< var_820)
    label_4a7372:
        eax_5, ecx_9 = sub_4a0d70(eax_5, sx.d(*ebx_1), arg2, edi_3, 0xffffffff, 1)
        var_820 = eax_5
    label_4a7380:
        void* edx_46 = *(ebx_1 + 8)
        
        if ((*(edx_46 + 0x10) & 1) == 0)
            if (var_830 == 0)
                __builtin_strcpy(&var_810, "Imperium Invasion Fleet")
            else
                void* edi_4 = &var_814:3
                
                do
                    eax_5.b = *(edi_4 + 1)
                    edi_4 += 1
                while (eax_5.b != 0)
                
                char* esi_1
                char* edi_5
                edi_5, esi_1 = __builtin_strncpy(edi_4, " and Imperium Invasion Fleet", 0x1c)
                *edi_5 = *esi_1
            
            var_830 += 2
            edi_3 = arg4
            ebx_1 = var_818_1
        
        if (arg2[6].b != 0)
            if (arg6 == 0)
                goto label_4a7484
            
        label_4a78ce:
            
            if (arg2[6].b == 0)
                void* var_85c_26 = var_820
                void* var_860_18 = var_824
                sub_49c510(var_814, edx_46, arg5, arg5, arg4)
                int32_t var_86c_8 = **(var_818_1 + 8)
                int32_t var_870_6 = *var_834
                sub_5a733b(&var_410, "%s fails to takeover %s.\n")
                char const* const var_87c_1 = "takeover"
                char (* var_880_1)[0x404] = &var_410
                char (* var_85c_27)[0x404] = &var_410
                sub_4591b0(&var_410, sub_4c5680("%s (%s)"), arg2, var_814)
                void* var_864_13 = var_824
                int32_t var_868_8 = arg4
                int32_t edx_51 = sx.d(var_818_1[2])
                sub_458fa0(var_814, 3, edx_51, var_818_1, sx.d(*(arg2 + 0x1ec2)), edx_51, arg5)
        else
            if (arg6 != 0)
                goto label_4a78ce
            
            void* var_85c_8 = var_820
            int32_t var_860_7 = *edx_46
            int32_t var_864_8 = arg2[sx.d(*ebx_1) * 0x2d + 8]
            sub_5a733b(&var_410, "%s defends %s with %d military.\n")
            char (* var_85c_10)[0x404] = &var_410
            sub_4591b0(&var_410, sub_4c5680(&var_410), arg2, var_814)
        label_4a7484:
            edx_46 = var_820
            
            if (var_824 s< edx_46)
                goto label_4a78ce
            
            if (var_830 != 0)
                char* eax_26 = var_814
                sub_49d110(eax_26, edx_46, &var_810, arg2, eax_26)
                edi_3 = arg4
                ebx_1 = var_818_1
            
            int32_t ecx_29 = *(var_82c + 0xc) & 0x40
            
            if (ecx_29 == 0)
                int32_t var_85c_20 = 3
                sub_49cc30(arg2, edi_3, ecx_29, var_814)
                ecx_29.b = *(var_834 + 0x96)
                ebx_1[0xf] = ecx_29.b
                *(var_834 + 0x96) += 1
                
                if (arg2[6].b == 0)
                    char* edi_9 = var_814
                    int32_t var_85c_21 = arg5
                    sub_49c590(edi_9, arg5)
                    int32_t var_85c_22 = **(var_818_1 + 8)
                    int32_t var_860_13 = *var_834
                    sub_5a733b(&var_410, "%s takes over %s.\n")
                    char const* const var_86c_6 = "takeover"
                    char (* var_870_4)[0x404] = &var_410
                    char (* var_85c_23)[0x404] = &var_410
                    sub_4591b0(&var_410, sub_4c5680("%s (%s)"), arg2, edi_9)
                    void* var_864_11 = var_824
                    int32_t ecx_45 = sx.d(var_818_1[2])
                    int32_t var_868_6 = arg4
                    int32_t edx_38 = sx.d(*(arg2 + 0x1ec2))
                    sub_458fa0(var_814, 0, edx_38, ecx_45, edx_38, ecx_45, arg5)
                    edi_3 = arg4
                    ebx_1 = var_818_1
                
                if (ebx_1[0xe] != 0)
                    for (int32_t i_1 = sx.d(arg2[sx.d(var_818_1[2]) * 0x2d + 0x12].w); 
                            i_1 != 0xffffffff; i_1 = sx.d(arg2[i_1 * 5 + 0x11d].w))
                        if (sx.d(arg2[i_1 * 5 + 0x11c].w) == edi_3)
                            char* ecx_48 = var_814
                            int32_t var_85c_24 = 4
                            sub_49cc30(arg2, i_1, ecx_48, ecx_48)
                
                char* eax_56 = var_818_1
                int32_t ecx_49 = *(eax_56 + 8)
                
                if ((*(ecx_49 + 0x10) & 0x4000) != 0)
                    int32_t edi_10 = 0
                    
                    if (0 s< arg2[0x118].w)
                        void* ebx_10 = &arg2[0x11a]
                        
                        do
                            if (*(ebx_10 - 3) == 5)
                                int32_t var_85c_25 = 5
                                sub_49cc30(arg2, edi_10, ecx_49, var_814)
                                eax_56.w = 1 << var_814.b
                                *ebx_10 = (*ebx_10 & 0xffc0) | eax_56.w
                            
                            ecx_49 = sx.d(arg2[0x118].w)
                            edi_10 += 1
                            ebx_10 += 0x14
                        while (edi_10 s< ecx_49)
                
                sub_4a4f00(eax_56, var_814, arg2, arg4, 1)
                int32_t result
                result.b = *(arg2 + 0x1ec3) == 0
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return result
            
            if (arg2[6].b == 0)
                int32_t var_85c_12 = **(var_818_1 + 8)
                int32_t var_860_9 = *var_834
                sub_5a733b(&var_410, "%s destroys %s.\n")
                char const* const var_86c_4 = "takeover"
                char (* var_870_2)[0x404] = &var_410
                sub_4c5680("%s (%s)")
                char* eax_29 = var_814
                char (* var_85c_13)[0x404] = &var_410
                sub_4591b0(eax_29, &var_410, arg2, eax_29)
                void* var_864_9 = var_824
                int32_t ecx_33 = sx.d(var_818_1[2])
                int32_t var_868_3 = arg4
                int32_t edx_21 = sx.d(*(arg2 + 0x1ec2))
                ecx_29 = sub_458fa0(var_814, 1, edx_21, ecx_33, edx_21, ecx_33, arg5)
                edi_3 = arg4
                ebx_1 = var_818_1
            
            int32_t var_85c_14 = 1
            char* ecx_35 =
                sub_4a4f00(sub_49cc30(arg2, edi_3, ecx_29, 0xffffffff), var_814, arg2, edi_3, 1)
            
            if (*(arg2 + 0x1ec3) == 0)
                if ((*(*(ebx_1 + 8) + 0x10) & 0x4000) != 0)
                    int32_t i_2 = 0
                    
                    if (0 s< arg2[0x118].w)
                        void* var_82c_1 = arg2 + 0x465
                        
                        do
                            if (*var_82c_1 == 5)
                                if (arg2[6].b == 0)
                                    ecx_35 = var_814
                                    sub_49c090(ecx_35)
                                
                                int32_t var_85c_16 = 1
                                sub_49cc30(arg2, i_2, ecx_35, 0xffffffff)
                            
                            var_82c_1 += 0x14
                            i_2 += 1
                        while (i_2 s< sx.d(arg2[0x118].w))
                
                if (var_818_1[0xe] != 0)
                    int32_t i_4 = sx.d(arg2[sx.d(var_818_1[2]) * 0x2d + 0x12].w)
                    
                    if (i_4 != 0xffffffff)
                        int32_t i_3 = i_4
                        
                        do
                            int32_t ecx_37 = sx.d(arg2[i_3 * 5 + 0x11c].w)
                            
                            if (ecx_37 == arg4)
                                if (arg2[6].b == 0)
                                    sub_49bf50(sx.d(var_818_1[2]))
                                
                                int32_t var_85c_18 = 1
                                sub_49cc30(arg2, i_3, ecx_37, 0xffffffff)
                            
                            i_3 = sx.d(arg2[i_3 * 5 + 0x11d].w)
                        while (i_3 != 0xffffffff)
                    
                    var_818_1[0xe] = 0
                
                if (arg2[6].b == 0)
                    void* var_85c_19 = var_820
                    void* var_860_11 = var_824
                    sub_49c3c0(var_814, arg5, var_824, arg5)
                
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 1
    else
        *ebx_1
        eax_5 = sub_4a6bf0(arg2, edi_3, arg5, var_824 - var_820)
        
        if (*(arg2 + 0x1ec3) == 0)
            goto label_4a7372
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
