// 函数名称: sub_5c2190
// 虚拟地址: 0x5c2190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c2190(char* arg1, int32_t* arg2, int16_t arg3, char arg4, int32_t* arg5)
{
    // 第一条实际指令: char* eax_2 = sub_5c20b0(arg1, arg2, zx.d(arg3), arg4, arg5)
    char* eax_2 = sub_5c20b0(arg1, arg2, zx.d(arg3), arg4, arg5)
    
    if (eax_2 == 0)
        return eax_2
    
    int32_t* eax_3 = sub_5bf2e0(eax_2, arg3, 0, arg5)
    __free_base(eax_2)
    return eax_3
}
