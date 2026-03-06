// 函数名称: sub_49f3d0
// 虚拟地址: 0x49f3d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49f3d0(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t* arg4, char* arg5, int32_t* arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg4
    char* edi = arg5
    int32_t* var_c68 = ebx
    char* var_c5c = edi
    int32_t var_c88 = 0
    int32_t var_c84 = 0
    int32_t var_c64 = sub_49f2e0(0, ebx, arg3, edi)
    void* eax_6 = edi * 0xb4 + ebx
    int32_t var_c94
    int32_t var_c90
    int32_t var_c8c
    char var_410[0x404]
    
    if (arg7 s> 0)
        int32_t* var_c6c_1 = arg2
        int32_t i_2 = arg7
        int32_t i
        
        do
            int32_t eax_8 = *var_c6c_1 * 5
            void* ecx_1 = ebx[eax_8 + 0x11b]
            void* eax_9 = &ebx[eax_8 + 0x119]
            int32_t esi_1 = 0
            int32_t var_c80_1 = 0
            void* var_c74_1 = ecx_1
            
            if (*(ecx_1 + 0x15) s> 0)
                int32_t var_c60_1 = 0
                
                while (true)
                    if (*(esi_1 + ecx_1 + 0x18) == 2)
                        int32_t* eax_10 = esi_1 + ecx_1 + 0x20
                        
                        if ((*eax_10 & 0x10) != 0)
                            int32_t var_cac_1 = 1
                            sub_49cc30(ebx, *var_c6c_1, ecx_1, 0xffffffff)
                            
                            if (ebx[6].b == 0)
                                *var_c6c_1
                                sub_49be30(edi)
                                int32_t var_cac_3 = **(eax_9 + 8)
                                int32_t var_cb0_1 = *(eax_6 + 0x20)
                                sub_5a733b(&var_410, "%s discards %s.\n")
                                sub_4c5680(&var_410)
                                char (* var_cac_4)[0x404] = &var_410
                                ecx_1 = sub_4591b0(var_c5c, &var_410, var_c68, var_c5c)
                                edi = var_c5c
                                ebx = var_c68
                            
                            sub_4ae7d0(ecx_1, edi, 0x13, ebx)
                            var_c64 -= sx.d(*(var_c60_1 + var_c74_1 + 0x28))
                            edi = var_c5c
                            esi_1 = var_c60_1
                            ecx_1 = var_c74_1
                        
                        if ((*eax_10 & 0x200) != 0)
                            var_c64 -= sx.d(*(esi_1 + ecx_1 + 0x28))
                            bool cond:2_1 = ebx[6].b != 0
                            var_c84 = 1
                            var_c90 = *var_c6c_1
                            var_c8c = var_c80_1
                            var_c94 = 2
                            
                            if (not(cond:2_1))
                                int32_t var_cac_5 = *(eax_6 + 0x20)
                                sub_5a733b(&var_410, "%s discards a Rare good to reduce cost.\n")
                                char (* var_cac_7)[0x404] = &var_410
                                sub_4591b0(sub_4c5680(&var_410), &var_410, ebx, edi)
                    
                    void* eax_25 = *(eax_9 + 8)
                    int32_t ecx_10 = var_c80_1 + 1
                    esi_1 += 0x18
                    var_c80_1 = ecx_10
                    var_c60_1 = esi_1
                    var_c74_1 = eax_25
                    
                    if (ecx_10 s>= sx.d(*(eax_25 + 0x15)))
                        break
                    
                    ecx_1 = var_c74_1
            
            var_c6c_1 = &var_c6c_1[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t ecx_11 = sx.d(*(eax_6 + 0x60)) * 5
    void* edx_13 = &ebx[ecx_11 + 0x119]
    
    if (var_c64 s< 0)
        var_c64 = 0
    
    int32_t arg_10
    
    if (var_c64 == arg_10)
        if (var_c84 == 0)
            goto label_49f72a
        
        void var_c50
        int32_t eax_30 = sub_49db70(var_c64, edx_13, edi, ebx, &var_c50, 3)
        var_c88 = eax_30
        
        if (eax_30 s<= 1)
            goto label_49f71e
        
        sub_49d9e0(ebx, edi, 0xf, &var_c50, &var_c88, &var_c90, &var_c94, 1, 1, 0, 0)
        
        if (*(ebx + 0x1ec3) == 0)
            edi = var_c5c
        label_49f71e:
            ecx_11 = sub_4a8ae0(&var_c50, edi, var_c8c, ebx, var_c90, &var_c50, 1)
        label_49f72a:
            
            if (ebx[6].b == 0)
                if (*(*(eax_6 + 0x28) + 0x20) != 0)
                    int32_t esi_4 = 0
                    
                    if (arg_10 s> 0)
                        while (true)
                            arg6[esi_4]
                            sub_49bb40(edi)
                            int32_t var_cac_9 = *var_c68[arg6[esi_4] * 5 + 0x11b]
                            int32_t var_cb0_6 = *(eax_6 + 0x20)
                            sub_5a733b(&var_410, "%s discards %s.\n")
                            (*(*(eax_6 + 0x28) + 0x20))(var_c68, var_c5c, &var_410, "discard")
                            esi_4 += 1
                            
                            if (esi_4 s>= arg_10)
                                break
                            
                            edi = var_c5c
                        
                        ebx = var_c68
                        edi = var_c5c
                
                int32_t var_cac_10 = **(edx_13 + 8)
                int32_t var_cb0_7 = arg_10
                int32_t var_cb4_4 = *(eax_6 + 0x20)
                sub_5a733b(&var_410, "%s pays %d for %s.\n")
                ecx_11 = sub_4c5680(&var_410)
            
            int32_t esi_5 = 0
            
            if (arg_10 s> 0)
                do
                    int32_t edx_23 = arg6[esi_5]
                    
                    if (edx_23 s>= 0)
                        int32_t var_cac_12 = 1
                        sub_49cc30(ebx, edx_23, ecx_11, 0xffffffff)
                    else
                        *(eax_6 + 0xb0) += 1
                    
                    esi_5 += 1
                while (esi_5 s< arg_10)
            
            if (edi s< 0)
                sub_49b2a0()
                noreturn
            
            int32_t i_1 = sx.d(*(eax_6 + 0x44))
            int32_t ecx_22 = 0
            
            if (i_1 s< 0xffffffff)
                sub_49b2a0()
                noreturn
            
            while (i_1 != 0xffffffff)
                i_1 = sx.d(ebx[i_1 * 5 + 0x11d].w)
                ecx_22 += 1
            
            int32_t eax_43 = sx.d(*(eax_6 + 0xae)) - sx.d(*(eax_6 + 0xb0)) + ecx_22
            int32_t ecx_23 = sx.d(*(eax_6 + 0xb5))
            
            if (eax_43 s< ecx_23)
                *(eax_6 + 0xb5) = eax_43.b
            
            void var_730
            void* var_cac_13 = &var_730
            int32_t var_cb0_8 = 2
            int32_t eax_45 = sub_49dea0(edi, eax_6, ecx_23, ebx)
            int32_t ecx_24 = 0
            int32_t var_c60_2 = 0
            
            if (eax_45 s> 0)
                do
                    void var_72c
                    
                    if ((*(*(&var_72c + (ecx_24 << 3)) + 8) & 0x20) != 0)
                        int32_t eax_50 = arg_10
                        
                        if (eax_50 != 0)
                            void* esi_7
                            
                            if (eax_50 s<= 1)
                                esi_7 = eax_6
                            else
                                sub_49d720(ebx, edi)
                                esi_7 = eax_6
                                int32_t* eax_51 = *(esi_7 + 0xc8)
                                int32_t* var_cb4_6
                                int32_t* var_cb0_9
                                
                                if (eax_51 s>= *(esi_7 + 0xc4))
                                    (*(*(esi_7 + 0x28) + 0xc))(ebx, edi, 3, arg6, &arg_10, 0, 0, 0, 0, 
                                        0, 0)
                                    
                                    if (*(ebx + 0x1ec3) != 0)
                                        goto label_49f695
                                    
                                    int32_t eax_54 = *(*(esi_7 + 0x28) + 0x10)
                                    
                                    if (eax_54 != 0)
                                        eax_54(ebx, edi, 3)
                                    
                                    eax_51 = arg6
                                    int32_t var_cac_14 = 0
                                    var_cb0_9 = &arg_10
                                    var_cb4_6 = eax_51
                                else
                                    var_cb0_9 = &arg_10
                                    var_cb4_6 = arg6
                                
                                sub_49d860(eax_51, 0, ebx, edi, 3, var_cb4_6, var_cb0_9, nullptr)
                                
                                if (*(ebx + 0x1ec3) != 0)
                                    goto label_49f695
                                
                                ecx_24 = var_c60_2
                            
                            int32_t eax_55 = *arg6
                            
                            if (eax_55 != 0xffffffff)
                                if (ebx[6].b == 0)
                                    *(&var_730 + (ecx_24 << 3))
                                    int32_t var_cac_15 = eax_55
                                    sub_49bfe0(var_c5c, arg6)
                                    ebx = var_c68
                                    edi = var_c5c
                                    esi_7 = eax_6
                                
                                if (*(*(esi_7 + 0x28) + 0x20) != 0)
                                    int32_t var_cac_16 = *ebx[*arg6 * 5 + 0x11b]
                                    int32_t var_cb0_11 = *(esi_7 + 0x20)
                                    sub_5a733b(&var_410, "%s saves %s.\n")
                                    (*(*(esi_7 + 0x28) + 0x20))(ebx, edi, &var_410, "discard")
                                
                                int32_t var_cac_17 = *(esi_7 + 0x20)
                                sub_5a733b(&var_410, "%s saves 1 card under Galactic Scavengers.\n")
                                char const* const var_cac_18 = "verbose"
                                char (* var_cb0_12)[0x404] = &var_410
                                sub_4c5680("%s (%s)")
                                int32_t var_cac_19 = 5
                                sub_49cc30(ebx, *arg6, arg6, edi)
                                ecx_24 = var_c60_2
                    
                    ecx_24 += 1
                    var_c60_2 = ecx_24
                while (ecx_24 s< eax_45)
            
            ebx[arg3 * 5 + 0x11a].w &= 0xffbf
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 1
    
    label_49f695:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
