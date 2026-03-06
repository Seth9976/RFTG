// 函数名称: sub_6033d0
// 虚拟地址: 0x6033d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_6033d0(int32_t arg1, int32_t arg2, HRGN arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: HRGN hRgn = arg3
    HRGN hRgn = arg3
    hRgn = nullptr
    
    if (arg4 != 0 && arg5 != 0 && (*(arg5[1] + 0x18) != 0 || *arg6 == 3))
        void* eax_1 = *arg4
        
        if (arg5[2] == *(eax_1 + 0x18) && arg5[3] == *(eax_1 + 0x1c))
            int32_t* edi = arg4[6]
            
            if (*edi != 0)
                sub_611240(edi)
            
            int32_t* eax_4 = sub_611180(*arg6, (arg6[1]).b, arg5)
            *edi = eax_4
            sub_6111f0(eax_4, sub_603370, &hRgn)
            SetWindowRgn(*(*(*arg4 + 0x74) + 4), hRgn, 1)
            return 0
    
    return 0xfffffffe
}
