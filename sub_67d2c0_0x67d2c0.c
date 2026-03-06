// 函数名称: sub_67d2c0
// 虚拟地址: 0x67d2c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67d2c0(void* arg1 @ esi)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x1a8)
    void* ebx = *(arg1 + 0x1a8)
    int32_t edi = *(arg1 + 0x13c)
    int32_t eax_1 = (**(arg1 + 4))(arg1, 1, *(arg1 + 0x24) * 8)
    *(ebx + 0x38) = eax_1
    *(ebx + 0x3c) = eax_1 + (*(arg1 + 0x24) << 2)
    void* result = *(arg1 + 0xd8)
    int32_t ebx_1 = 0
    
    if (*(arg1 + 0x24) s> 0)
        int32_t* ecx_5 = result + 0xc
        int32_t* var_8_1 = ecx_5
        
        while (true)
            int32_t temp0_1 = divs.dp.d(sx.q(ecx_5[6] * *ecx_5), *(arg1 + 0x13c))
            int32_t edi_3 = (edi + 4) * temp0_1
            var_8_1 = &var_8_1[0x15]
            int32_t eax_8 = (**(arg1 + 4))(arg1, 1, edi_3 << 3) + (temp0_1 << 2)
            *(*(ebx + 0x38) + (ebx_1 << 2)) = eax_8
            result = eax_8 + (edi_3 << 2)
            *(*(ebx + 0x3c) + (ebx_1 << 2)) = result
            ebx_1 += 1
            
            if (ebx_1 s>= *(arg1 + 0x24))
                break
            
            ecx_5 = var_8_1
    
    return result
}
