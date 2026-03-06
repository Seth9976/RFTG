// 函数名称: sub_5df720
// 虚拟地址: 0x5df720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5df720(void* arg1)
{
    // 第一条实际指令: void* eax = arg1
    void* eax = arg1
    int32_t i_1 = *(eax + 0x18)
    int32_t esi = *(eax + 0x10)
    char* edx = esi + i_1 - 1
    void* esi_1 = esi + (i_1 << 2) - 4
    float var_c
    int32_t var_8
    
    if (i_1 != 0)
        int32_t i
        
        do
            var_8 = sx.d(*edx)
            edx -= 1
            esi_1 -= 4
            var_c = fconvert.s(float.t(var_8) * fconvert.t(0.0078740157186985016))
            i = i_1
            i_1 -= 1
            *(esi_1 + 4) =
                ((var_c & 0xff0000) | var_c u>> 0x10) u>> 8 | ((var_c & 0xff00) | var_c << 0x10) << 8
        while (i != 1)
        eax = arg1
    
    int32_t ecx = *(eax + 0x18)
    *(eax + 0x50) += 1
    *(eax + 0x18) = ecx * 4
    int32_t ecx_3 = *(eax + 0x50)
    
    if (*(eax + (ecx_3 << 2) + 0x28) != 0)
        (*(eax + (ecx_3 << 2) + 0x28))(eax, 0x9120, var_c, var_8)
}
