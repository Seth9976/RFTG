// 函数名称: sub_672d80
// 虚拟地址: 0x672d80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_672d80(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    if ((*(arg1 + 0x74) & 0x100000) != 0)
        uint32_t eax = *(arg1 + 0x60)
        
        if (eax != 0)
            eax(arg1, arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x8000) != 0)
        sub_66ebc0(arg2, *(arg1 + 0x108) + 1, not.d(*(arg1 + 0x70) u>> 7) & 1)
    
    if ((*(arg1 + 0x74) & 0x10000) != 0)
        sub_66eb70(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 4) != 0)
        sub_672710(arg2, *(arg1 + 0x108) + 1, zx.d(*(arg1 + 0x13c)))
    
    if ((*(arg1 + 0x74) & 0x10) != 0)
        sub_66eb30(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 8) != 0)
        sub_672840(arg2, *(arg1 + 0x108) + 1, arg1 + 0x19d)
    
    if ((*(arg1 + 0x74) & 0x20000) != 0)
        sub_672ad0(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x80000) != 0)
        sub_672bf0(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 1) != 0)
        sub_66ed20(arg2, *(arg1 + 0x108) + 1)
    
    if ((*(arg1 + 0x74) & 0x20) != 0)
        sub_66eaa0(arg2, *(arg1 + 0x108) + 1)
}
