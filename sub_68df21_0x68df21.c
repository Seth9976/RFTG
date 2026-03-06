// 函数名称: sub_68df21
// 虚拟地址: 0x68df21
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68df21(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 8
    int32_t result = *(arg1 - 0x10) & 8
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xfffffff7
    return sub_4c43d0(arg1 - 0x158) __tailcall
}
