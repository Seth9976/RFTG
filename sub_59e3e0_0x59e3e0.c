// 函数名称: sub_59e3e0
// 虚拟地址: 0x59e3e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_59e3e0(void* arg1, void** arg2, uint32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t i_1 = 0x5c
    int32_t i_1 = 0x5c
    int32_t i
    
    do
        int32_t eax = *(arg1 + 0xa8)
        
        if (eax u< *(arg1 + 0xac))
            *(arg1 + 0xa8) = eax + 1
        else if (*(arg1 + 0x20) != 0)
            int32_t eax_3 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
            
            if (eax_3 != 0)
                *(arg1 + 0xa8) = arg1 + 0x28
                *(arg1 + 0xac) = arg1 + 0x28 + eax_3
            else
                *(arg1 + 0x20) = eax_3
                char* eax_5 = *(arg1 + 0xac) - 1
                *(arg1 + 0xa8) = eax_5
                *eax_5 = 0
            
            *(arg1 + 0xa8) += 1
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    uint32_t eax_6 = sub_5959c0(arg1)
    uint32_t eax_7 = sub_5959c0(arg1)
    uint32_t edi_3 = eax_7
    
    if (*(arg1 + 0x10) != 0)
        eax_7 = (*(arg1 + 0x18))(*(arg1 + 0x1c))
        
        if (eax_7 != 0 && (*(arg1 + 0x20) == 0
                || sbb.d(eax_7, eax_7, *(arg1 + 0xa8) u< *(arg1 + 0xac)) != 0xffffffff))
            data_273ac1c = "bad file"
            return 0
    else if (sbb.d(eax_7, eax_7, *(arg1 + 0xa8) u< *(arg1 + 0xac)) != 0xffffffff)
        data_273ac1c = "bad file"
        return 0
    
    if (divs.dp.d(0x10000000, eax_6) s< edi_3)
        data_273ac1c = "too large"
        return 0
    
    sub_5959c0(arg1)
    sub_5959c0(arg1)
    sub_5959c0(arg1)
    sub_5959c0(arg1)
    uint32_t edi_6 = edi_3 * eax_6 * 4
    char* ebx_1 = sub_5a881a(edi_6)
    sub_5abfc0(ebx_1, 0xff, edi_6)
    void* edi_7 = eax_6
    
    if (sub_59dd70(edi_3, ebx_1, arg4, arg1, edi_7, edi_3) == 0)
        __free_base(ebx_1)
        ebx_1 = nullptr
    
    *arg2 = edi_7
    int32_t ecx_5 = *arg4
    *arg3 = edi_3
    return sub_595bc0(edi_3, 4, ecx_5, ebx_1, edi_7)
}
