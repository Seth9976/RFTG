// 函数名称: sub_6111f0
// 虚拟地址: 0x6111f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6111f0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    while (*esi == 0)
        sub_6111f0(esi[1], arg2, arg3)
        sub_6111f0(esi[2], arg2, arg3)
        sub_6111f0(esi[3], arg2, arg3)
        esi = esi[4]
    
    return arg2(esi, arg3)
}
