// 函数名称: sub_5cd1d0
// 虚拟地址: 0x5cd1d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cd1d0(int16_t* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (*arg1 != 0)
        int16_t* ecx_1 = arg1
        
        do
            ecx_1 = &ecx_1[1]
            result += 1
        while (*ecx_1 != 0)
    
    return result
}
