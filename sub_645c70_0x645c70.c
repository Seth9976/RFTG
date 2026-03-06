// 函数名称: sub_645c70
// 虚拟地址: 0x645c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_645c70(int32_t* arg1, void** arg2)
{
    // 第一条实际指令: int32_t eax = 0
    int32_t eax = 0
    
    if (arg1 == 0 || *arg1 == 0)
        return 0
    
    if (arg1[0x52] != 0 && arg1[7] != 0)
        eax = 1
    else if (arg1[7] != 0 && arg1[0x53] == 0)
        eax = 1
    
    return sub_6459c0(arg1, arg2, eax, 0x1000)
}
