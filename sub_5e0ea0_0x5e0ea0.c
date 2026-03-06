// 函数名称: sub_5e0ea0
// 虚拟地址: 0x5e0ea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e0ea0(int16_t arg1 @ x87control, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edi = arg2
    float* edx = *(edi + 0x10)
    uint32_t i_1 = *(edi + 0x18) u>> 2
    float* esi = edx
    
    if (i_1 != 0)
        uint32_t i
        
        do
            long double x87_r5_1 = fconvert.t(*edx)
            edx = &edx[1]
            int16_t x87status_1
            int16_t temp0_1
            temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
            arg2:2.w = temp0_1
            esi += 1
            i = i_1
            i_1 -= 1
            int16_t x87control
            int16_t x87status_2
            x87control, x87status_2 = __fldcw_memmem16(arg2:2.w | 0xc00)
            int16_t eax_2
            eax_2.b = (int.d((x87_r5_1 + float.t(1)) * fconvert.t(127.0))).b
            *(esi - 1) = eax_2.b
            int16_t x87status_3
            arg1, x87status_3 = __fldcw_memmem16(arg2:2.w)
        while (i != 1)
    
    int32_t eax_3 = *(edi + 0x18)
    *(edi + 0x50) += 1
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(eax_3)
    *(edi + 0x18) = (eax_4 + (edx_1 & 3)) s>> 2
    int32_t eax_7 = *(edi + 0x50)
    
    if (*(edi + (eax_7 << 2) + 0x28) != 0)
        (*(edi + (eax_7 << 2) + 0x28))(edi, 8)
}
