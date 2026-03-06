// 函数名称: sub_4a3710
// 虚拟地址: 0x4a3710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4a3710(int32_t arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    char* edx
    ecx, edx = __chkstk(0x16d8)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t* ebx = ecx
    void* ecx_3 = edx * 0xb4 + ebx
    int32_t edx_1 = arg2 * 5
    int32_t edx_2
    edx_2.b = sx.d(ebx[edx_1 + 0x119].b) != edx
    int32_t var_16a0 = 0
    int32_t var_1694 = 0
    void* eax_4 = ebx[edx_1 + 0x11b]
    void* ecx_5
    ecx_5.b = 0
    int32_t edx_4 = sx.d(*(eax_4 + 0xe))
    int32_t edx_5 = *(eax_4 + 0x10)
    int32_t ecx_7 = neg.d(sbb.d(ecx_5, ecx_5, 0 u< ((*(ebx[edx_1 + 0x11b] + 0x10)).b & 1)))
    int32_t ecx_8 = sx.d(*(eax_4 + 7))
    int32_t var_16c4 = 0
    char var_169a = 0
    char var_1699 = 0
    int32_t eax_5
    int32_t ecx_10
    int32_t edx_6
    eax_5, ecx_10, edx_6 = sub_4b1530(eax_4, edx_5, ebx, edx)
    int32_t var_16b0 = eax_5 + arg4
    void var_730
    void* var_14_1 = &var_730
    int32_t var_18 = 3
    int32_t eax_8 = sub_49dea0(edx, edx_6, ecx_10, ebx)
    var_16a0 = eax_8
    int32_t var_1698 = 0
    int32_t var_c50[0x148]
    
    if (eax_8 s> 0)
        do
            void var_72c
            void* edi_1 = *(&var_72c + (var_1698 << 3))
            int32_t eax_9 = *(edi_1 + 8)
            int32_t var_16d4_1 = *(edi_1 + 0xc)
            
            if ((eax_9 & 0x10000) != 0)
                var_169a = 1
            
            if ((eax_9 & 0x100) == 0)
            label_4a38f0:
                
                if (edx_2 == 0 && edx_4 != 5 && (eax_9 & 0x40) != 0)
                    int32_t eax_14 = var_1694
                    var_c50[eax_14] = sx.d(*(&var_730 + (var_1698 << 3)))
                    var_1694 = eax_14 + 1
                
                if (*(edi_1 + 8) == 0x120 && *(edi_1 + 0xc) == 0)
                    int32_t eax_17 = var_1694
                    var_c50[eax_17] = sx.d(*(&var_730 + (var_1698 << 3)))
                    var_1694 = eax_17 + 1
                
                if (edx_2 != 0 || arg3 != 0 || ecx_7 == 0)
                    goto label_4a3a17
                
                int32_t ecx_37 = *(edi_1 + 8)
                int32_t var_16d4_2 = *(edi_1 + 0xc)
                
                if ((ecx_37 & 0x4000) == 0)
                    goto label_4a3a17
                
                if ((ecx_37 & 0x10) == 0)
                    if (edx_4 != 5)
                    label_4a39ac:
                        
                        if (((ecx_37 & 0x200) == 0 || (edx_5 & 0x40) != 0)
                                && ((ecx_37 & 0x400) == 0 || (edx_5 & 0x800) != 0))
                            int32_t eax_35 = var_1694
                            var_c50[eax_35] = sx.d(*(&var_730 + (var_1698 << 3)))
                            var_1699 = 1
                            var_1694 = eax_35 + 1
                        label_4a3a17:
                            
                            if ((*(edi_1 + 8) & 0x80) != 0)
                                int32_t eax_40 = var_1694
                                var_c50[eax_40] = sx.d(*(&var_730 + (var_1698 << 3)))
                                var_1694 = eax_40 + 1
                            
                            if (ecx_7 != 0)
                                goto label_4a3aa0
                            
                            int32_t ecx_42 = *(edi_1 + 8)
                            int32_t var_16d4_3 = *(edi_1 + 0xc)
                            
                            if ((ecx_42 & 0x20000) == 0)
                                goto label_4a3aa0
                            
                            if (edx_2 == 0 || (ecx_42 & 0x40000) == 0)
                                int32_t eax_46 = var_1694
                                var_c50[eax_46] = sx.d(*(&var_730 + (var_1698 << 3)))
                                var_1694 = eax_46 + 1
                            label_4a3aa0:
                                int32_t eax_50 = *(edi_1 + 8) & 0x20000000
                                void var_1690
                                
                                if (eax_50 != 0
                                        && sub_49db70(eax_50, &var_1690, edx, ebx, &var_1690, 4) s> 0)
                                    int32_t eax_53 = var_1694
                                    var_c50[eax_53] = sx.d(*(&var_730 + (var_1698 << 3)))
                                    var_1694 = eax_53 + 1
                                
                                int32_t eax_57 = *(edi_1 + 8) & 0x10000000
                                
                                if (eax_57 != 0
                                        && sub_49db70(eax_57, &var_1690, edx, ebx, &var_1690, 3) s> 0)
                                    int32_t eax_60 = var_1694
                                    var_c50[eax_60] = sx.d(*(&var_730 + (var_1698 << 3)))
                                    var_1694 = eax_60 + 1
                                
                                int32_t eax_64 = *(edi_1 + 8) & 0x40000000
                                
                                if (eax_64 != 0
                                        && sub_49db70(eax_64, &var_1690, edx, ebx, &var_1690, 5) s> 0)
                                    int32_t eax_67 = var_1694
                                    var_c50[eax_67] = sx.d(*(&var_730 + (var_1698 << 3)))
                                    var_1694 = eax_67 + 1
                                
                                if ((*(edi_1 + 8) & 0x80000000) != 0 && *(ecx_3 + 0xa3) s> 0)
                                    int32_t eax_73 = var_1694
                                    var_c50[eax_73] = sx.d(*(&var_730 + (var_1698 << 3)))
                                    var_1694 = eax_73 + 1
                else if (edx_4 == 5)
                    goto label_4a39ac
            else if (((eax_9 & 2) == 0 || edx_4 != 2) && ((eax_9 & 4) == 0 || edx_4 != 3)
                    && ((eax_9 & 8) == 0 || edx_4 != 4) && ((eax_9 & 0x10) == 0 || edx_4 != 5))
                if ((eax_9 & 0x200) == 0 || (*(ebx[edx_1 + 0x11b] + 0x10) & 0x40) == 0)
                    goto label_4a38f0
                
                var_16b0 += sx.d(*(edi_1 + 0x10))
            else
                var_16b0 += sx.d(*(edi_1 + 0x10))
            
            eax_8 = var_1698 + 1
            var_1698 = eax_8
        while (eax_8 s< var_16a0)
    
    if (edx_2 == 0)
        if (ecx_7 == 0)
            goto label_4a3c8f
        
        eax_8 = ecx_8
        
        if (var_16b0 s< eax_8 || var_1694 != 0)
            goto label_4a3c8f
        
        *(ecx_3 + 0x65) += eax_8.b
        
        if (ebx[6].b == 0)
            int32_t var_14_5 = *ebx[sx.d(*(ecx_3 + 0x60)) * 5 + 0x11b]
            int32_t var_18_4 = *(ecx_3 + 0x20)
            char var_410[0x3d4]
            sub_5a733b(&var_410, "%s conquers %s.\n")
            int32_t eax_80 = sub_458ed0(edx, sub_4c5680(&var_410), sx.d(*(ebx + 0x1ec2)), 1)
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return eax_80
    else if (var_1694 != 0)
    label_4a3c8f:
        int32_t i = sx.d(*(ecx_3 + 0x44))
        int32_t edx_20 = 0
        int32_t var_1170[0x148]
        
        while (i != 0xffffffff)
            var_1170[edx_20] = i
            i = sx.d(ebx[i * 5 + 0x11d].w)
            edx_20 += 1
        
        int32_t esi_2 = sx.d(*(ecx_3 + 0xae)) - sx.d(*(ecx_3 + 0xb0))
        var_16a0 = edx_20
        
        if (esi_2 s> 0)
            int32_t ebx_3 = sx.d(*(ecx_3 + 0xae)) - sx.d(*(ecx_3 + 0xb0))
            void* edi_2 = &(&__saved_ebp)[edx_20 - 0x45b]
            edx_20 += ebx_3
            ebx = ebx
            __builtin_memset(edi_2, 0xffffffff, ebx_3 << 2)
            var_16a0 = edx_20
        
        if (*(ecx_3 + 0xb0) s> *(ecx_3 + 0xae))
            var_16a0 = edx_20 + esi_2
        
        int16_t eax_85
        
        if (var_169a == 0 || var_1699 == 0)
            eax_85.b = 1
        else
            eax_85.b = 0
        
        int32_t var_14_10
        
        if (edx_2 != 0 || (ecx_8 != 0 && (ecx_7 == 0 || var_16b0 s< ecx_8 || eax_85.b == 0)))
            sub_49d720(ebx, edx)
            int32_t* var_1c_5
            int32_t* var_18_5
            int32_t* var_14_7
            int32_t* eax_86
            
            if (*(ecx_3 + 0xc8) s>= *(ecx_3 + 0xc4))
                eax_8 = (*(*(ecx_3 + 0x28) + 0xc))(ebx, edx, 6, &var_1170, &var_16a0, &var_c50, 
                    &var_1694, arg2, arg3, arg4, 0)
                
                if (*(ebx + 0x1ec3) == 0)
                    int32_t eax_89 = *(*(ecx_3 + 0x28) + 0x10)
                    
                    if (eax_89 != 0)
                        eax_89(ebx, edx, 6)
                    
                    eax_86 = &var_1694
                    var_14_7 = &var_1694
                    var_18_5 = &var_16a0
                    var_1c_5 = &var_1170
                    goto label_4a3e30
            else
                var_14_7 = &var_1694
                eax_86 = &var_16a0
                var_18_5 = &var_16a0
                var_1c_5 = &var_1170
            label_4a3e30:
                eax_8 = sub_49d860(eax_86, &var_c50, ebx, edx, 6, var_1c_5, var_18_5, var_14_7)
                
                if (*(ebx + 0x1ec3) == 0)
                    var_14_10 = arg4
                    eax_8 = sub_4a1d50(edx, ebx, edx, arg2, var_16a0, var_1694, arg3)
        else
            var_1694 = 0
            var_16a0 = 0
            var_14_10 = arg4
            eax_8 = sub_4a1d50(edx, ebx, edx, arg2, var_16a0, var_1694, arg3)
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return eax_8
}
