// 函数名称: sub_4d8a40
// 虚拟地址: 0x4d8a40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d8a40()
{
    // 第一条实际指令: int32_t* i = nullptr
    for (int32_t* i = nullptr; i s< 0x10; i = &i[1])
        if ((*(*data_3078804 + 0x28))(*(i + data_27e7fe0)) == 0)
            *(i + data_27e7fe0) = (*(*data_3078804 + 0x24))(0, 0x18000, 1, 1)
    
    int32_t result = (*(*data_3078804 + 0x34))(*(data_27e7fe0 + 0x14))
    
    if (result.b == 0)
        void* eax_8 = sub_4cce80(0x3000)
        int32_t i_1 = 0
        void* eax_9 = eax_8 + 4
        
        do
            int16_t ecx_5 = (i_1 << 2).w
            *(eax_9 - 4) = ecx_5
            *(eax_9 - 2) = ecx_5 + 1
            *eax_9 = ecx_5 + 2
            *(eax_9 + 2) = ecx_5 + 2
            *(eax_9 + 4) = ecx_5 + 1
            *(eax_9 + 6) = ecx_5 + 3
            i_1 += 1
            eax_9 += 0xc
        while (i_1 s< 0x400)
        
        result = (*(*data_3078804 + 0x30))(eax_8, 0x3000, 0, 0, 0)
        *(data_27e7fe0 + 0x14) = result
        
        if (eax_8 != 0)
            return _aligned_free_base(eax_8)
    
    return result
}
