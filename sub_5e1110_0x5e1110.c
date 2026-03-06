// 函数名称: sub_5e1110
// 虚拟地址: 0x5e1110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e1110(int16_t arg1 @ x87control, void* arg2)
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
            long double x87_r6_1 = fconvert.t(*edx)
            edx = &edx[1]
            int16_t x87status_1
            int16_t temp0_1
            temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
            arg2:2.w = temp0_1
            esi += 2
            int16_t x87control
            int16_t x87status_2
            x87control, x87status_2 = __fldcw_memmem16(arg2:2.w | 0xc00)
            i = i_1
            i_1 -= 1
            int16_t x87status_3
            arg1, x87status_3 = __fldcw_memmem16(arg2:2.w)
            *(esi - 2) = rol.w((int.d(x87_r6_1 * fconvert.t(32767.0))).w, 8)
        while (i != 1)
    
    int32_t eax_3 = *(edi + 0x18)
    *(edi + 0x50) += 1
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(eax_3)
    *(edi + 0x18) = (eax_4 - edx_1) s>> 1
    int32_t eax_7 = *(edi + 0x50)
    
    if (*(edi + (eax_7 << 2) + 0x28) != 0)
        (*(edi + (eax_7 << 2) + 0x28))(edi, 0x9010)
}
