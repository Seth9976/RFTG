// 函数名称: sub_5e1870
// 虚拟地址: 0x5e1870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5e1870(int32_t arg1, int32_t arg2, float arg3 @ ecx, void* arg4)
{
    // 第一条实际指令: float var_8 = arg3
    float var_8 = arg3
    void* result = arg4
    float* edx = *(result + 0x10)
    uint32_t i_1 = *(result + 0x18) u>> 2
    void* esi = edx
    
    if (i_1 != 0)
        uint32_t i
        
        do
            long double x87_r7_1 = fconvert.t(*edx)
            edx = &edx[1]
            var_8 = fconvert.s(x87_r7_1)
            esi += 4
            i = i_1
            i_1 -= 1
            *(esi - 4) =
                ((var_8 & 0xff0000) | var_8 u>> 0x10) u>> 8 | ((var_8 & 0xff00) | var_8 << 0x10) << 8
        while (i != 1)
        result = arg4
    
    *(result + 0x50) += 1
    int32_t ecx_1 = *(result + 0x50)
    
    if (*(result + (ecx_1 << 2) + 0x28) == 0)
        return result
    
    return (*(result + (ecx_1 << 2) + 0x28))(result, 0x8120, var_8)
}
