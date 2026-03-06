// 函数名称: sub_4dbaf0
// 虚拟地址: 0x4dbaf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4dbaf0()
{
    // 第一条实际指令: if ((*(*data_3078804 + 0x28))(*((data_3068584 << 2) + &data_3068574)) == 0)
    if ((*(*data_3078804 + 0x28))(*((data_3068584 << 2) + &data_3068574)) == 0)
        *((data_3068584 << 2) + &data_3068574) = (*(*data_3078804 + 0x24))(0, 0x280000, 0xa, 1)
    
    int32_t result = (*(*data_3078804 + 0x34))(data_3068570)
    
    if (result.b == 0)
        void* eax_6 = sub_4cce80(0x30000)
        int32_t i = 0
        void* eax_7 = eax_6 + 4
        
        do
            int16_t ecx_3 = (i << 2).w
            *(eax_7 - 4) = ecx_3
            *(eax_7 - 2) = ecx_3 + 2
            *eax_7 = ecx_3 + 1
            *(eax_7 + 2) = ecx_3 + 1
            *(eax_7 + 4) = ecx_3 + 2
            *(eax_7 + 6) = ecx_3 + 3
            i += 1
            eax_7 += 0xc
        while (i s< 0x4000)
        
        result = (*(*data_3078804 + 0x30))(eax_6, 0x30000, 0, 0, *((data_3068584 << 2) + &data_3068574))
        data_3068570 = result
        
        if (eax_6 != 0)
            return _aligned_free_base(eax_6)
    
    return result
}
