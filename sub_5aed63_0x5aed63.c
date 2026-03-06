// 函数名称: sub_5aed63
// 虚拟地址: 0x5aed63
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5aed63()
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    int32_t i = 0
    int32_t edi_1 = 0xbec960
    
    do
        if (*((i << 3) + &data_8b8cac) == 1)
            *((i << 3) + &data_8b8ca8) = edi_1
            edi_1 += 0x18
            
            if (InitializeCriticalSectionAndSpinCount(*((i << 3) + &data_8b8ca8), 0xfa0) == 0)
                *((i << 3) + &data_8b8ca8) = 0
                return 0
        
        i += 1
    while (i s< 0x24)
    
    return 1
}
