// 函数名称: sub_634fa0
// 虚拟地址: 0x634fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_634fa0(int128_t* arg1, int32_t arg2, int128_t* arg3, int32_t arg4 @ edi)
{
    // 第一条实际指令: int128_t* esi = arg1
    int128_t* esi = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(arg4)
    int32_t i_1 = (eax_1 + (edx & 0x3f)) s>> 6
    
    if (i_1 != 0)
        int32_t i
        
        do
            int128_t xmm1_1 = arg3[1]
            int128_t xmm2_1 = arg3[2]
            int128_t xmm3_1 = arg3[3]
            *esi = *arg3
            esi[1] = xmm1_1
            esi[2] = xmm2_1
            esi[3] = xmm3_1
            arg3 = &arg3[4]
            esi = &esi[4]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t result = arg4 & 0x3f
    
    if (result == 0)
        return result
    
    int32_t result_1 = result
    int128_t* var_c_1 = arg3
    int128_t* var_10_1 = esi
    return sub_5cd110()
}
