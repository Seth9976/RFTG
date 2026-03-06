// 函数名称: sub_4694e0
// 虚拟地址: 0x4694e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4694e0(void* arg1, void* arg2 @ edi)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x140)
    int32_t eax = *(arg1 + 0x140)
    *(arg1 + 0x140) = eax + 1
    void* esi_2 = eax * 0x50 + arg1
    *esi_2 = *(arg2 + 4)
    _strncpy(esi_2 + 0xc, arg2 + 0x10, 0x20)
    *(esi_2 + 0x2b) = 0
    int32_t ecx_2 = *(arg2 + 0x30)
    *(esi_2 + 0x30) = 0
    *(esi_2 + 0x2c) = ecx_2
    
    if (sub_469460(arg1) != 0)
        sub_469260()
    
    return sub_4b6cc0(arg1)
}
