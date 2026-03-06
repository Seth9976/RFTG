// 函数名称: sub_664b00
// 虚拟地址: 0x664b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_664b00(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    *(arg2 + 8) |= 0x80
    *(arg2 + 0x70) = arg3
    int32_t ecx_1
    ecx_1.b = arg5
    *(arg2 + 0x74) = arg4
    *(arg2 + 0x78) = ecx_1.b
}
