// 函数名称: sub_610210
// 虚拟地址: 0x610210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_610210(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t var_28
    uint32_t var_28
    uint32_t var_20
    uint32_t var_1c
    uint32_t var_18
    int32_t var_14
    
    if (sub_5d7350(arg2, &var_28, &var_18, &var_1c, &var_20, &var_14) == 0 || var_28 s< 0xf)
        sub_5cce60("Unsupported YUV destination format")
        return 0xffffffff
    
    arg1[1] = arg2
    void* esi_1 = arg1[6]
    int32_t i = 0
    int32_t* ecx_1 = esi_1 + 0x1800 - (esi_1 + 0xc00)
    
    do
        char eax_4
        int32_t edx_1
        eax_4, edx_1 = sub_6101b0(var_18)
        int32_t edi_2 = i s>> (8 - eax_4)
        *(0 - 0xc00 + edx_1) = edi_2
        char eax_5
        int32_t edx_2
        eax_5, edx_2 = sub_6101e0(var_18)
        int32_t edi_3 = edi_2 << eax_5
        *(0 - 0xc00 + edx_2) = edi_3
        *(0 - 0xc00 + edx_2) = edi_3 | var_14
        char eax_7
        int32_t* edx_3
        eax_7, edx_3 = sub_6101b0(var_1c)
        int32_t edi_6 = i s>> (8 - eax_7)
        *edx_3 = edi_6
        char eax_8
        int32_t* edx_4
        eax_8, edx_4 = sub_6101e0(var_1c)
        int32_t edi_7 = edi_6 << eax_8
        *edx_4 = edi_7
        *edx_4 = edi_7 | var_14
        char eax_10
        int32_t edx_5
        eax_10, edx_5 = sub_6101b0(var_20)
        int32_t edi_10 = i s>> (8 - eax_10)
        *(ecx_1 + edx_5) = edi_10
        char eax_12
        int32_t edx_6
        eax_12, edx_6 = sub_6101e0(var_20)
        int32_t edi_11 = edi_10 << eax_12
        i += 1
        *(ecx_1 + edx_6 + 4 - 4) = edi_11
        *(ecx_1 + edx_6 + 4 - 4) = edi_11 | var_14
    while (i s< 0x100)
    
    bool cond:1_1
    
    if (arg2 == 0 || (arg2 & 0xf0000000) == 0x10000000)
        cond:1_1 = arg2.b != 2
    label_61033f:
        
        if (not(cond:1_1))
            goto label_61034e
    else
        if (arg2 != 0x32595559 && arg2 != 0x59565955)
            cond:1_1 = arg2 != 0x55595659
            goto label_61033f
        
    label_61034e:
        void* edx_8 = esi_1 + 0x40c
        int32_t* eax_15 = esi_1 + 0x1000
        void* ecx_13 = esi_1 + 0x1c04
        int32_t i_2 = 0x40
        int32_t i_1
        
        do
            int32_t edi_15 = *(eax_15 + 0 - 0xc00)
            *(eax_15 + 0 - 0xc00) = edi_15 << 0x10 | edi_15
            int32_t edi_16 = *eax_15
            *eax_15 = edi_16 << 0x10 | edi_16
            int32_t edi_18 = *(eax_15 + ecx_1)
            *(eax_15 + ecx_1) = edi_18 << 0x10 | edi_18
            int32_t edi_21 = *(0 - 0x1800 + ecx_13)
            *(0 - 0x1800 + ecx_13) = edi_21 << 0x10 | edi_21
            int32_t edi_23 = eax_15[1]
            eax_15[1] = edi_23 << 0x10 | edi_23
            int32_t edi_24 = *ecx_13
            *ecx_13 = edi_24 << 0x10 | edi_24
            int32_t edi_25 = *(edx_8 - 4)
            *(edx_8 - 4) = edi_25 << 0x10 | edi_25
            int32_t edi_26 = eax_15[2]
            eax_15[2] = edi_26 << 0x10 | edi_26
            int32_t edi_27 = *(ecx_13 + 4)
            *(ecx_13 + 4) = edi_27 << 0x10 | edi_27
            int32_t edi_28 = *edx_8
            *edx_8 = edi_28 << 0x10 | edi_28
            int32_t edi_29 = eax_15[3]
            eax_15[3] = edi_29 << 0x10 | edi_29
            int32_t edi_30 = *(ecx_13 + 8)
            *(ecx_13 + 8) = edi_30 << 0x10 | edi_30
            eax_15 = &eax_15[4]
            ecx_13 += 0x10
            edx_8 += 0x10
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    void* edi_31 = esi_1
    void* edx_9 = edi_31 + 0x1800
    void* ebx_38 = edi_31 - edx_9
    void* ecx_14 = edx_9
    void* eax_16 = edi_31 + 0x1400
    void* var_c_2 = ebx_38
    int32_t var_24_1 = 0x100
    
    while (true)
        *(ebx_38 + ecx_14) = *(edi_31 + 0x400)
        *(0 - 0xc00 + eax_16) = *(esi_1 + 0x7fc)
        *(eax_16 - 0x800) = *(esi_1 + 0x1000)
        *eax_16 = *(esi_1 + 0x13fc)
        *ecx_14 = *(edx_9 + 0x400)
        *(ecx_1 + eax_16) = *(edx_9 + 0x7fc)
        ecx_14 += 4
        eax_16 += 4
        int32_t temp0_1 = var_24_1
        var_24_1 -= 1
        
        if (temp0_1 == 1)
            break
        
        ebx_38 = var_c_2
        edi_31 = esi_1
    
    int32_t eax_17 = *arg1
    
    if (eax_17 u> 0x55595659)
        if (eax_17 == 0x56555949)
        label_610587:
            bool cond:2_1
            
            if (arg2 == 0 || (arg2 & 0xf0000000) == 0x10000000)
                cond:2_1 = arg2.b != 2
            label_6105a0:
                
                if (not(cond:2_1))
                    arg1[7] = sub_60ef90
                    arg1[8] = sub_60f460
            else
                if (arg2 != 0x32595559 && arg2 != 0x59565955)
                    cond:2_1 = arg2 != 0x55595659
                    goto label_6105a0
                
                arg1[7] = sub_60ef90
                arg1[8] = sub_60f460
            
            if ((arg2 == 0 || (arg2 & 0xf0000000) == 0x10000000) && arg2.b == 3)
                arg1[7] = sub_60f120
                arg1[8] = sub_60f620
            
            if ((arg2 == 0 || (arg2 & 0xf0000000) == 0x10000000) && arg2.b == 4)
                arg1[7] = sub_60f2e0
                arg1[8] = sub_60f8e0
        else if (eax_17 == 0x59565955)
            goto label_6104f0
    else if (eax_17 == 0x55595659)
    label_6104f0:
        bool cond:3_1
        
        if (arg2 == 0 || (arg2 & 0xf0000000) == 0x10000000)
            cond:3_1 = arg2.b != 2
        label_610509:
            
            if (not(cond:3_1))
                arg1[7] = sub_60faa0
                arg1[8] = sub_60fdd0
        else
            if (arg2 != 0x32595559 && arg2 != 0x59565955)
                cond:3_1 = arg2 != 0x55595659
                goto label_610509
            
            arg1[7] = sub_60faa0
            arg1[8] = sub_60fdd0
        
        if ((arg2 == 0 || (arg2 & 0xf0000000) == 0x10000000) && arg2.b == 3)
            arg1[7] = sub_60fbb0
            arg1[8] = sub_60fef0
        
        if ((arg2 == 0 || (arg2 & 0xf0000000) == 0x10000000) && arg2.b == 4)
            arg1[7] = sub_60fcd0
            arg1[8] = sub_610080
    else
        if (eax_17 == 0x32315659)
            goto label_610587
        
        if (eax_17 == 0x32595559)
            goto label_6104f0
    
    sub_5d65d0(arg1[0xf])
    arg1[0xf] = 0
    return 0
}
