// 函数名称: sub_46a8a0
// 虚拟地址: 0x46a8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46a8a0(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* eax = sub_46b2b0(arg1)
    void* eax = sub_46b2b0(arg1)
    int32_t esi_1 = *(eax + 0x1a10)
    
    if (esi_1 != *(arg2 + 0xac))
        return sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, esi_1)
    
    return sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(eax + 0x1a14))
}
