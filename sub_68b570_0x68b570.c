// 函数名称: sub_68b570
// 虚拟地址: 0x68b570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68b570(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1c)
    void* esi = *(arg1 + 0x1c)
    void var_18
    sub_68af60(&var_18, *arg2, arg2[1])
    
    if (sub_68b0a0(&var_18, 1) != 0)
        return 0xffffff79
    
    int32_t i = *(esi + 8)
    int32_t ecx_1 = 0
    
    while (i s> 1)
        i s>>= 1
        ecx_1 += 1
    
    int32_t eax_4 = sub_68b0a0(&var_18, ecx_1)
    
    if (eax_4 != 0xffffffff)
        return *(esi + (**(esi + (eax_4 << 2) + 0x20) << 2))
    
    return 0xffffff78
}
