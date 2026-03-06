// 函数名称: sub_488a60
// 虚拟地址: 0x488a60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_488a60()
{
    // 第一条实际指令: if (*(data_27e7a40 + 0x2c4960) != 2 && data_30d7278 == 0)
    if (*(data_27e7a40 + 0x2c4960) != 2 && data_30d7278 == 0)
        return 0
    
    int32_t i = 0
    int32_t eax_1 = sub_4194b0()
    int32_t* ecx_1 = data_27e7a4c + 0x10
    
    do
        if (*ecx_1 == eax_1)
            return i
        
        i += 1
        ecx_1 = &ecx_1[0x1c]
    while (i s< 4)
    
    return 0
}
