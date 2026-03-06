// 函数名称: sub_5c1840
// 虚拟地址: 0x5c1840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c1840(void** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void** i = arg1
    int32_t var_8_1 = 0
    int16_t result = 0
    
    for (; i != 0; i = *i)
        if ((i[1] & arg2 & 0x300) != 0)
            int32_t esi_2
            esi_2.w = *(i + 0xa)
            esi_2.w += 4
            result += esi_2.w
    
    return result
}
