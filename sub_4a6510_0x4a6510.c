// 函数名称: sub_4a6510
// 虚拟地址: 0x4a6510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a6510(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t* arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* ebx = arg2
    int32_t edx = 0
    void* ecx_2 = ebx * 0xb4 + arg3
    char* var_944 = ebx
    int32_t var_93c = 0
    int32_t var_958 = 0
    void* var_934 = ecx_2
    char var_410[0x404]
    
    if (arg8 s> 0)
        int32_t* var_940_1 = arg7
        int32_t i_1 = arg8
        int32_t i
        
        do
            void* esi_1 = &arg3[*var_940_1 * 5 + 0x119]
            void* var_954_1 = esi_1
            
            if (*(*(esi_1 + 8) + 0x15) s> 0)
                int32_t ebx_1 = 0
                int32_t var_938_1 = 8
                int32_t var_950_1 = 0
                int32_t eax_28
                
                do
                    int32_t ecx_6 = *(esi_1 + 8)
                    void* ebx_2 = ebx_1 + ecx_6 + 0x18
                    void* var_960_1 = ebx_2
                    
                    if (*(ebx_1 + ecx_6 + 0x18) == 3)
                        if (*(ebx_2 + 8) == 0x120 && *(ebx_2 + 0xc) == 0)
                            int32_t var_984_1 = 1
                            sub_49cc30(arg3, *var_940_1, ecx_6, 0xffffffff)
                            
                            if (arg3[6].b == 0)
                                *var_940_1
                                sub_49be30(var_944)
                                int32_t var_984_3 = **(esi_1 + 8)
                                int32_t var_988_1 = *(var_934 + 0x20)
                                sub_5a733b(&var_410, "%s discards %s for extra military.\n")
                                sub_4c5680(&var_410)
                                char (* var_984_4)[0x404] = &var_410
                                ecx_6 = sub_4591b0(var_944, &var_410, arg3, var_944)
                            
                            sub_4ae7d0(ecx_6, var_944, 0xe, arg3)
                            void* ecx_7
                            ecx_7.b = *(var_960_1 + 0x10)
                            ebx_2 = var_960_1
                            esi_1 = var_954_1
                            var_93c += sx.d(ecx_7.b)
                            *(var_934 + 0x62) += ecx_7.b
                        
                        if ((*(ebx_2 + 8) & 0x80) != 0)
                            *(esi_1 + 4) |= 1 << var_938_1.b
                            var_958 += sx.d(*(ebx_2 + 0x10))
                        
                        void* eax_21
                        
                        if ((*(ebx_2 + 8) & 0x10000000) == 0)
                            eax_21 = var_934
                        else
                            *(esi_1 + 4) |= 1 << var_938_1.b
                            char ecx_10 = *(ebx_2 + 0x10)
                            var_93c += sx.d(ecx_10)
                            eax_21 = var_934
                            *(eax_21 + 0x62) += ecx_10
                        
                        if ((*(ebx_2 + 8) & 0x40000000) != 0)
                            *(esi_1 + 4) |= 1 << var_938_1.b
                            var_93c += sx.d(*(ebx_2 + 0x10))
                            int32_t ecx_15
                            ecx_15.b = *(ebx_2 + 0x10)
                            *(eax_21 + 0x62) += ecx_15.b
                            
                            if (arg3[6].b == 0)
                                int32_t var_984_5 = *(eax_21 + 0x20)
                                sub_5a733b(&var_410, "%s discards a Rare good for extra military.\n")
                                sub_4c5680(&var_410)
                                char (* var_984_7)[0x404] = &var_410
                                sub_4591b0(var_944, &var_410, arg3, var_944)
                                eax_21 = var_934
                        
                        if ((*(ebx_2 + 8) & 0x80000000) != 0)
                            *(esi_1 + 4) |= 1 << var_938_1.b
                            *(eax_21 + 0xa3) -= 1
                            int32_t edx_14 = sub_4ae7d0(var_938_1, var_944, 0x12, arg3)
                            
                            if (arg3[6].b == 0)
                                int32_t var_984_8 = 1
                                sub_49ba20(var_944, edx_14)
                            
                            void* eax_24
                            eax_24.b = *(var_960_1 + 0x10)
                            var_93c += sx.d(eax_24.b)
                            *(var_934 + 0x62) += eax_24.b
                            
                            if (arg3[6].b == 0)
                                int32_t var_984_9 = *(var_934 + 0x20)
                                sub_5a733b(&var_410, "%s spends prestige for extra military.\n")
                                char (* var_984_11)[0x404] = &var_410
                                sub_4591b0(&var_410, sub_4c5680(&var_410), arg3, var_944)
                            
                            esi_1 = var_954_1
                    
                    eax_28 = var_938_1 + 1
                    var_938_1 = eax_28
                    ebx_1 = var_950_1 + 0x18
                    var_950_1 = ebx_1
                while (eax_28 - 8 s< sx.d(*(*(esi_1 + 8) + 0x15)))
                ebx = var_944
                ecx_2 = var_934
                edx = var_958
            
            var_940_1 = &var_940_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_31 = arg6
    
    if (eax_31 s> edx - sx.d(*(ecx_2 + 0x64)))
    label_4a6895:
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    *(ecx_2 + 0x62) += eax_31.b
    int32_t var_93c_1 = var_93c + eax_31
    
    if (arg3[6].b == 0 && eax_31 s> 0)
        if (*(*(ecx_2 + 0x28) + 0x20) != 0)
            int32_t esi_2 = 0
            
            if (eax_31 s> 0)
                do
                    int32_t var_984_12 = *arg3[*(arg5 + (esi_2 << 2)) * 5 + 0x11b]
                    int32_t var_988_5 = *(ecx_2 + 0x20)
                    sub_5a733b(&var_410, "%s discards %s.\n")
                    (*(*(var_934 + 0x28) + 0x20))(arg3, ebx, &var_410, "discard")
                    ecx_2 = var_934
                    esi_2 += 1
                while (esi_2 s< arg6)
                
                eax_31 = arg6
        
        int32_t var_984_13 = eax_31
        int32_t var_988_6 = *(ecx_2 + 0x20)
        sub_5a733b(&var_410, "%s pays %d for extra military.\n")
        char (* var_984_14)[0x404] = &var_410
        sub_4591b0(&var_410, sub_4c5680(&var_410), arg3, ebx)
        eax_31 = arg6
        ecx_2 = var_934
    
    if (arg3[6].b == 0)
        int32_t esi_3 = 0
        
        if (eax_31 s> 0)
            do
                *(arg5 + (esi_3 << 2))
                sub_49bb40(ebx)
                int32_t var_984_16 = 1
                sub_49cc30(arg3, *(arg5 + (esi_3 << 2)), arg5, 0xffffffff)
                ebx = var_944
                esi_3 += 1
            while (esi_3 s< arg6)
    else
        *(ecx_2 + 0xb0) += eax_31.w
    
    int32_t var_950_2 = 0
    
    if (arg8 s> 0)
        int32_t* var_940_2 = arg7
        int32_t eax_60
        
        do
            int32_t edx_27 = *var_940_2 * 5
            void* eax_43 = &arg3[edx_27 + 0x119]
            void* eax_44 = *(eax_43 + 8)
            int32_t esi_4 = 0
            int32_t var_938_2 = 0
            
            if (*(eax_44 + 0x15) s> 0)
                int32_t var_94c_1 = 0
                int32_t ecx_38
                
                do
                    if (*(esi_4 + eax_44 + 0x18) == 3)
                        int32_t var_948
                        void var_930
                        
                        if ((*(esi_4 + eax_44 + 0x20) & 0x10000000) != 0)
                            int32_t eax_49
                            eax_49, edx_27 = sub_49db70(&var_930, edx_27, ebx, arg3, &var_930, 3)
                            var_948 = eax_49
                        
                        int32_t eax_52 = *(esi_4 + eax_44 + 0x20) & 0x40000000
                        
                        if (eax_52 != 0)
                            int32_t eax_53 = sub_49db70(eax_52, edx_27, ebx, arg3, &var_930, 5)
                            int32_t ecx_30 = *var_940_2
                            var_948 = eax_53
                            int32_t var_96c = ecx_30
                            int32_t var_968_1 = var_938_2
                            int32_t var_964 = 2
                            
                            if (eax_53 s> 0)
                                sub_49d720(arg3, ebx)
                                int32_t* var_98c_5
                                int32_t* var_988_10
                                int32_t* var_984_17
                                void* eax_55
                                
                                if (*(var_934 + 0xc8) s>= *(var_934 + 0xc4))
                                    (*(*(var_934 + 0x28) + 0xc))(arg3, ebx, 0xf, &var_930, &var_948, 
                                        &var_96c, &var_964, 1, 1, 0, 0)
                                    
                                    if (*(arg3 + 0x1ec3) != 0)
                                        goto label_4a6895
                                    
                                    int32_t eax_56 = *(*(var_934 + 0x28) + 0x10)
                                    
                                    if (eax_56 != 0)
                                        eax_56(arg3, ebx, 0xf)
                                    
                                    eax_55 = &var_964
                                    var_984_17 = &var_964
                                    var_988_10 = &var_948
                                    var_98c_5 = &var_930
                                else
                                    var_984_17 = &var_964
                                    var_988_10 = &var_948
                                    eax_55 = &var_930
                                    var_98c_5 = &var_930
                                
                                sub_49d860(eax_55, &var_96c, arg3, ebx, 0xf, var_98c_5, var_988_10, 
                                    var_984_17)
                                
                                if (*(arg3 + 0x1ec3) != 0)
                                    goto label_4a6895
                                
                                eax_53 = var_948
                            
                            sub_4a8ae0(&var_930, ebx, var_938_2, arg3, *var_940_2, &var_930, eax_53)
                    
                    eax_44 = *(eax_43 + 8)
                    edx_27 = sx.d(*(eax_44 + 0x15))
                    ecx_38 = var_938_2 + 1
                    esi_4 = var_94c_1 + 0x18
                    var_938_2 = ecx_38
                    var_94c_1 = esi_4
                while (ecx_38 s< edx_27)
            
            var_940_2 = &var_940_2[1]
            eax_60 = var_950_2 + 1
            var_950_2 = eax_60
        while (eax_60 s< arg8)
    
    int32_t eax_61
    eax_61.b = var_93c_1 s> arg4
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_61 + 1
}
