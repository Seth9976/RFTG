// 函数名称: sub_40a9e0
// 虚拟地址: 0x40a9e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_40a9e0()
{
    // 第一条实际指令: void* esi = data_27e7a50
    void* esi = data_27e7a50
    bool eax = *(esi + 0x1e) == 0
    *(esi + 0x1e) = eax
    
    if (eax == 0)
        int32_t eax_1 = *(esi + 0x20)
        
        if (eax_1 s<= 0x300)
            eax_1 = 0x300
        
        void* ecx_1 = data_27e7fd0
        *(ecx_1 + 0x18) = eax_1
        int32_t edx_3
        int32_t eax_4
        
        if (*(esi + 0x1d) == 0)
            edx_3:eax_4 = muls.dp.d(0x55555556, eax_1 << 2)
        else
            int32_t eax_3
            int32_t edx_2
            edx_2:eax_3 = muls.dp.d(0x38e38e39, eax_1 << 4)
            edx_3 = edx_2 s>> 1
        *(ecx_1 + 0x14) = (edx_3 u>> 0x1f) + edx_3
    
    sub_4c5d30(*(esi + 0x1e))
    int32_t ebx
    ebx.b = data_27e7a40 != 0
    
    if (ebx.b == 0)
        sub_4075c0()
    
    void* eax_8 = data_27e7fd0
    int32_t ecx_3 = *(eax_8 + 0x14)
    int32_t eax_9 = *(eax_8 + 0x18)
    int32_t var_20_1 = eax_9
    int32_t var_24 = ecx_3
    sub_4c5680("new size %d %d")
    int80_t result = sub_466520(fconvert.s(float.t(ecx_3)), fconvert.s(float.t(eax_9)))
    
    if (*(data_27e7a40 + 0x18) != 0)
        sub_463b50()
    
    if (*(data_27e7a40 + 0x18) == 0 || ebx.b == 0)
        sub_407670()
    
    return result
}
