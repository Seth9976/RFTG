// 函数名称: sub_5d9040
// 虚拟地址: 0x5d9040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d9040(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 != 0xbf7fc5)
    if (arg1 == 0 || *arg1 != 0xbf7fc5)
        sub_5cce60("Invalid texture")
        return 0xffffffff
    
    if (arg2 != 0)
        *arg2 = arg1[1]
    
    if (arg3 != 0)
        *arg3 = arg1[2]
    
    if (arg4 != 0)
        *arg4 = arg1[3]
    
    if (arg5 != 0)
        *arg5 = arg1[4]
    
    return 0
}
