// 函数名称: sub_446a60
// 虚拟地址: 0x446a60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_446a60(int32_t* arg1)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (*(eax_1 + 0x2c079) != 0 || *(eax_1 + 0x2c07a) != 0)
        return 
    
    int32_t* esi_1 = arg1
    *esi_1 = 0
    int32_t var_14
    sub_4c6230(&var_14)
    int32_t* edi_2 = sub_418a10()
    int32_t i = 0
    void var_38
    float var_24
    
    if (edi_2[0x116].b s> 0)
        do
            if (i != *(data_27e7a40 + 0x74))
                int32_t* eax_3 = sub_45fbf0(&var_38)
                int32_t edx_1 = eax_3[1]
                var_24 = *eax_3
                int32_t var_20_1 = edx_1
                int32_t var_1c_1 = eax_3[2]
                int32_t var_18_1 = eax_3[3]
                
                if (sub_4057a0(&var_24, &var_14) != 0)
                    *esi_1 = 0x14
                    esi_1[2] = i
            
            i += 1
        while (i s< sx.d(edi_2[0x116].b))
    
    int32_t* i_1 = nullptr
    label_446b19:
    void* ecx_7 = *(data_27e7a40 + 0x548)
    
    if (i_1 != 0)
        i_1 = &i_1[0x2c]
    else
        i_1 = *(ecx_7 + 0x43960)
    
    for (; i_1 u< *(ecx_7 + 0x43964) * 0xb0 + *(ecx_7 + 0x43960); i_1 = &i_1[0x2c])
        if ((i_1[0x2b] & 0xffff0000) != 0)
            int32_t eax_11 = *i_1
            int32_t* var_10
            
            if (eax_11 == 4)
                int32_t eax_12 = var_14
                int32_t* var_4c_3 = var_10
                int32_t var_50_1 = eax_12
                int32_t* var_54_1 = esi_1
                sub_445c10(eax_12, i_1, var_10)
            else if (eax_11 != 6)
                if (eax_11 != 0 && eax_11 != 1)
                    goto label_446b19
                
                if (sub_445cd0(i_1) != 0)
                    goto label_446b19
                
                if (i_1[0x1f] s> 0x1f4)
                    goto label_446b19
                
                int32_t eax_16 = *(*(data_27e7a40 + 0x548) + 0xbfb0)
                
                if (eax_16 == 0xffffffff || i_1[0x17] != 3)
                    goto label_446c41
                
                int32_t eax_18 = *sub_46b2b0(eax_16)
                
                if (i_1[0x16] == eax_18)
                    esi_1 = arg1
                label_446c41:
                    int32_t eax_21 = sub_446520(i_1) - 1
                    
                    if (eax_21 u> 0xb)
                    label_446c55:
                        
                        if (*i_1 == 1)
                            goto label_446b19
                        
                        int32_t eax_22 = i_1[0x17]
                        
                        if (eax_22 != 3 && eax_22 != 2
                                && *(data_27e7a40 + 0x74) != sx.d(edi_2[i_1[0x1f] * 5 + 0x119].b))
                            goto label_446b19
                        
                        goto label_446c90
                    
                    switch (eax_21)
                        case 0, 3, 4, 6, 7, 0xa, 0xb
                        label_446c90:
                            int32_t* var_4c_5 = var_10
                            int32_t var_50_3 = var_14
                            sub_426b10(i_1, esi_1)
                        case 1, 2, 5, 8, 9
                            goto label_446c55
            else
                int32_t* var_4c_4 = var_10
                int32_t var_50_2 = var_14
                sub_445b80(i_1, esi_1)
            esi_1 = arg1
            goto label_446b19
    
    if (*esi_1 != 0)
        return 
    
    int32_t* eax_9 = sub_41e8e0(&var_38)
    int32_t edx_4 = eax_9[1]
    var_24 = *eax_9
    int32_t var_20_2 = edx_4
    int32_t var_1c_2 = eax_9[2]
    int32_t var_18_2 = eax_9[3]
    
    if (sub_4057a0(&var_24, &var_14) != 0)
        *esi_1 = 0xf
}
