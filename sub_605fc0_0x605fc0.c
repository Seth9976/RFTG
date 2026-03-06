// 函数名称: sub_605fc0
// 虚拟地址: 0x605fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_605fc0(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* ebx = arg1[2]
    int32_t* ebx = arg1[2]
    void* var_14 = arg3[1]
    
    if ((*arg3 & 2) != 0)
        sub_5d6350(arg3)
    
    void* ecx
    ecx.b = *(var_14 + 9)
    uint32_t edx_1 = zx.d(ecx.b)
    int32_t edi_3 = arg4[1] * arg3[4] + *arg4 * edx_1 + arg3[5]
    int32_t eax_7 = arg2[1]
    char* esi_2 = *(arg1[0xd] + 0xc) + 0x1c
    int32_t var_8 = edi_3
    
    if (eax_7 == 0)
    label_6060bb:
        
        if (*arg2 == 0)
            ecx = arg1
        
        if (*arg2 != 0 || arg2[2] != *(ecx + 8))
            int32_t var_2c_4 = edi_3
            int32_t* var_30_4 = arg3
            sub_605b50(arg2, arg3, ecx, ebx, esi_2)
        else if (edx_1 == 2)
            if (*(var_14 + 0x10) == 0x7e0 || *(var_14 + 0xc) == 0x7e0 || *(var_14 + 0x14) == 0x7e0)
                int32_t var_10_2 = arg2[3]
            label_6062e0:
                int32_t ebx_12 = 0
                
                while (true)
                    uint32_t edi_10 = zx.d(esi_2[1])
                    ebx_12 += zx.d(*esi_2)
                    esi_2 = &esi_2[2]
                    
                    if (edi_10 != 0)
                        uint32_t var_2c_3 = edi_10 * 2
                        char* var_30_3 = esi_2
                        int32_t var_34_3 = var_8 + (ebx_12 << 1)
                        sub_5cd110()
                        esi_2 = &esi_2[edi_10 << 1]
                        ebx_12 += edi_10
                    else if (ebx_12 == 0)
                        break
                    
                    if (ebx_12 s>= ebx)
                        esi_2 += esi_2 & 2
                        int32_t* ecx_28 = nullptr
                        
                        do
                            uint32_t i_8 = zx.d(*(esi_2 + 2))
                            ecx_28 += zx.d(*esi_2)
                            esi_2 = &esi_2[4]
                            
                            if (i_8 != 0)
                                int16_t* edi_11 = var_8 + (ecx_28 << 1)
                                uint32_t i_5 = i_8
                                uint32_t i
                                
                                do
                                    uint32_t eax_39 = zx.d(*edi_11)
                                    int32_t edx_31 = *esi_2
                                    int32_t ecx_32 = (eax_39 << 0x10 | eax_39) & 0x7e0f81f
                                    int32_t eax_46 = (((((edx_31 & 0x7e0f81f) - ecx_32)
                                        * (edx_31 u>> 5 & 0x1f)) u>> 5) + ecx_32) & 0x7e0f81f
                                    *edi_11 = (eax_46 u>> 0x10).w | eax_46.w
                                    esi_2 = &esi_2[4]
                                    edi_11 = &edi_11[1]
                                    i = i_5
                                    i_5 -= 1
                                while (i != 1)
                                ecx_28 += i_8
                        while (ecx_28 s< ebx)
                        
                        var_8 += arg3[4]
                        int32_t temp4_1 = var_10_2
                        var_10_2 -= 1
                        
                        if (temp4_1 != 1)
                            goto label_6062e0
                        
                        goto label_6063b6
            else
                int32_t var_10_1 = arg2[3]
            label_606210:
                int32_t ebx_11 = 0
                
                while (true)
                    uint32_t edi_8 = zx.d(esi_2[1])
                    ebx_11 += zx.d(*esi_2)
                    esi_2 = &esi_2[2]
                    
                    if (edi_8 != 0)
                        uint32_t var_2c_2 = edi_8 * 2
                        char* var_30_2 = esi_2
                        int32_t var_34_2 = var_8 + (ebx_11 << 1)
                        sub_5cd110()
                        esi_2 = &esi_2[edi_8 << 1]
                        ebx_11 += edi_8
                    else if (ebx_11 == 0)
                        break
                    
                    if (ebx_11 s>= ebx)
                        esi_2 += esi_2 & 2
                        int32_t* ecx_16 = nullptr
                        
                        do
                            uint32_t i_7 = zx.d(*(esi_2 + 2))
                            ecx_16 += zx.d(*esi_2)
                            esi_2 = &esi_2[4]
                            
                            if (i_7 != 0)
                                int16_t* edi_9 = var_8 + (ecx_16 << 1)
                                uint32_t i_4 = i_7
                                uint32_t i_1
                                
                                do
                                    uint32_t eax_27 = zx.d(*edi_9)
                                    int32_t edx_23 = *esi_2
                                    int32_t ecx_20 = (eax_27 << 0x10 | eax_27) & 0x3e07c1f
                                    int32_t eax_34 = (((((edx_23 & 0x3e07c1f) - ecx_20)
                                        * (edx_23 u>> 5 & 0x1f)) u>> 5) + ecx_20) & 0x3e07c1f
                                    *edi_9 = (eax_34 u>> 0x10).w | eax_34.w
                                    esi_2 = &esi_2[4]
                                    edi_9 = &edi_9[1]
                                    i_1 = i_4
                                    i_4 -= 1
                                while (i_1 != 1)
                                ecx_16 += i_7
                        while (ecx_16 s< ebx)
                        
                        var_8 += arg3[4]
                        int32_t temp8_1 = var_10_1
                        var_10_1 -= 1
                        
                        if (temp8_1 != 1)
                            goto label_606210
                        
                        goto label_6063b6
        else if (edx_1 == 4)
            int32_t var_14_1 = arg2[3]
        label_6060f0:
            int32_t edi_5 = 0
            
            while (true)
                uint32_t ebx_1 = zx.d(*(esi_2 + 2))
                edi_5 += zx.d(*esi_2)
                esi_2 = &esi_2[4]
                
                if (ebx_1 != 0)
                    uint32_t var_2c_1 = ebx_1 << 2
                    char* var_30_1 = esi_2
                    int32_t var_34_1 = var_8 + (edi_5 << 2)
                    sub_5cd110()
                    esi_2 = &esi_2[ebx_1 << 2]
                    edi_5 += ebx_1
                else if (edi_5 == 0)
                    break
                
                if (edi_5 s>= ebx)
                    int32_t edx_13 = 0
                    
                    do
                        edx_13 += zx.d(*esi_2)
                        uint32_t i_6 = zx.d(*(esi_2 + 2))
                        esi_2 = &esi_2[4]
                        
                        if (i_6 != 0)
                            int32_t* ecx_10 = var_8 + (edx_13 << 2)
                            arg1 = ecx_10
                            uint32_t i_3 = i_6
                            uint32_t i_2
                            
                            do
                                int32_t eax_14 = *esi_2
                                int32_t ecx_11 = *ecx_10
                                int32_t ecx_12 = ecx_11 & 0xff00
                                int32_t edi_7 = ecx_11 & 0xff00ff
                                uint32_t edx_15 = eax_14 u>> 0x18
                                *arg1 = ((((((eax_14 & 0xff00ff) - edi_7) * edx_15) u>> 8) + edi_7)
                                    & 0xffff00ff) | ((((((eax_14 & 0xff00) - ecx_12) * edx_15) u>> 8)
                                    + ecx_12) & 0xff00) | 0xff000000
                                ecx_10 = &arg1[1]
                                esi_2 = &esi_2[4]
                                i_2 = i_3
                                i_3 -= 1
                                arg1 = ecx_10
                            while (i_2 != 1)
                            edx_13 += i_6
                    while (edx_13 s< ebx)
                    
                    var_8 += arg3[4]
                    int32_t temp6_1 = var_14_1
                    var_14_1 -= 1
                    
                    if (temp6_1 != 1)
                        goto label_6060f0
                    
                    goto label_6063b6
    else if (ecx.b != 2)
        int32_t eax_8 = eax_7 * 2
    label_606090:
        void* edx_9 = nullptr
        
        while (true)
            edx_9 += zx.d(*esi_2)
            ecx = zx.d(*(esi_2 + 2))
            esi_2 = &esi_2[4]
            
            if (ecx != 0)
                esi_2 = &esi_2[ecx << 2]
                edx_9 += ecx
            else if (edx_9 == 0)
                break
            
            if (edx_9 s>= ebx)
                int32_t temp2_1 = eax_8
                eax_8 -= 1
                
                if (temp2_1 != 1)
                    goto label_606090
                
                goto label_6060bb
    else
    label_606040:
        int32_t edx_4 = 0
        
        while (true)
            edx_4 += zx.d(*esi_2)
            uint32_t ecx_2 = zx.d(esi_2[1])
            esi_2 = &esi_2[2]
            
            if (ecx_2 != 0)
                esi_2 = &esi_2[ecx_2 << 1]
                edx_4 += ecx_2
            else if (edx_4 == 0)
                break
            
            if (edx_4 s>= ebx)
                esi_2 += esi_2 & 2
                ecx = nullptr
                
                do
                    uint32_t edx_8 = zx.d(*(esi_2 + 2))
                    ecx = ecx + zx.d(*esi_2) + edx_8
                    esi_2 = &esi_2[(edx_8 << 2) + 4]
                while (ecx s< ebx)
                
                int32_t temp3_1 = eax_7
                eax_7 -= 1
                
                if (temp3_1 != 1)
                    goto label_606040
                
                goto label_6060bb
    
    label_6063b6:
    
    if ((*arg3 & 2) != 0)
        sub_5d6380(arg3)
    
    return 0
}
