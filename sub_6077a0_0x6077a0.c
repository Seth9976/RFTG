// 函数名称: sub_6077a0
// 虚拟地址: 0x6077a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6077a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1[0xd]
    int32_t* ebx = arg1[0xd]
    int32_t* esi = *ebx
    
    if ((*arg1 & 2) != 0)
        sub_6073a0(arg1, 1)
    
    bool cond:1 = (ebx[0x11] & 0x1000) == 0
    ebx[2] = sub_607520
    ebx[0xe] = arg1[1]
    ebx[7] = arg1[4]
    ebx[0xf] = esi[1]
    ebx[0xc] = esi[4]
    int32_t eax_2
    
    if (not(cond:1))
        eax_2 = sub_607460(arg1)
    
    if (not(cond:1) && eax_2 == 0)
        return 
    
    void* eax_3
    
    if (ebx[1] == 0 || (ebx[0x11] & 0xffffefff) != 0)
        int32_t* ecx_1 = arg1[1]
        
        if (ecx_1[2].b u>= 8)
        label_60784f:
            
            if (*(ecx_1 + 9) != 1)
            label_607888:
                
                if ((ebx[0x11].b & 0x10) == 0)
                    eax_3 = sub_6298a0(arg1)
                else
                    eax_3 = sub_631400(arg1)
            else
                int32_t eax_7 = *ecx_1
                
                if (eax_7 != 0 && (eax_7 & 0xf0000000) != 0x10000000)
                    goto label_607888
                
                int32_t eax_9 = eax_7 u>> 0x18 & 0xf
                
                if (eax_9 != 1 && eax_9 != 2 && eax_9 != 3)
                    goto label_607888
                
                eax_3 = sub_634210(arg1)
        else
            int32_t eax_4 = *ecx_1
            
            if (eax_4 != 0 && (eax_4 & 0xf0000000) != 0x10000000)
                goto label_60784f
            
            int32_t eax_6 = eax_4 u>> 0x18 & 0xf
            
            if (eax_6 != 1 && eax_6 != 2 && eax_6 != 3)
                goto label_60784f
            
            eax_3 = sub_634f20(arg1)
    else
        eax_3 = sub_635090
    
    if (eax_3 == 0)
        int80_t st0_1
        st0_1, eax_3 = sub_607670(ebx[0x11], *arg1[1], *esi[1], 0x8baed8)
        
        if (eax_3 == 0)
            int32_t ecx_6 = *arg1[1]
            int32_t esi_2 = *esi[1]
            
            if (ecx_6 == 0 || (ecx_6 & 0xf0000000) == 0x10000000)
                int32_t edx_11 = ecx_6 u>> 0x18 & 0xf
                
                if (edx_11 != 1 && edx_11 != 2 && edx_11 != 3)
                    goto label_607902
            else
            label_607902:
                
                if (ecx_6 == 0 || (ecx_6 & 0xf0000000) == 0x10000000)
                    if (esi_2 == 0 || (esi_2 & 0xf0000000) == 0x10000000)
                        int32_t ecx_12 = esi_2 u>> 0x18 & 0xf
                        
                        if (ecx_12 != 1 && ecx_12 != 2 && ecx_12 != 3)
                            goto label_60793f
                    else
                    label_60793f:
                        
                        if (esi_2 == 0 || (esi_2 & 0xf0000000) == 0x10000000)
                            eax_3 = sub_6125b0
    
    ebx[3] = eax_3
    
    if (eax_3 == 0)
        sub_5d8400(ebx)
        sub_5cce60("Blit combination not supported")
}
