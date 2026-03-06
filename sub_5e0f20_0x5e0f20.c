// 函数名称: sub_5e0f20
// 虚拟地址: 0x5e0f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e0f20(float* arg1)
{
    // 第一条实际指令: float* ebx = arg1
    float* ebx = arg1
    float* edi = ebx[4]
    uint32_t i_1 = ebx[6] u>> 2
    arg1 = edi
    
    if (i_1 != 0)
        uint32_t i
        
        do
            *arg1 = sub_685f40(fconvert.t(*edi) * fconvert.t(127.0))
            edi = &edi[1]
            i = i_1
            i_1 -= 1
            arg1 += 1
        while (i != 1)
    
    int32_t eax_2 = ebx[6]
    ebx[0x14] += 1
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(eax_2)
    ebx[6] = (eax_3 + (edx & 3)) s>> 2
    int32_t eax_6 = ebx[0x14]
    
    if (ebx[eax_6 + 0xa] != 0)
        ebx[eax_6 + 0xa](ebx, 0x8008)
}
