// 函数名称: sub_5e0d60
// 虚拟地址: 0x5e0d60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5e0d60(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    void* eax = arg4
    int32_t* edx = *(eax + 0x10)
    uint32_t i_1 = *(eax + 0x18) u>> 2
    int32_t* esi = edx
    
    if (i_1 != 0)
        uint32_t i
        
        do
            int32_t eax_1 = *edx
            var_8 =
                ((eax_1 & 0xff0000) | eax_1 u>> 0x10) u>> 8 | ((eax_1 & 0xff00) | eax_1 << 0x10) << 8
            edx = &edx[1]
            esi = &esi[1]
            i = i_1
            i_1 -= 1
            esi[-1] = fconvert.s(float.t(var_8) * fconvert.t(4.6566128730773926e-10))
        while (i != 1)
        eax = arg4
    
    *(eax + 0x50) += 1
    int32_t ecx_1 = *(eax + 0x50)
    
    if (*(eax + (ecx_1 << 2) + 0x28) != 0)
        (*(eax + (ecx_1 << 2) + 0x28))(eax, 0x8120, var_8)
}
