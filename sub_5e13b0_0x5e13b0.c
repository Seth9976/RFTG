// 函数名称: sub_5e13b0
// 虚拟地址: 0x5e13b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5e13b0(int32_t arg1, int32_t arg2, float arg3 @ ecx, void* arg4)
{
    // 第一条实际指令: float var_8 = arg3
    float var_8 = arg3
    void* ecx = arg4
    float* edi = *(ecx + 0x10)
    uint32_t i_1 = *(ecx + 0x18) u>> 2
    char* ebx = edi
    
    if (i_1 != 0)
        uint32_t i
        
        do
            float var_8_1 = fconvert.s(fconvert.t(*edi))
            var_8 = ((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                | ((var_8_1 & 0xff00) | var_8_1 << 0x10) << 8
            *ebx = sub_685f40(fconvert.t(var_8) * fconvert.t(127.0))
            edi = &edi[1]
            ebx = &ebx[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        ecx = arg4
    
    int32_t eax_3 = *(ecx + 0x18)
    *(ecx + 0x50) += 1
    int32_t eax_4
    int32_t edx_6
    edx_6:eax_4 = sx.q(eax_3)
    *(ecx + 0x18) = (eax_4 + (edx_6 & 3)) s>> 2
    int32_t eax_7 = *(ecx + 0x50)
    
    if (*(ecx + (eax_7 << 2) + 0x28) != 0)
        (*(ecx + (eax_7 << 2) + 0x28))(ecx, 0x8008, var_8)
}
