// 函数名称: sub_5e0c60
// 虚拟地址: 0x5e0c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e0c60(void* arg1)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t* edx = *(edi + 0x10)
    uint32_t i_1 = *(edi + 0x18) u>> 2
    int16_t* esi = edx
    
    if (i_1 != 0)
        uint32_t i
        
        do
            int32_t eax_1 = *edx
            *esi = rol.w(
                (eax_1 u>> 0x18 s>> 0x10).w | zx.w((eax_1 s>> 8).b) | (eax_1 << 0x18 s>> 0x10).w, 8)
            edx = &edx[1]
            esi = &esi[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        edi = arg1
    
    int32_t eax_4 = *(edi + 0x18)
    *(edi + 0x50) += 1
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(eax_4)
    *(edi + 0x18) = (eax_5 - edx_1) s>> 1
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, 0x9010)
}
