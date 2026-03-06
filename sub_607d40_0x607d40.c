// 函数名称: sub_607d40
// 虚拟地址: 0x607d40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_607d40(void* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t eax = sub_607d00(arg1)
    int32_t eax = sub_607d00(arg1)
    
    if (eax == 0)
        sub_5cce60("Software renderer doesn't have an output surface")
        return 0xffffffff
    
    if (arg2 != 0)
        *arg2 = *(eax + 8)
    
    if (arg3 != 0)
        *arg3 = *(eax + 0xc)
    
    return 0
}
