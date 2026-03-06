// 函数名称: sub_5e36d0
// 虚拟地址: 0x5e36d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e36d0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int32_t edi = *(esi + 0x18)
    int32_t eax_1 = sub_685f40(float.t(edi) * fconvert.t(*(esi + 8)))
    int32_t ebx = *(esi + 0x10)
    int32_t edx = 0
    arg1 = ebx + edi - 2
    int16_t edi_2 = *(ebx + edi - 2)
    
    if (ebx + eax_1 - 2 u>= ebx)
        int16_t* ecx_1 = ebx + eax_1 - 2
        
        do
            edx += edi - 0x20
            *ecx_1 = edi_2
            ecx_1 -= 2
            
            if (edx * 2 s>= eax_1)
                int32_t ebx_3 = arg1 - 2
                arg1 = ebx_3
                edi_2 = ((sx.d(*ebx_3) + sx.d(edi_2)) s>> 1).w
                edx -= eax_1
        while (ecx_1 u>= ebx)
    
    *(esi + 0x50) += 1
    *(esi + 0x18) = eax_1
    int32_t result = *(esi + 0x50)
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
