// 函数名称: sub_4657e0
// 虚拟地址: 0x4657e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4657e0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(edi - 1)
    int32_t esi_1 = (eax_1 - edx) s>> 1
    int32_t entry_ebx
    
    if (arg2 s>= edi)
        *(entry_ebx + (edi << 2)) = *arg3
        return arg3
    
    int32_t eax_9
    
    do
        if (arg4(*(entry_ebx + (esi_1 << 2)), *arg3) == 0)
            int32_t eax_11 = *arg3
            *(entry_ebx + (edi << 2)) = eax_11
            return eax_11
        
        *(entry_ebx + (edi << 2)) = *(entry_ebx + (esi_1 << 2))
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(esi_1 - 1)
        edi = esi_1
        eax_9 = (eax_7 - edx_2) s>> 1
        esi_1 = eax_9
    while (arg2 s< edi)
    
    *(entry_ebx + (edi << 2)) = *arg3
    return eax_9
}
