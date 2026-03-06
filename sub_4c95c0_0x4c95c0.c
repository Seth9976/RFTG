// 函数名称: sub_4c95c0
// 虚拟地址: 0x4c95c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c95c0()
{
    // 第一条实际指令: int32_t eax_21 = data_be1a58
    int32_t eax_21 = data_be1a58
    
    if (eax_21 u>= 0x270)
        if (eax_21 == 0x271)
            sub_4c9580(0x1571)
        
        int32_t i
        
        for (i = 0; i s< 0xe3; )
            int32_t eax_1 = *((i << 2) + &data_be109c) ^ (&data_be1098)[i]
            i += 1
            int32_t eax_3 = (eax_1 & 0x7fffffff) ^ (&data_be1094)[i]
            (&data_be1094)[i] = eax_3 u>> 1 ^ *(((eax_3 & 1) << 2) + &data_bec22c) ^ (&data_be16c8)[i]
        
        if (i s< 0x26f)
            void* i_1 = &(&data_be1098)[i]
            
            do
                int32_t eax_8 = *(i_1 + 4) ^ *i_1
                i_1 += 4
                int32_t eax_10 = (eax_8 & 0x7fffffff) ^ *(i_1 - 4)
                *(i_1 - 4) = eax_10 u>> 1 ^ *(((eax_10 & 1) << 2) + &data_bec22c) ^ *(i_1 - 0x390)
            while (i_1 s< &data_be1a54)
        
        int32_t ecx_1 = data_be1a54
        int32_t eax_17 = ((data_be1098 ^ ecx_1) & 0x7fffffff) ^ ecx_1
        data_be1a54 = eax_17 u>> 1 ^ *(((eax_17 & 1) << 2) + &data_bec22c) ^ data_be16c8
        eax_21 = 0
        data_be1a58 = 0
    
    int32_t ecx_4 = (&data_be1098)[eax_21]
    int32_t ecx_5 = ecx_4 ^ ecx_4 u>> 0xb
    data_be1a58 = eax_21 + 1
    int32_t ecx_6 = ecx_5 ^ (ecx_5 & 0xff3a58ad) << 7
    int32_t ecx_7 = ecx_6 ^ (ecx_6 & 0xffffdf8c) << 0xf
    return ecx_7 u>> 0x12 ^ ecx_7
}
