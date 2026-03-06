// 函数名称: sub_5dfe40
// 虚拟地址: 0x5dfe40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5dfe40(void* arg1)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t eax = *(edi + 0x18)
    int32_t esi = *(edi + 0x10)
    int16_t* edx = esi + eax - 2
    void* esi_1 = esi + (eax << 1) - 4
    uint32_t i_2 = eax u>> 1
    uint32_t i_1 = i_2
    
    if (i_2 != 0)
        uint32_t i
        
        do
            int32_t eax_1 = sx.d(*edx)
            edx -= 2
            esi_1 -= 4
            float var_c_1 = fconvert.s(float.t(eax_1) * fconvert.t(3.0518509447574615e-05))
            i = i_1
            i_1 -= 1
            *(esi_1 + 4) = ((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                | ((var_c_1 & 0xff00) | var_c_1 << 0x10) << 8
        while (i != 1)
        edi = arg1
    
    int32_t ecx = *(edi + 0x18)
    *(edi + 0x50) += 1
    int32_t eax_4 = *(edi + 0x50)
    *(edi + 0x18) = ecx * 2
    
    if (*(edi + (eax_4 << 2) + 0x28) != 0)
        (*(edi + (eax_4 << 2) + 0x28))(edi, 0x9120)
}
