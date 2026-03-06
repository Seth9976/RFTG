// 函数名称: sub_4ba310
// 虚拟地址: 0x4ba310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4ba310(int32_t* arg1 @ esi)
{
    // 第一条实际指令: char* edi = *arg1
    char* edi = *arg1
    char ecx = *edi
    uint32_t eax = zx.d(ecx)
    int32_t ecx_1
    
    if (ecx u< 0x80)
        ecx_1 = 1
    else if ((ecx & 0xe0) == 0xc0)
        ecx_1 = 2
    else if ((ecx & 0xf0) != 0xe0)
        int32_t edx_1
        edx_1.b = (ecx & 0xf8) != 0xf0
        ecx_1 = (edx_1 - 1) & 4
    else
        ecx_1 = 3
    
    if (ecx_1 == 2)
        *arg1 = &edi[1]
        eax = ((eax & 0x1f) << 6) + (sx.d(edi[1]) & 0x3f)
    else
        if (ecx_1 == 3)
            *arg1 = &edi[1]
            uint32_t edx_7 = zx.d(edi[1])
            *arg1 = &edi[2]
            int32_t eax_11 = ((((eax & 0xf) << 6) + (edx_7 & 0x3f)) << 6) + (sx.d(edi[2]) & 0x3f)
            *arg1 += 1
            return eax_11
        
        if (ecx_1 == 4)
            *arg1 = &edi[1]
            int32_t eax_3 = ((eax & 7) << 6) + (zx.d(edi[1]) & 0x3f)
            *arg1 = &edi[2]
            uint32_t edx_4 = zx.d(edi[2])
            *arg1 = &edi[3]
            int32_t eax_6 = (eax_3 << 0xc) + ((edx_4 & 0x3f) << 6) + (sx.d(edi[3]) & 0x3f)
            *arg1 += 1
            return eax_6
    
    *arg1 += 1
    return eax
}
