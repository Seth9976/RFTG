// 函数名称: sub_402350
// 虚拟地址: 0x402350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_402350()
{
    // 第一条实际指令: sub_4c5680("CardNetReset")
    sub_4c5680("CardNetReset")
    int32_t edx = data_8c8720
    void* ecx = data_27e7bb8
    data_8c8708 = 0
    
    if (edx != 0)
        uint32_t eax_1 = zx.d(edx.w)
        
        if (eax_1 u< *(ecx + 4))
            int32_t* eax_3 = eax_1 * 0x4c + *ecx
            
            if (eax_3[0x12] == edx)
                sub_4c6a10(eax_3)
                ecx = data_27e7bb8
        
        data_8c8720 = 0
    
    int32_t edx_1 = data_8c8734
    
    if (edx_1 != 0)
        uint32_t eax_4 = zx.d(edx_1.w)
        
        if (eax_4 u< *(ecx + 4))
            int32_t* eax_6 = eax_4 * 0x4c + *ecx
            
            if (eax_6[0x12] == edx_1)
                sub_4c6a10(eax_6)
        
        data_8c8734 = 0
    
    return sub_4c4590(&data_83f3d3)
}
