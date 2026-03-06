// 函数名称: sub_665300
// 虚拟地址: 0x665300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_665300(uint32_t arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    int32_t edi_1 = arg4
    
    if (edi_1 == 0)
        return 
    
    int128_t* esi_1 = sub_666560(arg1, (*(arg2 + 0xc0) + edi_1) * 0x14)
    int128_t* var_c_1 = esi_1
    
    if (esi_1 == 0)
        sub_664100(arg1, "Out of memory while processing unknown chunk")
        return 
    
    sub_5ab990(esi_1, *(arg2 + 0xbc), *(arg2 + 0xc0) * 0x14)
    sub_666530(arg1, *(arg2 + 0xbc))
    int32_t ecx_3 = 0
    *(arg2 + 0xbc) = 0
    int32_t var_8_1 = 0
    
    if (edi_1 s> 0)
        void* edi_3 = arg3 + 0xc
        
        do
            int32_t* esi_2 = esi_1 + (*(arg2 + 0xc0) + ecx_3) * 0x14
            *esi_2 = *(edi_3 - 0xc)
            esi_2[1].b = 0
            esi_2[3] = *edi_3
            int32_t ecx_4
            ecx_4.b = *(arg1 + 0x6c)
            esi_2[4].b = ecx_4.b
            
            if (*edi_3 != 0)
                int128_t* eax_14 = sub_666560(arg1, *edi_3)
                esi_2[2] = eax_14
                
                if (eax_14 != 0)
                    sub_5ab990(eax_14, *(edi_3 - 4), *edi_3)
                else
                    sub_664100(arg1, "Out of memory while processing unknown chunk")
                    esi_2[3] = 0
            else
                esi_2[2] = 0
            
            esi_1 = var_c_1
            ecx_3 = var_8_1 + 1
            edi_3 += 0x14
            var_8_1 = ecx_3
        while (ecx_3 s< arg4)
        
        edi_1 = arg4
    
    *(arg2 + 0xc0) += edi_1
    *(arg2 + 0xb8) |= 0x200
    *(arg2 + 0xbc) = esi_1
}
