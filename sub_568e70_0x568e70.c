// 函数名称: sub_568e70
// 虚拟地址: 0x568e70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_568e70(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(edi - 1)
    int32_t esi_1 = (eax_1 - edx) s>> 1
    int32_t entry_ebx
    
    if (arg2 s>= edi)
        int32_t eax_10 = *arg3
        *(entry_ebx + (edi << 2)) = eax_10
        return eax_10
    
    do
        char eax_4 = arg4(entry_ebx + (esi_1 << 2), arg3)
        
        if (eax_4 == 0)
            *(entry_ebx + (edi << 2)) = *arg3
            return eax_4
        
        *(entry_ebx + (edi << 2)) = *(entry_ebx + (esi_1 << 2))
        int32_t eax_6
        int32_t edx_2
        edx_2:eax_6 = sx.q(esi_1 - 1)
        edi = esi_1
        esi_1 = (eax_6 - edx_2) s>> 1
    while (arg2 s< edi)
    
    *(entry_ebx + (edi << 2)) = *arg3
    return arg3
}
