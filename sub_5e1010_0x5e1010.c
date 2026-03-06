// 函数名称: sub_5e1010
// 虚拟地址: 0x5e1010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e1010(void* arg1)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    float* edi = *(ecx + 0x10)
    uint32_t i_1 = *(ecx + 0x18) u>> 2
    float* ebx = edi
    
    if (i_1 != 0)
        uint32_t i
        
        do
            *ebx = sub_685f40(fconvert.t(*edi) * fconvert.t(32767.0))
            edi = &edi[1]
            ebx += 2
            i = i_1
            i_1 -= 1
        while (i != 1)
        ecx = arg1
    
    int32_t eax_2 = *(ecx + 0x18)
    *(ecx + 0x50) += 1
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(eax_2)
    *(ecx + 0x18) = (eax_3 - edx) s>> 1
    int32_t eax_6 = *(ecx + 0x50)
    
    if (*(ecx + (eax_6 << 2) + 0x28) != 0)
        (*(ecx + (eax_6 << 2) + 0x28))(ecx, 0x8010)
}
