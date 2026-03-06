// 函数名称: sub_4f9a10
// 虚拟地址: 0x4f9a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4f9a10(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0xd] s> *arg1)
    if (arg1[0xd] s> *arg1)
        return arg1[0xe]
    
    if (*(arg1 + 0x23) != 0 || arg1[9].b != 0)
        return 3
    
    int32_t ecx
    ecx.b = *(arg1 + 0x29)
    
    if (ecx.b != 0)
        if (*(arg1 + 0x2b) != 0 && arg1[0xb].b != 0)
            return 2
        
        if (ecx.b != 0 && *(arg1 + 0x2b) == 0)
            return 1
    
    return 0
}
