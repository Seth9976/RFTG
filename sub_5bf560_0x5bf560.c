// 函数名称: sub_5bf560
// 虚拟地址: 0x5bf560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bf560(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if ((*arg2 & 2) != 0)
    if ((*arg2 & 2) != 0)
        arg1[4] = arg2[4]
        arg1[5] = arg2[5]
    
    if ((*arg2 & 4) != 0)
        arg1[6] = arg2[6]
        arg1[7] = arg2[7]
    
    if ((*arg2 & 8) != 0)
        arg1[8] = arg2[8]
        arg1[9] = arg2[9]
    
    if ((*arg2 & 0x10) != 0)
        arg1[0xa] = arg2[0xa]
        arg1[0xb] = arg2[0xb]
    
    if ((*arg2 & 0x20) != 0)
        arg1[0xc] = arg2[0xc]
    
    if ((*arg2 & 0x40) != 0)
        int32_t ecx_26
        ecx_26.w = arg2[0xd].w
        arg1[0xd].w = ecx_26.w
    
    if ((*arg2 & 0x80) != 0)
        int32_t ecx_29
        ecx_29.w = *(arg2 + 0x36)
        *(arg1 + 0x36) = ecx_29.w
    
    if ((*arg2 & 0x100) != 0)
        arg1[0xe] = arg2[0xe]
    
    *arg1 |= *arg2
    arg1[1] |= arg2[1]
    return 0
}
