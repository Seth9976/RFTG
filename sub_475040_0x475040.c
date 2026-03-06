// 函数名称: sub_475040
// 虚拟地址: 0x475040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_475040()
{
    // 第一条实际指令: if (data_307cd0c == 0)
    if (data_307cd0c == 0)
        int32_t esi_1
        bool cond:1_1
        
        if (data_307d8b8 == 0)
            if (data_307d8cc != 0)
                esi_1 = *((data_307d968 << 2) + &data_307d8dc)
                goto label_475089
            
            if (data_307d8d4 != 0)
                esi_1 = data_307d91c
                goto label_475089
            
            if (data_307d96c != 0)
                cond:1_1 = sub_4fa2a0(data_307d974) != 2
                goto label_47509b
            
            if (data_307d978 == 0)
                if (data_307d594 == 0)
                    if (data_307cdb8 != 0)
                        cond:1_1 = sub_4fa2a0(data_307cdc0) != 2
                        goto label_47509b
                    
                    if (data_307cd50 != 0)
                        cond:1_1 = sub_4fa2a0(data_307cd58) != 2
                        goto label_47509b
                    
                    if (data_307cd38 != 0)
                        cond:1_1 = sub_4fa2a0(data_307cd44) != 2
                        goto label_47509b
                    
                    if (data_307cd14 != 0)
                        cond:1_1 = sub_4fa2a0(data_307cd20) != 2
                        goto label_47509b
                    
                    if (data_307d9c0 == 0)
                        if (data_307d0cc != 0)
                            cond:1_1 = sub_4fa2a0(data_307d0c8) != 2
                        else if (data_307d590 != 0)
                            cond:1_1 = sub_4fa2a0(data_307d0ac) != 2
                        else if (data_307d094 == 0)
                            cond:1_1 = sub_4fa2a0(data_307cccc) != 2
                        else
                            cond:1_1 = sub_4c33e0(&data_307d094) != 2
                        
                        goto label_47509b
                    
                    long double x87_r7_1 = fconvert.t(data_307d9c4)
                    long double x87_r6_1 = float.t(1)
                    x87_r6_1 - x87_r7_1
                    int32_t eax
                    eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    if (p_1)
                        return 0
                    
                    esi_1 = data_307d9c8
                    goto label_475089
                
                void* esi_2 = &data_307d7d8
                
                while (sub_417880(0x307d5a8) != 2)
                    if (sub_417880(0x307d6b8) == 2)
                        break
                    
                    if (sub_505760(esi_2) == 2)
                        break
                    
                    esi_2 += 0x1c
                    
                    if (esi_2 s>= &data_307d8b8)
                        return 0
            else
                void* edx_1 = &data_307d990
                
                while (sub_505760(edx_1) != 2)
                    edx_1 += 0x1c
                    
                    if (edx_1 s>= &data_307d9c8)
                        return 0
        else
            esi_1 = (&data_307d8c0)[data_307d8c8]
        label_475089:
            
            if (esi_1 != 0)
                cond:1_1 = *(sub_4fc3d0(&data_be1cb8, esi_1) + 0x1c) != 2
            label_47509b:
                
                if (cond:1_1)
                    return 0
        return 2
    
    void* eax_1 = &data_307cdd5
    
    while (true)
        if (*eax_1 != 0)
            char ecx = *(eax_1 + 2)
            
            if (ecx == 0)
                return 2
            
            if (*(eax_1 + 3) != 0)
                return 2
            
            if (ecx == 0)
                return 2
        
        eax_1 += 0x1c
        
        if (eax_1 s>= 0x307d091)
            return 0
}
