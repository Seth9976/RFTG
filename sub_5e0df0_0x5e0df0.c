// 函数名称: sub_5e0df0
// 虚拟地址: 0x5e0df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e0df0(void* arg1)
{
    // 第一条实际指令: void* eax = arg1
    void* eax = arg1
    int32_t* edx = *(eax + 0x10)
    uint32_t i_1 = *(eax + 0x18) u>> 2
    int32_t* esi = edx
    float var_c
    int32_t var_8
    
    if (i_1 != 0)
        uint32_t i
        
        do
            int32_t eax_1 = *edx
            var_8 =
                ((eax_1 & 0xff0000) | eax_1 u>> 0x10) u>> 8 | ((eax_1 & 0xff00) | eax_1 << 0x10) << 8
            edx = &edx[1]
            esi = &esi[1]
            var_c = fconvert.s(float.t(var_8) * fconvert.t(4.6566128730773926e-10))
            i = i_1
            i_1 -= 1
            esi[-1] =
                ((var_c & 0xff0000) | var_c u>> 0x10) u>> 8 | ((var_c & 0xff00) | var_c << 0x10) << 8
        while (i != 1)
        eax = arg1
    
    *(eax + 0x50) += 1
    int32_t ecx_1 = *(eax + 0x50)
    
    if (*(eax + (ecx_1 << 2) + 0x28) != 0)
        (*(eax + (ecx_1 << 2) + 0x28))(eax, 0x9120, var_c, var_8)
}
