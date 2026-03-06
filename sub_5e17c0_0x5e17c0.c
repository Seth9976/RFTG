// 函数名称: sub_5e17c0
// 虚拟地址: 0x5e17c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5e17c0(int32_t arg1, int32_t arg2, float arg3 @ ecx, void* arg4)
{
    // 第一条实际指令: float var_8 = arg3
    float var_8 = arg3
    void* eax = arg4
    float* edi = *(eax + 0x10)
    uint32_t i_1 = *(eax + 0x18) u>> 2
    int32_t* ebx = edi
    
    if (i_1 != 0)
        uint32_t i
        
        do
            float var_8_1 = fconvert.s(fconvert.t(*edi))
            var_8 = ((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                | ((var_8_1 & 0xff00) | var_8_1 << 0x10) << 8
            int32_t eax_3 = sub_685f40(fconvert.t(var_8) * fconvert.t(2147483647.0))
            *ebx = ((eax_3 & 0xff0000) | eax_3 u>> 0x10) u>> 8 | ((eax_3 & 0xff00) | eax_3 << 0x10) << 8
            edi = &edi[1]
            ebx = &ebx[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        eax = arg4
    
    *(eax + 0x50) += 1
    int32_t ecx_10 = *(eax + 0x50)
    
    if (*(eax + (ecx_10 << 2) + 0x28) != 0)
        (*(eax + (ecx_10 << 2) + 0x28))(eax, 0x9020, var_8)
}
