// 函数名称: __chkstk
// 虚拟地址: 0x5b9390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* const __convention("regparm")__chkstk(int32_t arg1)
{
    // 第一条实际指令: void* ecx_1 = (&__return_addr - arg1) & not.d(sbb.d(arg1, arg1, &__return_addr u< arg1))
    void* ecx_1 = (&__return_addr - arg1) & not.d(sbb.d(arg1, arg1, &__return_addr u< arg1))
    int32_t __saved_ecx
    void* eax_2 = &__saved_ecx & 0xfffff000
    
    while (ecx_1 u< eax_2)
        eax_2 -= 0x1000
        *eax_2
    
    void* const result = __return_addr
    *ecx_1 = result
    return result
}
