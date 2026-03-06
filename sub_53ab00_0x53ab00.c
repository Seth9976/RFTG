// 函数名称: sub_53ab00
// 虚拟地址: 0x53ab00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_53ab00(int32_t arg1 @ edi)
{
    // 第一条实际指令: void var_24
    void var_24
    int32_t* eax = sub_5374d0(&var_24)
    int32_t var_14 = *eax
    int32_t ecx_1 = eax[1]
    int32_t eax_1 = eax[3]
    POINT point
    point.x = eax[2]
    int32_t entry_ebx
    
    if (arg1 s< ecx_1 - 0x14)
        point.y = ecx_1
        point.x = entry_ebx
        ClientToScreen(data_3078830, &point)
        BOOL eax_3
        int32_t ecx_3
        eax_3, ecx_3 = SetCursorPos(point.x, point.y)
        int32_t var_30_3 = ecx_3
        point.y = fconvert.s(fconvert.t(data_3078840) + fconvert.t(0.5))
        int32_t eax_4
        long double st0_1
        st0_1, eax_4 = sub_5372e0(eax_3, 0, fconvert.s(fconvert.t(point.y)))
        data_3078840 = fconvert.s(st0_1)
        return eax_4
    
    if (arg1 s> eax_1 + 0x14)
        point.y = eax_1
        point.x = entry_ebx
        ClientToScreen(data_3078830, &point)
        BOOL eax_6
        int32_t ecx_6
        eax_6, ecx_6 = SetCursorPos(point.x, point.y)
        int32_t var_30_7 = ecx_6
        point.y = fconvert.s(fconvert.t(data_3078844) - fconvert.t(0.5))
        long double st0_2
        st0_2, eax_1 = sub_5372e0(eax_6, 1, fconvert.s(fconvert.t(point.y)))
        data_3078844 = fconvert.s(st0_2)
    
    return eax_1
}
