// 函数名称: sub_66e2a0
// 虚拟地址: 0x66e2a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_66e2a0(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg1 + 9) != 8 || *(arg1 + 8) == 3)
    if (*(arg1 + 9) != 8 || *(arg1 + 8) == 3)
        return 
    
    void* eax = *(arg1 + 4)
    void* ecx_2 = arg2 + eax
    void* i
    
    for (i = eax + ecx_2; i u> ecx_2; i -= 2)
        char edx = *(ecx_2 - 1)
        ecx_2 -= 1
        *(i - 1) = edx
        *(i - 2) = edx
    
    i.b = *(arg1 + 0xa)
    i.b <<= 4
    *(arg1 + 4) *= 2
    *(arg1 + 9) = 0x10
    *(arg1 + 0xb) = i.b
}
