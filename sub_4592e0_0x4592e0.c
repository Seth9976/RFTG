// 函数名称: sub_4592e0
// 虚拟地址: 0x4592e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4592e0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = sub_457850(ecx)
    
    if (result == 1)
        result = arg3
    
    int32_t ecx_3 = (arg2 + (arg1 << 2)) * 0x1c0
    int32_t edx_2 = *(data_27e7a40 + 0x548)
    int32_t esi = *(ecx_3 + edx_2 + 0x2c254)
    int32_t edx_3 = 0
    *(ecx_3 + edx_2 + 0x2c228) = 1
    
    if (esi s> 0)
        int32_t* edi_1 = ecx_3 + edx_2 + 0x2c22c
        
        do
            if (*edi_1 == result)
                *(ecx_3 + edx_2 + 0x2c0c0 + (edx_3 << 3) + 0x170) += 1
                return result
            
            edx_3 += 1
            edi_1 = &edi_1[2]
        while (edx_3 s< esi)
    
    *(ecx_3 + edx_2 + 0x2c254) = esi + 1
    *(ecx_3 + edx_2 + 0x2c0c0 + (esi << 3) + 0x16c) = result
    *(ecx_3 + edx_2 + 0x2c0c0 + (esi << 3) + 0x170) = 1
    return result
}
