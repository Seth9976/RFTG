// 函数名称: sub_5e12f0
// 虚拟地址: 0x5e12f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e12f0(int16_t arg1 @ x87control, void* arg2)
{
    // 第一条实际指令: void* edi = arg2
    void* edi = arg2
    float* edx = *(edi + 0x10)
    uint32_t i_1 = *(edi + 0x18) u>> 2
    float* esi = edx
    
    if (i_1 != 0)
        uint32_t i
        
        do
            long double x87_r5_1 = fconvert.t(*edx)
            edx = &edx[1]
            float var_c_1 = fconvert.s(x87_r5_1)
            esi += 1
            int16_t x87status_1
            int16_t temp0_1
            temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
            i = i_1
            i_1 -= 1
            int16_t x87control
            int16_t x87status_2
            x87control, x87status_2 = __fldcw_memmem16(temp0_1 | 0xc00)
            int16_t eax_4
            eax_4.b = (int.d((fconvert.t(((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                | ((var_c_1 & 0xff00) | var_c_1 << 0x10) << 8) + float.t(1)) * fconvert.t(127.0))).b
            *(esi - 1) = eax_4.b
            int16_t x87status_3
            arg1, x87status_3 = __fldcw_memmem16(temp0_1)
        while (i != 1)
        edi = arg2
    
    int32_t eax_5 = *(edi + 0x18)
    *(edi + 0x50) += 1
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(eax_5)
    *(edi + 0x18) = (eax_6 + (edx_1 & 3)) s>> 2
    int32_t eax_9 = *(edi + 0x50)
    
    if (*(edi + (eax_9 << 2) + 0x28) != 0)
        (*(edi + (eax_9 << 2) + 0x28))(edi, 8)
}
