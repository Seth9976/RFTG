// 函数名称: sub_5d9920
// 虚拟地址: 0x5d9920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d9920(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 != 0xbf7fc4)
    if (arg1 == 0 || *arg1 != 0xbf7fc4)
        sub_5cce60("Invalid renderer")
        return 0xffffffff
    
    int32_t* ecx = arg1[0x4a]
    
    if (ecx != 0)
        return sub_5d9040(ecx, nullptr, nullptr, arg2, arg3)
    
    int32_t ecx_1 = arg1[2]
    
    if (ecx_1 != 0)
        return ecx_1(arg1, arg2, arg3)
    
    int32_t* eax_4 = arg1[0x2f]
    
    if (eax_4 == 0)
        sub_5cce60("Renderer doesn't support querying output size")
        return 0xffffffff
    
    sub_5c9bb0(eax_4, arg2, arg3)
    return 0
}
