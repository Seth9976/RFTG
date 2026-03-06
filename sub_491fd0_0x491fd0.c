// 函数名称: sub_491fd0
// 虚拟地址: 0x491fd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_491fd0(int128_t* arg1 @ edi, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx = __chkstk(0x21c0)
    int32_t ecx = __chkstk(0x21c0)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    double var_21c4 = fconvert.d(float.t(0))
    int32_t i = 0
    
    if (data_2691bd8 s> 0)
        do
            *(data_2691bfc + (i << 3)) = fconvert.d(fconvert.t(-1.0))
            i += 1
        while (i s< data_2691bd8)
    
    int32_t eax_4 = sub_491140(sub_4b2040(), arg1, &(&__saved_ebp)[ecx * 5 - 0x20], ecx, 0)
    int32_t ecx_5 = sx.d(*(arg1 + 0x458))
    int32_t var_21b4 = eax_4
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(ecx + 1)
    int32_t eax_7 = divs.dp.d(edx_1:eax_6, ecx_5)
    int32_t edx_2 = mods.dp.d(edx_1:eax_6, ecx_5)
    
    if (edx_2 != ecx)
        int32_t ebx_1 = edx_2
        
        do
            int32_t eax_8 = sub_491140(eax_7, arg1, &(&__saved_ebp)[ebx_1 * 5 - 0x20], ebx_1, var_21b4)
            ecx_5 = sx.d(*(arg1 + 0x458))
            var_21b4 = eax_8
            int32_t eax_10
            int32_t edx_5
            edx_5:eax_10 = sx.q(ebx_1 + 1)
            eax_7 = divs.dp.d(edx_5:eax_10, ecx_5)
            edx_2 = mods.dp.d(edx_5:eax_10, ecx_5)
            ebx_1 = edx_2
        while (ebx_1 != ecx)
    
    int32_t var_10_2 = 0x14
    int32_t var_14_2 = 0
    void var_84
    int32_t eax_12
    int32_t ecx_8
    void* edx_6
    eax_12, ecx_8, edx_6 = sub_491e50(var_21b4, edx_2, ecx_5, arg1, ecx, &var_84)
    
    if (*(arg1 + 0x45a) == 3)
        int32_t var_10_3 = 5
        int32_t var_14_3 = 1
        eax_12, ecx_8, edx_6 = sub_491e50(eax_12, edx_6, ecx_8, arg1, ecx, &var_84)
    
    int32_t var_10_4 = 5
    int32_t var_14_4 = 2
    int32_t eax_13
    int32_t ecx_9
    void* edx_7
    eax_13, ecx_9, edx_7 = sub_491e50(eax_12, edx_6, ecx_8, arg1, ecx, &var_84)
    int32_t var_10_5 = 0xa
    int32_t var_14_5 = 3
    int32_t eax_14
    int32_t ecx_10
    void* edx_8
    eax_14, ecx_10, edx_8 = sub_491e50(eax_13, edx_7, ecx_9, arg1, ecx, &var_84)
    int32_t var_10_6 = 5
    int32_t var_14_6 = 4
    int32_t eax_15 = sub_491e50(eax_14, edx_8, ecx_10, arg1, ecx, &var_84)
    void* ecx_11 = (eax_15 << 3) + 0x18
    int32_t eax_16 = 2
    
    do
        int32_t ebx_2
        ebx_2.b = sx.d(*(arg1 + 0x1e04)) s> (eax_16 - 2) * sx.d(*(arg1 + 0x458))
        *(ecx_11 + data_2691bfc - 0x18) = fconvert.d(float.t(ebx_2 * 2 - 1))
        int32_t ebx_4
        ebx_4.b = sx.d(*(arg1 + 0x1e04)) s> (eax_16 - 1) * sx.d(*(arg1 + 0x458))
        *(ecx_11 + data_2691bfc - 0x10) = fconvert.d(float.t(ebx_4 * 2 - 1))
        int32_t ebx_6
        ebx_6.b = sx.d(*(arg1 + 0x1e04)) s> sx.d(*(arg1 + 0x458)) * eax_16
        *(ecx_11 + data_2691bfc - 8) = fconvert.d(float.t(ebx_6 * 2 - 1))
        int32_t ebx_8
        ebx_8.b = sx.d(*(arg1 + 0x1e04)) s> (eax_16 + 1) * sx.d(*(arg1 + 0x458))
        *(ecx_11 + data_2691bfc) = fconvert.d(float.t(ebx_8 * 2 - 1))
        int32_t ebx_10
        ebx_10.b = sx.d(*(arg1 + 0x1e04)) s> (eax_16 + 2) * sx.d(*(arg1 + 0x458))
        *(ecx_11 + data_2691bfc + 8) = fconvert.d(float.t(ebx_10 * 2 - 1))
        int32_t ebx_12
        ebx_12.b = sx.d(*(arg1 + 0x1e04)) s> (eax_16 + 3) * sx.d(*(arg1 + 0x458))
        eax_16 += 6
        ecx_11 += 0x30
        *(ecx_11 + data_2691bfc - 0x20) = fconvert.d(float.t(ebx_12 * 2 - 1))
    while (eax_16 - 2 s< 0xc)
    
    int32_t esi_12 = 0
    int32_t edx_30 = 0
    
    if (sx.d(*(arg1 + 0x458)) s> 0)
        void* ebx_14 = arg1 + 0x46
        
        while (true)
            if (edx_30 s>= 0)
                int32_t i_1 = sx.d(*ebx_14)
                int32_t ecx_12 = 0
                
                if (i_1 s>= 0xffffffff)
                    while (i_1 != 0xffffffff)
                        i_1 = sx.d(*(arg1 + ((i_1 * 5 + 0x11d) << 2)))
                        ecx_12 += 1
                    
                    if (ecx_12 s> esi_12)
                        esi_12 = ecx_12
                    
                    edx_30 += 1
                    ebx_14 += 0xb4
                    
                    if (edx_30 s>= sx.d(*(arg1 + 0x458)))
                        break
                    
                    continue
            
            sub_49b2a0()
            noreturn
    
    int32_t ebx_15 = eax_15 + 0xc
    
    for (int32_t i_2 = 0; i_2 s< 0xc; )
        int32_t ecx_13
        ecx_13.b = esi_12 s> i_2
        i_2 += 1
        ebx_15 += 1
        *(data_2691bfc + (ebx_15 << 3) - 8) = fconvert.d(float.t(ecx_13 * 2 - 1))
    
    int32_t ecx_15 = 0xc - esi_12
    int32_t temp0_2 = divs.dp.d(sx.q(*(arg1 + 0x1e04)), sx.d(*(arg1 + 0x458)))
    
    if (temp0_2 s< ecx_15)
        ecx_15 = temp0_2
    
    int32_t i_3
    int32_t edx_36
    
    for (i_3 = 0; i_3 s< 0xc; )
        int32_t edx_34
        edx_34.b = ecx_15 s> i_3
        i_3 += 1
        ebx_15 += 1
        edx_36 = data_2691bfc
        *(edx_36 + (ebx_15 << 3) - 8) = fconvert.d(float.t(edx_34 * 2 - 1))
    
    i_3.b = *(arg1 + 0x45a)
    
    if (i_3.b s> 0 && i_3.b s< 4)
        void* ecx_16 = (ebx_15 << 3) + 0x18
        void* eax_23 = arg1 + 0x1e08
        int32_t i_10 = 2
        int32_t i_4
        
        do
            int32_t edx_37
            edx_37.b = *(eax_23 - 2) != 0
            *(ecx_16 + data_2691bfc - 0x18) = fconvert.d(float.t(edx_37 * 2 - 1))
            int32_t edx_40
            edx_40.b = *eax_23 != 0
            *(ecx_16 + data_2691bfc - 0x10) = fconvert.d(float.t(edx_40 * 2 - 1))
            int32_t edx_43
            edx_43.b = *(eax_23 + 2) != 0
            *(ecx_16 + data_2691bfc - 8) = fconvert.d(float.t(edx_43 * 2 - 1))
            int32_t edx_46
            edx_46.b = *(eax_23 + 4) != 0
            *(ecx_16 + data_2691bfc) = fconvert.d(float.t(edx_46 * 2 - 1))
            int32_t edx_49
            edx_49.b = *(eax_23 + 6) != 0
            *(ecx_16 + data_2691bfc + 8) = fconvert.d(float.t(edx_49 * 2 - 1))
            int32_t edx_52
            edx_52.b = *(eax_23 + 8) != 0
            *(ecx_16 + data_2691bfc + 0x10) = fconvert.d(float.t(edx_52 * 2 - 1))
            int32_t edx_55
            edx_55.b = *(eax_23 + 0xa) != 0
            *(ecx_16 + data_2691bfc + 0x18) = fconvert.d(float.t(edx_55 * 2 - 1))
            int32_t edx_58
            edx_58.b = *(eax_23 + 0xc) != 0
            *(ecx_16 + data_2691bfc + 0x20) = fconvert.d(float.t(edx_58 * 2 - 1))
            int32_t edx_61
            edx_61.b = *(eax_23 + 0xe) != 0
            *(ecx_16 + data_2691bfc + 0x28) = fconvert.d(float.t(edx_61 * 2 - 1))
            int32_t edx_64
            edx_64.b = *(eax_23 + 0x10) != 0
            eax_23 += 0x14
            *(ecx_16 + data_2691bfc + 0x30) = fconvert.d(float.t(edx_64 * 2 - 1))
            ecx_16 += 0x50
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        void* ecx_17 = (ebx_15 << 3) + 0xb8
        void* eax_24 = &arg1[0x1e3]
        int32_t i_11 = 2
        ebx_15 += 0x28
        int32_t i_5
        
        do
            int32_t edx_67
            edx_67.b = *(eax_24 - 2) != 0
            *(ecx_17 + data_2691bfc - 0x18) = fconvert.d(float.t(edx_67 * 2 - 1))
            int32_t edx_70
            edx_70.b = *eax_24 != 0
            *(ecx_17 + data_2691bfc - 0x10) = fconvert.d(float.t(edx_70 * 2 - 1))
            int32_t edx_73
            edx_73.b = *(eax_24 + 2) != 0
            *(ecx_17 + data_2691bfc - 8) = fconvert.d(float.t(edx_73 * 2 - 1))
            int32_t edx_76
            edx_76.b = *(eax_24 + 4) != 0
            *(ecx_17 + data_2691bfc) = fconvert.d(float.t(edx_76 * 2 - 1))
            int32_t edx_79
            edx_79.b = *(eax_24 + 6) != 0
            *(ecx_17 + data_2691bfc + 8) = fconvert.d(float.t(edx_79 * 2 - 1))
            int32_t edx_82
            edx_82.b = *(eax_24 + 8) != 0
            *(ecx_17 + data_2691bfc + 0x10) = fconvert.d(float.t(edx_82 * 2 - 1))
            int32_t edx_85
            edx_85.b = *(eax_24 + 0xa) != 0
            *(ecx_17 + data_2691bfc + 0x18) = fconvert.d(float.t(edx_85 * 2 - 1))
            int32_t edx_88
            edx_88.b = *(eax_24 + 0xc) != 0
            *(ecx_17 + data_2691bfc + 0x20) = fconvert.d(float.t(edx_88 * 2 - 1))
            int32_t edx_91
            edx_91.b = *(eax_24 + 0xe) != 0
            *(ecx_17 + data_2691bfc + 0x28) = fconvert.d(float.t(edx_91 * 2 - 1))
            int32_t edx_94
            edx_94.b = *(eax_24 + 0x10) != 0
            eax_24 += 0x14
            edx_36 = data_2691bfc
            *(ecx_17 + edx_36 + 0x30) = fconvert.d(float.t(edx_94 * 2 - 1))
            ecx_17 += 0x50
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
    
    int32_t eax_35 = data_2691be0
    int32_t var_21b4_2 = 0
    int64_t var_2e4[0x4c]
    int32_t mxcsr
    int16_t x87control
    
    if (eax_35 s> 0)
        int32_t esi_16
        
        do
            int32_t var_10_7 = arg3
            void var_21ac
            sub_48bb40(arg1, &var_21ac, edx_36.b)
            int32_t i_9 = sx.d(*(arg1 + 0x458))
            int32_t var_2180[0x7a2]
            
            if (i_9 s> 0)
                int32_t (* eax_29)[0x7a2] = &var_2180
                int32_t i_6
                
                do
                    (*eax_29)[1] = 0xffffffff
                    *eax_29 = 0xffffffff
                    eax_29 = &(*eax_29)[0x2d]
                    i_6 = i_9
                    i_9 -= 1
                while (i_6 != 1)
            
            int32_t var_2f6_1 = 0
            int32_t var_2f2_1 = 0
            int16_t var_2ee_1 = 0
            
            if (*(arg1 + 0x459) == 0)
                var_2180[ecx * 0x2d] = *((var_21b4_2 << 2) + &data_8c6a80)
            else
                int32_t edx_96 = *((var_21b4_2 << 3) + &data_8c6824)
                var_2180[ecx * 0x2d] = *((var_21b4_2 << 3) + &data_8c6820)
                var_217c
                *(&var_217c + ecx * 0xb4) = edx_96
            
            int32_t var_10_8 = 0
            int16_t x87control_1
            long double st0_1
            st0_1, x87control_1 =
                sub_4904a0(ecx, sub_48bc70(&var_21ac, sub_4b0760(&var_21ac)), &var_21ac, ecx)
            var_2e4[var_21b4_2] = fconvert.d(st0_1)
            edx_36, x87control = sub_6870ac(mxcsr, x87control_1)
            eax_35 = data_2691be0
            esi_16 = var_21b4_2 + 1
            var_21c4 = fconvert.d(st0_1 * fconvert.t(20.0) + fconvert.t(var_21c4))
            var_21b4_2 = esi_16
        while (esi_16 s< eax_35)
    
    int32_t i_7 = 0
    
    if (eax_35 s> 0)
        do
            long double x87_r7_34 = fconvert.t(var_2e4[i_7]) * fconvert.t(20.0)
            x87control = sub_6870ac(mxcsr, x87control)
            i_7 += 1
            ebx_15 += 1
            *(data_2691bfc + (ebx_15 << 3) - 8) = fconvert.d(x87_r7_34 / fconvert.t(var_21c4))
        while (i_7 s< data_2691be0)
    
    int32_t eax_36 = data_2691bd8
    
    if (ebx_15 != eax_36)
        int32_t var_10_10 = eax_36
        int32_t var_14_7 = ebx_15
        sub_5a7d4b("Incorrect number of role inputs %d %d\n")
        sub_5a79f4()
        noreturn
    
    int80_t result = sub_4b3d70(&data_2691bc0)
    int32_t i_8 = 0
    
    if (data_2691be0 s> 0)
        do
            long double x87_r7_36 = fconvert.t(*(data_2691c0c + (i_8 << 3)))
            i_8 += 1
            *(arg2 + (i_8 << 3) - 8) = fconvert.d(x87_r7_36)
        while (i_8 s< data_2691be0)
    
    int32_t entry_ebx
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
    return result
}
