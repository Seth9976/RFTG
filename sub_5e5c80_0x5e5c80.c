// 函数名称: sub_5e5c80
// 虚拟地址: 0x5e5c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e5c80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t ebx = *(edi + 0x18)
    int32_t eax_1 = sub_685f40(float.t(ebx) * fconvert.t(*(edi + 8)))
    int32_t edx = *(edi + 0x10)
    int32_t* esi = edx + eax_1 - 4
    int32_t* edx_1 = edx + ebx - 4
    int32_t eax_2 = 0
    int32_t var_8 = *edx_1
    
    while (esi u>= edx)
        eax_2 += ebx - 0x40
        *esi = var_8
        esi -= 4
        
        if (eax_2 * 2 s>= eax_1)
            int32_t eax_4
            int32_t edx_3
            edx_3:eax_4 = sx.q(edx_1[-1])
            int32_t eax_6
            int32_t edx_4
            edx_4:eax_6 = sx.q(var_8)
            edx_1 -= 4
            var_8 = (eax_4 + eax_6) u>> 1 | adc.d(edx_3, edx_4, eax_4 + eax_6 u< eax_4) << 0x1f
            edi = arg1
            eax_2 -= eax_1
    
    *(edi + 0x50) += 1
    int32_t result = *(edi + 0x50)
    *(edi + 0x18) = eax_1
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
