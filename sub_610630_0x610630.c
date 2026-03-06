// 函数名称: sub_610630
// 虚拟地址: 0x610630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_610630(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t eax = *edi
    
    if (eax u<= 0x55595659)
        if (eax != 0x55595659)
            if (eax == 0x32315659)
                goto label_6106dd
            
            if (eax != 0x32595559)
                return 0
            
            goto label_610684
        
    label_610684:
        arg1 = arg3
        int32_t esi_2 = zx.d(edi[9].w) * arg2[1] + (*arg2 << 1) + edi[0xb]
        int32_t eax_4 = arg2[2] * 2
        int32_t var_c_1 = eax_4
        int32_t var_10_1 = 0
        
        if (arg2[3] s> 0)
            while (true)
                int32_t var_20_1 = eax_4
                int32_t* var_24_1 = arg1
                int32_t var_28_1 = esi_2
                sub_5cd110()
                arg1 += arg4
                int32_t eax_7 = var_10_1 + 1
                esi_2 += zx.d(edi[9].w)
                var_10_1 = eax_7
                
                if (eax_7 s>= arg2[3])
                    break
                
                eax_4 = var_c_1
    else if (eax == 0x56555949)
    label_6106dd:
        int32_t eax_9 = *arg2
        
        if (eax_9 == 0 && arg2[1] == eax_9 && arg2[2] == edi[2] && arg2[3] == edi[3])
            int32_t ecx_6 = edi[3] * edi[2]
            int32_t eax_11
            int32_t edx_4
            edx_4:eax_11 = sx.q(ecx_6)
            int32_t var_20_2 = ((eax_11 - edx_4) s>> 1) + ecx_6
            int32_t* var_24_2 = arg3
            int32_t var_28_2 = edi[4]
            sub_5cd110()
            return 0
        
        int32_t ebx_5 = edi[2] * arg2[1] + eax_9 + edi[4]
        int32_t eax_17 = arg2[2]
        arg1 = arg3
        int32_t i_1 = 0
        
        if (arg2[3] s> 0)
            int32_t i
            
            do
                int32_t var_20_3 = eax_17
                int32_t* var_24_3 = arg1
                int32_t var_28_3 = ebx_5
                sub_5cd110()
                arg1 += arg4
                ebx_5 += edi[2]
                i = i_1 + 1
                i_1 = i
            while (i s< arg2[3])
        
        int32_t eax_21
        int32_t edx_7
        edx_7:eax_21 = sx.q(arg2[1])
        int32_t eax_25
        int32_t edx_8
        edx_8:eax_25 = sx.q(((eax_21 - edx_7) s>> 1) * edi[2])
        int32_t* ecx_11 = arg2[3] * arg4 + arg3
        int32_t eax_28
        int32_t edx_11
        edx_11:eax_28 = sx.q(*arg2)
        int32_t ebx_10 = ((eax_25 - edx_8) s>> 1) + edi[3] * edi[2] + ((eax_28 - edx_11) s>> 1) + edi[4]
        int32_t eax_32
        int32_t edx_12
        edx_12:eax_32 = sx.q(arg2[2])
        int32_t eax_36
        int32_t edx_13
        edx_13:eax_36 = sx.q(arg2[3])
        arg1 = ecx_11
        int32_t var_8_1 = 0
        
        if ((eax_36 - edx_13) s>> 1 s> 0)
            int32_t eax_40
            int32_t edx_14
            edx_14:eax_40 = sx.q(arg4)
            
            while (true)
                int32_t var_20_4 = (eax_32 - edx_12) s>> 1
                int32_t* var_24_4 = ecx_11
                int32_t var_28_4 = ebx_10
                sub_5cd110()
                arg1 += (eax_40 - edx_14) s>> 1
                int32_t eax_45
                int32_t edx_15
                edx_15:eax_45 = sx.q(edi[2])
                ebx_10 += (eax_45 - edx_15) s>> 1
                int32_t eax_49
                int32_t edx_16
                edx_16:eax_49 = sx.q(arg2[3])
                int32_t ecx_14 = var_8_1 + 1
                var_8_1 = ecx_14
                
                if (ecx_14 s>= (eax_49 - edx_16) s>> 1)
                    break
                
                ecx_11 = arg1
        
        int32_t ebx_12 = arg2[3] * arg4
        int32_t eax_53
        int32_t edx_17
        edx_17:eax_53 = sx.q(ebx_12)
        int32_t ebx_13 = edi[2]
        arg1 = ((eax_53 + (edx_17 & 3)) s>> 2) + ebx_12 + arg3
        int32_t eax_59
        int32_t edx_19
        edx_19:eax_59 = sx.q(arg2[1])
        int32_t ecx_16 = edi[3] * ebx_13
        int32_t eax_63
        int32_t edx_20
        edx_20:eax_63 = sx.q(((eax_59 - edx_19) s>> 1) * ebx_13)
        int32_t eax_67
        int32_t edx_21
        edx_21:eax_67 = sx.q(ecx_16)
        int32_t eax_72
        int32_t edx_23
        edx_23:eax_72 = sx.q(*arg2)
        int32_t eax_75
        int32_t edx_24
        edx_24:eax_75 = sx.q(arg2[2])
        int32_t ebx_17 = ((eax_72 - edx_23) s>> 1) + ((eax_67 + (edx_21 & 3)) s>> 2) + ecx_16
            + ((eax_63 - edx_20) s>> 1) + edi[4]
        int32_t eax_78
        int32_t edx_25
        edx_25:eax_78 = sx.q(arg2[3])
        int32_t ecx_20 = (eax_75 - edx_24) s>> 1
        int32_t var_c_4 = ecx_20
        int32_t var_8_2 = 0
        
        if ((eax_78 - edx_25) s>> 1 s> 0)
            int32_t eax_82
            int32_t edx_26
            edx_26:eax_82 = sx.q(arg4)
            
            while (true)
                int32_t var_20_5 = ecx_20
                int32_t* var_24_5 = arg1
                int32_t var_28_5 = ebx_17
                sub_5cd110()
                arg1 += (eax_82 - edx_26) s>> 1
                int32_t eax_87
                int32_t edx_28
                edx_28:eax_87 = sx.q(edi[2])
                ebx_17 += (eax_87 - edx_28) s>> 1
                int32_t eax_91
                int32_t edx_29
                edx_29:eax_91 = sx.q(arg2[3])
                int32_t ecx_22 = var_8_2 + 1
                var_8_2 = ecx_22
                
                if (ecx_22 s>= (eax_91 - edx_29) s>> 1)
                    break
                
                ecx_20 = var_c_4
    else if (eax == 0x59565955)
        goto label_610684
    
    return 0
}
