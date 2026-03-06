// 函数名称: sub_646310
// 虚拟地址: 0x646310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_646310(void* arg1, int32_t* arg2 @ esi, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0x24)
    int32_t ebx = *(arg1 + 0x24)
    
    if (*(arg1 + 0x20) s<= ebx)
        return 0
    
    int32_t ecx = *(arg1 + 0x10)
    int32_t* ecx_1 = ecx + (ebx << 2)
    
    if ((*(ecx + (ebx << 2)) & 0x400) != 0)
        int32_t temp0 = *(arg1 + 0x158)
        *(arg1 + 0x158) += 1
        *(arg1 + 0x24) = ebx + 1
        *(arg1 + 0x15c) = adc.d(*(arg1 + 0x15c), 0, temp0 u>= 0xffffffff)
        return 0xffffffff
    
    if (arg2 != 0 || arg3 != arg2)
        int32_t ecx_2 = *ecx_1
        uint32_t edi_2 = zx.d(ecx_2.b)
        int32_t edx_2 = ecx_2 & 0x200
        int32_t var_8_1 = edx_2
        
        if (edi_2 == 0xff)
            int32_t* ecx_4 = ecx_1
            
            while (true)
                int32_t edx_3 = ecx_4[1]
                ebx += 1
                uint32_t ecx_7 = zx.d(edx_3.b)
                
                if ((edx_3 & 0x200) != 0)
                    var_8_1 = 0x200
                
                edi_2 += ecx_7
                
                if (ecx_7 != 0xff)
                    break
                
                ecx_4 = &ecx_4[1]
            
            edx_2 = var_8_1
        
        if (arg2 != 0)
            arg2[3] = edx_2
            arg2[2] = ecx_2 & 0x100
            *arg2 = *(arg1 + 0xc) + *arg1
            arg2[6] = *(arg1 + 0x158)
            arg2[7] = *(arg1 + 0x15c)
            int32_t ecx_11 = *(arg1 + 0x14)
            arg2[4] = *(ecx_11 + (ebx << 3))
            arg2[5] = *(ecx_11 + (ebx << 3) + 4)
            arg2[1] = edi_2
        
        if (arg3 != 0)
            *(arg1 + 0xc) += edi_2
            int32_t temp1_1 = *(arg1 + 0x158)
            *(arg1 + 0x158) += 1
            *(arg1 + 0x24) = ebx + 1
            *(arg1 + 0x15c) = adc.d(*(arg1 + 0x15c), 0, temp1_1 u>= 0xffffffff)
    
    return 1
}
